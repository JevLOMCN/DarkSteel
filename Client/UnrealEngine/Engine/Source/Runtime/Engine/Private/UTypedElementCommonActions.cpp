// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 147b284a0

UClass * __cdecl UTypedElementCommonActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementCommonActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TypedElementCommonActions",
               &Z_Registration_Info_UClass_UTypedElementCommonActions.InnerSingleton,
               StaticRegisterNativesUTypedElementCommonActions,0x828,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementCommonActions>,
               InternalVTableHelperCtorCaller<UTypedElementCommonActions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementCommonActions.InnerSingleton;
}

// UTypedElementCommonActions @ 147b3ba40

UTypedElementCommonActions * __thiscall
UTypedElementCommonActions::UTypedElementCommonActions
          (UTypedElementCommonActions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
  ::
  TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization><>
            ((TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
              *)&this->field_0x28);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &
       _vftable__for__TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>__
  ;
  return this;
}

// UTypedElementCommonActions @ 147b3ba90

UTypedElementCommonActions * __thiscall
UTypedElementCommonActions::UTypedElementCommonActions
          (UTypedElementCommonActions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
  ::
  TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization><>
            ((TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
              *)&this->field_0x28);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &
       _vftable__for__TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>__
  ;
  return this;
}

// ~UTypedElementCommonActions @ 147b3dad0

void __thiscall
UTypedElementCommonActions::~UTypedElementCommonActions(UTypedElementCommonActions *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &
       _vftable__for__TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>__
  ;
  TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
  ::
  ~TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
            ((TTypedElementInterfaceCustomizationRegistry<FTypedElementCommonActionsCustomization,FTypedElementCommonActionsCustomization>
              *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  return;
}

// CopyNormalizedElements @ 147b4cd80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::CopyNormalizedElements
          (UTypedElementCommonActions *this,FScriptTypedElementListProxy *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_28;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  local_28.Object = (param_1->ElementList).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->ElementList).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  local_28.Object = (TTypedElementList<FScriptTypedElementHandle> *)local_18.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  pcVar1 = *(code **)(*(longlong *)this + 0x2b8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (*pcVar1)(this,&local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar2;
}

// CopyNormalizedElements @ 147b4ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UTypedElementCommonActions::CopyNormalizedElements
          (UTypedElementCommonActions *this,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,FString *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar5;
  UTypedElementRegistry *this_00;
  UObject *this_01;
  UClass *pUVar6;
  void *pvVar7;
  FRegisteredElementType *pFVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  FOutputDevice local_1b0;
  FString local_1a0;
  FOutputDevice local_190;
  FString local_180;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  UTypedElementCommonActions *local_138;
  TObjectPtr<UClass>_u_0 local_130;
  UTypedElementRegistry *local_128;
  FName local_120;
  FString *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_1->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar3 = false;
  }
  else {
    local_138 = this;
    local_118 = param_2;
    ::FString::FString(&local_180,L"");
    FOutputDevice::FOutputDevice(&local_190);
    local_190.bAutoEmitLineTerminator = false;
    local_98._0_8_ = 0;
    local_190._padding_ = (longlong)&___7FStringOutputDevice__6B_;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar14 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    pTVar5 = TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1>::ToSharedRef
                       (param_1,&local_a8);
    TypedElementUtil::BatchElementsByType
              (pTVar5,(TMap<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>_>
                       *)local_98);
    this_00 = UTypedElementRegistry::GetInstance();
    uVar17 = local_70;
    uStack_164 = 1;
    local_150 = 0;
    uStack_154 = local_150;
    if (local_70 != 0) {
      puVar15 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar13 = *puVar15;
      local_150 = 0;
      uVar14 = 0;
      while (uVar13 == 0) {
        lVar10 = (longlong)(int)uVar14;
        local_150 = local_150 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_154 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_147b4cfbf;
        uVar13 = puVar15[lVar10 + 1];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_140 = (int)lVar10;
      uStack_154 = local_140 + -1 + local_150;
      if ((int)local_70 < (int)uStack_154) {
        uStack_154 = local_70;
      }
    }
LAB_147b4cfbf:
    local_170 = (longlong *)local_98;
    local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar13 = local_70 & 0xffffffe0;
    iStack_148 = local_98._8_4_ - local_64;
    uStack_158 = 0xffffffff;
    TStack_108.CurrentBitIndex = uStack_154;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108._padding_ = CONCAT44(uStack_164,uVar14);
    iVar11 = (int)local_70 >> 5;
    TStack_108._28_4_ = uStack_154;
    TStack_108.BaseBitIndex = local_150;
    uStack_e8 = CONCAT44(uStack_144,iStack_148);
    bVar9 = (byte)local_70;
    uStack_168 = uVar14;
    uStack_14c = uStack_154;
    local_128 = this_00;
    local_110 = local_170;
    TStack_108.Array = local_160;
    if (((int)local_70 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (uVar17 != local_70) {
      puVar15 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar15[iVar11];
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar17 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147b4d0c0;
        uVar14 = puVar15[lVar10 + 1];
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_13c = (int)lVar10;
      uVar17 = local_13c + -1 + uVar13;
      if ((int)local_70 < (int)uVar17) {
        uVar17 = local_70;
      }
    }
LAB_147b4d0c0:
    while( true ) {
      plVar12 = local_110;
      if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
        local_1b8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b8);
      }
      if (((TStack_108.CurrentBitIndex == uVar17) &&
          (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar12 == (longlong *)local_98)) break;
      pbVar18 = (byte *)((longlong)TStack_108.CurrentBitIndex * 0x20 + *plVar12);
      ::FString::FString(&local_1a0,L"");
      FOutputDevice::FOutputDevice(&local_1b0);
      bVar9 = *pbVar18;
      local_1b0._padding_ = (longlong)&___7FStringOutputDevice__6B_;
      local_1b0.bAutoEmitLineTerminator = false;
      plVar12 = *(longlong **)(&local_138->field_0x30 + (ulonglong)bVar9 * 8);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = *(longlong **)&local_138->field_0x30;
      }
      local_130.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_130.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_130.DebugPtr);
      }
      this_01 = UTypedElementRegistry::GetElementInterfaceImpl
                          (this_00,bVar9,(TSubclassOf<UInterface> *)&local_130.ObjectPtr);
      pvVar7 = (void *)0x0;
      if (this_01 != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
        pvVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar6);
      }
      if ((plVar12 != (longlong *)0x0) && (pvVar7 != (void *)0x0)) {
        iVar11 = *(int *)(pbVar18 + 0x10);
        pcVar2 = *(code **)(*plVar12 + 0x18);
        local_d8 = *(undefined8 *)(pbVar18 + 8);
        if ((iVar11 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_c8 = (undefined4)local_d8;
        uStack_c4 = local_d8._4_4_;
        uStack_bc = uStack_cc;
        iStack_d0 = iVar11;
        iStack_c0 = iVar11;
        (*pcVar2)(plVar12,pvVar7,&local_c8,&local_1b0);
        this_00 = local_128;
      }
      if (1 < local_1a0.Data.ArrayNum) {
        pFVar8 = UTypedElementRegistry::GetRegisteredElementTypeFromId(this_00,*pbVar18);
        local_120.ComparisonIndex.Value = 0;
        local_120.Number = 0;
        if (pFVar8 != (FRegisteredElementType *)0x0) {
          local_120 = pFVar8->TypeName;
        }
        ::FName::ToString(&local_120,&local_b8);
        FOutputDevice::LogfImpl(&local_190,L"Begin ElementGroup Type=%s\r\n");
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        iVar11 = local_1a0.Data.ArrayNum + -1;
        if (local_1a0.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        ::FString::AppendChars(&local_180,(wchar_t *)local_1a0.Data.AllocatorInstance.Data,iVar11);
        FOutputDevice::Log(&local_190,L"End ElementGroup\r\n");
      }
      FOutputDevice::~FOutputDevice(&local_1b0);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    }
    bVar3 = 1 < local_180.Data.ArrayNum;
    if (local_118 == (FString *)0x0) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_180.Data.ArrayNum != 0) {
        FVar16.Data = local_180.Data.AllocatorInstance.Data;
      }
      FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar16.Data);
    }
    else {
      iVar11 = local_180.Data.ArrayNum + -1;
      if (local_180.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AssignRange(local_118,(wchar_t *)local_180.Data.AllocatorInstance.Data,iVar11);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    FOutputDevice::~FOutputDevice(&local_190);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// CopyNormalizedElementsToString @ 147b4d3a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::CopyNormalizedElementsToString
          (UTypedElementCommonActions *this,FScriptTypedElementListProxy *param_1,FString *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_28;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  local_28.Object = (param_1->ElementList).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->ElementList).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_18,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_18.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    local_28.Object = (TTypedElementList<FScriptTypedElementHandle> *)local_18.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(*(longlong *)this + 0x2b8);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = (*pcVar1)(this,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar2;
}

// CopySelectedElements @ 147b4d6c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::CopySelectedElements
          (UTypedElementCommonActions *this,UTypedElementSelectionSet *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 local_28 [16];
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    return false;
  }
  local_28[0] = false;
  local_28[1] = false;
  local_28._2_2_ = 0;
  local_28._4_4_ = 0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  UTypedElementSelectionSet::GetNormalizedSelection
            (param_1,&local_18,(FTypedElementSelectionNormalizationOptions *)local_28);
  local_28._0_8_ = local_18.Object;
  local_28._8_8_ = local_18.SharedReferenceCount.ReferenceController;
  pcVar1 = *(code **)(*(longlong *)this + 0x2b8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (*pcVar1)(this,local_28,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar2;
}

// CopySelectedElementsToString @ 147b4d780

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::CopySelectedElementsToString
          (UTypedElementCommonActions *this,UTypedElementSelectionSet *param_1,FString *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 local_28 [16];
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    return false;
  }
  local_28[0] = false;
  local_28[1] = false;
  local_28._2_2_ = 0;
  local_28._4_4_ = 0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  UTypedElementSelectionSet::GetNormalizedSelection
            (param_1,&local_18,(FTypedElementSelectionNormalizationOptions *)local_28);
  local_28._0_8_ = local_18.Object;
  local_28._8_8_ = local_18.SharedReferenceCount.ReferenceController;
  pcVar1 = *(code **)(*(longlong *)this + 0x2b8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = (*pcVar1)(this,local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar2;
}

// DeleteNormalizedElements @ 147b50140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::DeleteNormalizedElements
          (UTypedElementCommonActions *this,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,UWorld *param_2,
          UTypedElementSelectionSet *param_3,FTypedElementDeletionOptions *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar6;
  UTypedElementRegistry *this_00;
  longlong lVar7;
  UObject *this_01;
  UClass *pUVar8;
  void *pvVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  undefined1 auStack_1c8 [32];
  UTypedElementSelectionSet *local_1a8;
  FTypedElementDeletionOptions *local_1a0;
  undefined1 local_198 [4];
  int local_194;
  int local_190;
  UTypedElementCommonActions *local_188;
  TObjectPtr<UClass>_u_0 local_180;
  FTypedElementDeletionOptions *local_178;
  UTypedElementSelectionSet *local_170;
  UWorld *local_168;
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  longlong *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  undefined8 local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_d8 [2];
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  bVar17 = 0;
  local_178 = param_4;
  if (param_1->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_88 = (uint *)0x0;
    uVar15 = 0;
    local_80 = 0;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_188 = this;
    local_170 = param_3;
    local_168 = param_2;
    pTVar6 = TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1>::ToSharedRef
                       (param_1,local_d8);
    TypedElementUtil::BatchElementsByType
              (pTVar6,(TMap<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>_>
                       *)local_a8);
    this_00 = UTypedElementRegistry::GetInstance();
    if ((this_00 == (UTypedElementRegistry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Registry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x199,
                           L"FDisableElementDestructionOnGC must be used with a valid registry!"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((this_00->DisableElementDestructionOnGCCount == 0xff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DisableElementDestructionOnGCCount != ((uint8) 0xff)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x28d,L"DisableElementDestructionOnGCCount overflow!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar16 = local_80;
    this_00->DisableElementDestructionOnGCCount =
         this_00->DisableElementDestructionOnGCCount + '\x01';
    uStack_154 = 1;
    local_140 = 0;
    uStack_144 = local_140;
    if (local_80 != 0) {
      puVar10 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar10 = local_88;
      }
      uVar13 = *puVar10;
      local_140 = 0;
      uVar15 = 0;
      while (uVar13 == 0) {
        lVar7 = (longlong)(int)uVar15;
        local_140 = local_140 + 0x20;
        uVar15 = uVar15 + 1;
        uStack_144 = local_80;
        if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < (int)uVar15)
        goto LAB_147b502d1;
        uVar13 = puVar10[lVar7 + 1];
      }
      uStack_154 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_154 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_194 = (int)lVar7;
      uStack_144 = (local_140 - 1) + local_194;
      if ((int)local_80 < (int)uStack_144) {
        uStack_144 = local_80;
      }
    }
LAB_147b502d1:
    local_160 = (longlong *)local_a8;
    uStack_13c = local_ac;
    local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uVar13 = local_80 & 0xffffffe0;
    iStack_138 = local_a8._8_4_ - local_74;
    uStack_148 = 0xffffffff;
    TStack_128.CurrentBitIndex = uStack_144;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    TStack_128._padding_ = CONCAT44(uStack_154,uVar15);
    iVar11 = (int)local_80 >> 5;
    TStack_128._28_4_ = local_ac;
    TStack_128.BaseBitIndex = local_140;
    uStack_108 = CONCAT44(uStack_134,iStack_138);
    bVar5 = (byte)local_80;
    uStack_158 = uVar15;
    local_130 = local_160;
    TStack_128.Array = local_150;
    if (((int)local_80 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (uVar16 != local_80) {
      puVar10 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar10 = local_88;
      }
      uVar15 = -1 << (bVar5 & 0x1f) & puVar10[iVar11];
      while (uVar15 == 0) {
        lVar7 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = local_80;
        if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar11)
        goto LAB_147b503d0;
        uVar15 = puVar10[lVar7 + 1];
      }
      uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_190 = (int)lVar7;
      uVar16 = local_190 + -1 + uVar13;
      if ((int)local_80 < (int)uVar16) {
        uVar16 = local_80;
      }
    }
LAB_147b503d0:
    while( true ) {
      plVar12 = local_130;
      if ((int)local_130[1] - *(int *)((longlong)local_130 + 0x34) != (int)uStack_108) {
        local_198[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (((TStack_128.CurrentBitIndex == uVar16) &&
          (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (plVar12 == (longlong *)local_a8)) break;
      pbVar14 = (byte *)((longlong)TStack_128.CurrentBitIndex * 0x20 + *plVar12);
      bVar5 = *pbVar14;
      plVar12 = *(longlong **)(&local_188->field_0x30 + (ulonglong)bVar5 * 8);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = *(longlong **)&local_188->field_0x30;
      }
      local_180.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_180.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_180.DebugPtr);
      }
      this_01 = UTypedElementRegistry::GetElementInterfaceImpl
                          (this_00,bVar5,(TSubclassOf<UInterface> *)&local_180.ObjectPtr);
      if (this_01 == (UObject *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
        pvVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar8);
      }
      if ((plVar12 != (longlong *)0x0) && (pvVar9 != (void *)0x0)) {
        pcVar2 = *(code **)(*plVar12 + 8);
        local_f8 = *(undefined8 *)(pbVar14 + 8);
        iVar11 = *(int *)(pbVar14 + 0x10);
        if ((iVar11 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        local_1a0 = local_178;
        local_1a8 = local_170;
        local_e8 = (undefined4)local_f8;
        uStack_e4 = local_f8._4_4_;
        uStack_dc = uStack_ec;
        iStack_f0 = iVar11;
        iStack_e0 = iVar11;
        bVar5 = (*pcVar2)(plVar12,pvVar9,&local_e8,local_168);
        bVar17 = bVar17 | bVar5;
      }
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
    }
    if ((this_00->DisableElementDestructionOnGCCount == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DisableElementDestructionOnGCCount != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x293,L"DisableElementDestructionOnGCCount underflow!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00->DisableElementDestructionOnGCCount = this_00->DisableElementDestructionOnGCCount + 0xff
    ;
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  return (bool)bVar17;
}

// DeleteNormalizedElements @ 147b505d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::DeleteNormalizedElements
          (UTypedElementCommonActions *this,FScriptTypedElementListProxy *param_1,UWorld *param_2,
          UTypedElementSelectionSet *param_3,FTypedElementDeletionOptions *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_28;
  TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> local_18;
  
  local_18.Object = (TTypedElementList<FTypedElementHandle> *)(param_1->ElementList).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->ElementList).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList
            (&local_28,
             (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> *)&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_28.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    pwVar2 = L"ElementList is in a invalid state.";
  }
  else {
    if (param_2 != (UWorld *)0x0) {
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar1 = DeleteNormalizedElements(this,&local_18,param_2,param_3,param_4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->ElementList).SharedReferenceCount.ReferenceController);
      return bVar1;
    }
    pwVar2 = L"World is null.";
  }
  FFrame::KismetExecutionMessage(pwVar2,Error,(FName)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->ElementList).SharedReferenceCount.ReferenceController);
  return false;
}

// DeleteSelectedElements @ 147b506f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UTypedElementCommonActions::DeleteSelectedElements
          (UTypedElementCommonActions *this,UTypedElementSelectionSet *param_1,UWorld *param_2,
          FTypedElementDeletionOptions *param_3)

{
  bool bVar1;
  TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    bVar1 = false;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    bVar1 = false;
  }
  else {
    local_28.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
    local_28.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    UTypedElementSelectionSet::GetNormalizedSelection
              (param_1,&local_18,(FTypedElementSelectionNormalizationOptions *)&local_28);
    local_28.Object = local_18.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar1 = DeleteNormalizedElements(this,&local_28,param_2,param_1,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return bVar1;
}

// DuplicateNormalizedElements @ 147b5e420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::DuplicateNormalizedElements
          (UTypedElementCommonActions *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FScriptTypedElementListProxy *param_1,UWorld *param_2,TVector<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  UTypedElementRegistry *pUVar4;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_58;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_48;
  FTypedElementHandle *local_38;
  int local_30;
  TTypedElementList<FTypedElementHandle> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_48.Object = (param_1->ElementList).Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->ElementList).SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_58,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_58.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    if ((local_58.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    pUVar4 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_58.Object)->Registry).WeakPtr);
    local_28 = local_58.Object;
    pTStack_20 = local_58.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(*(longlong *)this + 0x2b0);
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)(this,&local_38,&local_28,param_2,param_3);
    TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,pTVar5,pUVar4);
    DestructItems<FTypedElementHandle,int>(local_38,local_30);
    if (local_38 != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->ElementList).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// DuplicateNormalizedElements @ 147b5e5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::DuplicateNormalizedElements
          (UTypedElementCommonActions *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,UWorld *param_2,
          TVector<double> *param_3)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar5;
  UTypedElementRegistry *this_00;
  longlong lVar6;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *this_01;
  UClass *pUVar8;
  void *pvVar9;
  byte bVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  longlong *local_160;
  uint uStack_158;
  uint uStack_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int local_130;
  int local_12c;
  UTypedElementCommonActions *local_128;
  TObjectPtr<UClass>_u_0 local_120;
  TVector<double> *local_118;
  UWorld *local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_b8;
  undefined1 local_a8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_118 = param_3;
  uVar16 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    uVar17 = (param_1->Object->ElementHandles).ArrayNum;
    local_128 = this;
    local_110 = param_2;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (0 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar17,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_88 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    pTVar5 = TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1>::ToSharedRef
                       (param_1,&local_b8);
    TypedElementUtil::BatchElementsByType
              (pTVar5,(TMap<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>_>
                       *)local_a8);
    this_00 = UTypedElementRegistry::GetInstance();
    uVar17 = local_80;
    uStack_154 = 1;
    local_140 = 0;
    uStack_144 = local_140;
    if (local_80 != 0) {
      pTVar11 = pTVar2;
      if (local_88 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = local_88;
      }
      uVar14 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      local_140 = 0;
      uVar16 = 0;
      while (uVar14 == 0) {
        lVar6 = (longlong)(int)uVar16;
        local_140 = local_140 + 0x20;
        uVar16 = uVar16 + 1;
        uStack_144 = local_80;
        if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < (int)uVar16)
        goto LAB_147b5e724;
        uVar14 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uStack_154 = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_154 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_130 = (int)lVar6;
      uStack_144 = (local_140 - 1) + local_130;
      if ((int)local_80 < (int)uStack_144) {
        uStack_144 = local_80;
      }
    }
LAB_147b5e724:
    local_160 = (longlong *)local_a8;
    uVar14 = local_80 & 0xffffffe0;
    iStack_138 = local_a8._8_4_ - local_74;
    uStack_148 = 0xffffffff;
    TStack_100.CurrentBitIndex = uStack_144;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    TStack_100._padding_ = CONCAT44(uStack_154,uVar16);
    iVar12 = (int)local_80 >> 5;
    TStack_100._28_4_ = uStack_144;
    TStack_100.BaseBitIndex = local_140;
    uStack_e0 = CONCAT44(uStack_134,iStack_138);
    bVar10 = (byte)local_80;
    uStack_158 = uVar16;
    local_150 = pTVar2;
    uStack_13c = uStack_144;
    local_108 = local_160;
    TStack_100.Array = pTVar2;
    if (((int)local_80 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    if (uVar17 != local_80) {
      pTVar11 = pTVar2;
      if (local_88 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = local_88;
      }
      uVar16 = -1 << (bVar10 & 0x1f) &
               *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar16 == 0) {
        lVar6 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        uVar17 = local_80;
        if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar12)
        goto LAB_147b5e830;
        uVar16 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_12c = (int)lVar6;
      uVar17 = local_12c + -1 + uVar14;
      if ((int)local_80 < (int)uVar17) {
        uVar17 = local_80;
      }
    }
LAB_147b5e830:
    while( true ) {
      plVar13 = local_108;
      if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
        local_168[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      if (((TStack_100.CurrentBitIndex == uVar17) && (TStack_100.Array == pTVar2)) &&
         (plVar13 == (longlong *)local_a8)) break;
      pbVar15 = (byte *)((longlong)TStack_100.CurrentBitIndex * 0x20 + *plVar13);
      bVar10 = *pbVar15;
      plVar13 = *(longlong **)(&local_128->field_0x30 + (ulonglong)bVar10 * 8);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = *(longlong **)&local_128->field_0x30;
      }
      local_120.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_120.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_120.DebugPtr);
      }
      this_01 = UTypedElementRegistry::GetElementInterfaceImpl
                          (this_00,bVar10,(TSubclassOf<UInterface> *)&local_120.ObjectPtr);
      if (this_01 == (UObject *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
        pvVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar8);
      }
      if ((plVar13 != (longlong *)0x0) && (pvVar9 != (void *)0x0)) {
        pcVar3 = *(code **)(*plVar13 + 0x10);
        local_d8 = *(undefined8 *)(pbVar15 + 8);
        iVar12 = *(int *)(pbVar15 + 0x10);
        if ((iVar12 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        local_c8 = (undefined4)local_d8;
        uStack_c4 = local_d8._4_4_;
        uStack_bc = uStack_cc;
        iStack_d0 = iVar12;
        iStack_c0 = iVar12;
        (*pcVar3)(plVar13,pvVar9,&local_c8,local_110);
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  return __return_storage_ptr__;
}

// DuplicateSelectedElements @ 147b5e9e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::DuplicateSelectedElements
          (UTypedElementCommonActions *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UTypedElementSelectionSet *param_1,UWorld *param_2,TVector<double> *param_3)

{
  code *pcVar1;
  undefined1 local_28 [16];
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_28[0] = false;
  local_28[1] = false;
  local_28._2_2_ = 0;
  local_28._4_4_ = 0;
  UTypedElementSelectionSet::GetNormalizedSelection
            (param_1,&local_18,(FTypedElementSelectionNormalizationOptions *)local_28);
  local_28._0_8_ = local_18.Object;
  local_28._8_8_ = local_18.SharedReferenceCount.ReferenceController;
  pcVar1 = *(code **)(*(longlong *)this + 0x2b0);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,__return_storage_ptr__,local_28,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147b6ca20

UClass * __cdecl UTypedElementCommonActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementCommonActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TypedElementCommonActions",
               &Z_Registration_Info_UClass_UTypedElementCommonActions.InnerSingleton,
               StaticRegisterNativesUTypedElementCommonActions,0x828,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementCommonActions>,
               InternalVTableHelperCtorCaller<UTypedElementCommonActions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementCommonActions.InnerSingleton;
}

// K2_DuplicateSelectedElements @ 147b78650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::K2_DuplicateSelectedElements
          (UTypedElementCommonActions *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UTypedElementSelectionSet *param_1,UWorld *param_2,TVector<double> *param_3)

{
  code *pcVar1;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar2;
  UTypedElementRegistry *pUVar3;
  undefined1 local_58 [12];
  uint uStack_4c;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_48;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_38;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pTVar2 = UTypedElementSelectionSet::GetElementList(param_1,&local_28);
    pUVar3 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(pTVar2->Object->Registry).WeakPtr);
    local_58[0] = false;
    local_58[1] = false;
    local_58._2_2_ = 0;
    local_58._4_4_ = 0;
    stack0xffffffffffffffb0 = (TReferenceControllerBase<1> *)((ulonglong)uStack_4c << 0x20);
    UTypedElementSelectionSet::GetNormalizedSelection
              (param_1,&local_38,(FTypedElementSelectionNormalizationOptions *)local_58);
    local_58._0_8_ = local_38.Object;
    stack0xffffffffffffffb0 = local_38.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(*(longlong *)this + 0x2b0);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar1)(this,&local_48,local_58,param_2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (stack0xffffffffffffffb0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,&local_48,pUVar3);
    DestructItems<FTypedElementHandle,int>
              ((FTypedElementHandle *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FTypedElementHandle *)local_48.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// K2_PasteElements @ 147b787d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::K2_PasteElements
          (UTypedElementCommonActions *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UTypedElementSelectionSet *param_1,UWorld *param_2,FTypedElementPasteOptions *param_3)

{
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar1;
  UTypedElementRegistry *pUVar2;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_38;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pTVar1 = UTypedElementSelectionSet::GetElementList(param_1,&local_28);
    pUVar2 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(pTVar1->Object->Registry).WeakPtr);
    pTVar3 = PasteElements(this,&local_38,param_1,param_2,param_3,(FString *)0x0);
    TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,pTVar3,pUVar2);
    DestructItems<FTypedElementHandle,int>
              ((FTypedElementHandle *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FTypedElementHandle *)local_38.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// K2_PasteNormalizedElements @ 147b788f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::K2_PasteNormalizedElements
          (UTypedElementCommonActions *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FScriptTypedElementListProxy *param_1,UWorld *param_2,FTypedElementPasteOptions *param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  UTypedElementRegistry *pUVar4;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_58;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_48;
  FTypedElementHandle *local_38;
  int local_30;
  TTypedElementList<FTypedElementHandle> *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  local_48.Object = (param_1->ElementList).Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->ElementList).SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_58,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_58.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    if ((local_58.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    pUVar4 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_58.Object)->Registry).WeakPtr);
    local_28 = local_58.Object;
    pTStack_20 = local_58.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(*(longlong *)this + 0x2c0);
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)(this,&local_38,&local_28,param_2,param_3,0);
    TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,pTVar5,pUVar4);
    DestructItems<FTypedElementHandle,int>(local_38,local_30);
    if (local_38 != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PasteElements @ 147b7c330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::PasteElements
          (UTypedElementCommonActions *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UTypedElementSelectionSet *param_1,UWorld *param_2,FTypedElementPasteOptions *param_3,
          FString *param_4)

{
  code *pcVar1;
  undefined1 local_28 [16];
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_18;
  
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_28[0] = false;
  local_28[1] = false;
  local_28._2_2_ = 0;
  local_28._4_4_ = 0;
  UTypedElementSelectionSet::GetNormalizedSelection
            (param_1,&local_18,(FTypedElementSelectionNormalizationOptions *)local_28);
  local_28._0_8_ = local_18.Object;
  local_28._8_8_ = local_18.SharedReferenceCount.ReferenceController;
  pcVar1 = *(code **)(*(longlong *)this + 0x2c0);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(this,__return_storage_ptr__,local_28,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// PasteElementsFromString @ 147b7c400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::PasteElementsFromString
          (UTypedElementCommonActions *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UTypedElementSelectionSet *param_1,UWorld *param_2,FTypedElementPasteOptions *param_3,
          FString *param_4)

{
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar1;
  UTypedElementRegistry *pUVar2;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_38;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_28;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    pTVar1 = UTypedElementSelectionSet::GetElementList(param_1,&local_28);
    pUVar2 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(pTVar1->Object->Registry).WeakPtr);
    pTVar3 = PasteElements(this,&local_38,param_1,param_2,param_3,param_4);
    TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,pTVar3,pUVar2);
    DestructItems<FTypedElementHandle,int>
              ((FTypedElementHandle *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if ((FTypedElementHandle *)local_38.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// PasteNormalizedElementsFromString @ 147b7d5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
UTypedElementCommonActions::PasteNormalizedElementsFromString
          (UTypedElementCommonActions *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FScriptTypedElementListProxy *param_1,UWorld *param_2,FTypedElementPasteOptions *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  UTypedElementRegistry *pUVar4;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_48;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_38;
  FTypedElementHandle *local_28;
  int local_20;
  TTypedElementList<FTypedElementHandle> *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_38.Object = (param_1->ElementList).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->ElementList).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_48,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_48.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else if (param_2 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    if ((local_48.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
    pUVar4 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_48.Object)->Registry).WeakPtr);
    local_18 = local_48.Object;
    pTStack_10 = local_48.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(*(longlong *)this + 0x2c0);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)(this,&local_28,&local_18,param_2,param_3,param_4);
    TypedElementUtil::ConvertToScriptElementArray(__return_storage_ptr__,pTVar5,pUVar4);
    DestructItems<FTypedElementHandle,int>(local_28,local_20);
    if (local_28 != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ResolveCommonActionsElement @ 147b86010

FTypedElementCommonActionsElement * __thiscall
UTypedElementCommonActions::ResolveCommonActionsElement
          (UTypedElementCommonActions *this,
          FTypedElementCommonActionsElement *__return_storage_ptr__,FTypedElementHandle *param_1)

{
  uint *puVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined4 uVar7;
  bool bVar8;
  UTypedElementRegistry *this_00;
  TTypedElement<ITypedElementWorldInterface> *pTVar9;
  FTypedElementCommonActionsElement *pFVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FTypedElementCommonActionsCustomization *pFVar13;
  HANDLE *ppvVar14;
  longlong lVar15;
  LONG LVar16;
  uint uVar17;
  TTypedElement<ITypedElementWorldInterface> local_88;
  FTypedElementCommonActionsElement local_70;
  FTypedElementInternalData *local_50;
  int local_48;
  
  LVar16 = -1;
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    bVar6 = false;
    local_70.ElementWorldHandle._12_4_ = 0;
    local_70.ElementWorldHandle._16_8_ = 0;
    local_70.CommonActionsCustomization = (FTypedElementCommonActionsCustomization *)0x0;
    local_70.ElementWorldHandle._8_4_ = -1;
    pFVar10 = &local_70;
    uVar12 = 2;
    uVar11 = 0;
  }
  else {
    pFVar13 = *(FTypedElementCommonActionsCustomization **)
               (&this->field_0x30 + (ulonglong)(param_1->DataPtr->Id).field0_0x0._s_0.TypeId * 8);
    if (pFVar13 == (FTypedElementCommonActionsCustomization *)0x0) {
      pFVar13 = *(FTypedElementCommonActionsCustomization **)&this->field_0x30;
    }
    this_00 = UTypedElementRegistry::GetInstance();
    pTVar9 = UTypedElementRegistry::GetElement<ITypedElementWorldInterface>
                       (this_00,&local_88,param_1);
    pFVar10 = FTypedElementCommonActionsElement::FTypedElementCommonActionsElement
                        ((FTypedElementCommonActionsElement *)&local_50,pTVar9,pFVar13);
    bVar6 = true;
    uVar11 = *(undefined8 *)&pFVar10->ElementWorldHandle;
    uVar12 = 0;
  }
  *(undefined8 *)&__return_storage_ptr__->ElementWorldHandle = uVar11;
  *(undefined4 *)&(__return_storage_ptr__->ElementWorldHandle).field_0x8 =
       *(undefined4 *)&(pFVar10->ElementWorldHandle).field_0x8;
  uVar11 = *(undefined8 *)&(pFVar10->ElementWorldHandle).field_0x10;
  *(undefined8 *)&pFVar10->ElementWorldHandle = 0;
  *(undefined4 *)&(pFVar10->ElementWorldHandle).field_0x8 = 0xffffffff;
  uVar7 = local_70.ElementWorldHandle._8_4_;
  *(undefined8 *)&(__return_storage_ptr__->ElementWorldHandle).field_0x10 = uVar11;
  *(undefined8 *)&(pFVar10->ElementWorldHandle).field_0x10 = 0;
  __return_storage_ptr__->CommonActionsCustomization = pFVar10->CommonActionsCustomization;
  if (((int)uVar12 != 0) && (local_70.ElementWorldHandle._0_8_ != 0)) {
    LOCK();
    *(int *)(local_70.ElementWorldHandle._0_8_ + 0xc) =
         *(int *)(local_70.ElementWorldHandle._0_8_ + 0xc) + -1;
    UNLOCK();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(local_70.ElementWorldHandle._0_8_ + 0x10);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      lVar15 = (longlong)(int)local_70.ElementWorldHandle._8_4_;
      if (local_70.ElementWorldHandle._8_4_ != -1) {
        EnterCriticalSection(lpCriticalSection);
        p_Var3 = lpCriticalSection[1].DebugInfo;
        bVar5 = (byte)uVar7 & 0x1f;
        uVar17 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        if (((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTypedElementCommonActionsElement *)(*pcVar4)();
            return pFVar10;
          }
        }
        ppvVar14 = &lpCriticalSection[1].OwningThread;
        if ((HANDLE *)lpCriticalSection[1].SpinCount != (HANDLE *)0x0) {
          ppvVar14 = (HANDLE *)lpCriticalSection[1].SpinCount;
        }
        lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
        if ((*(uint *)((longlong)ppvVar14 + lVar2) & uVar17) == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTypedElementCommonActionsElement *)(*pcVar4)();
            return pFVar10;
          }
        }
        if (lpCriticalSection[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var3) =
               uVar7;
        }
        *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var3) = 0xffffffff;
        if (0 < lpCriticalSection[2].RecursionCount) {
          LVar16 = lpCriticalSection[2].LockCount;
        }
        *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var3) = LVar16;
        lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
        lpCriticalSection[2].LockCount = uVar7;
        if (((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTypedElementCommonActionsElement *)(*pcVar4)();
            return pFVar10;
          }
        }
        ppvVar14 = &lpCriticalSection[1].OwningThread;
        if ((HANDLE *)lpCriticalSection[1].SpinCount != (HANDLE *)0x0) {
          ppvVar14 = (HANDLE *)lpCriticalSection[1].SpinCount;
        }
        puVar1 = (uint *)(lVar2 + (longlong)ppvVar14);
        *puVar1 = *puVar1 & ~uVar17;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  if ((bVar6) && (local_50 != (FTypedElementInternalData *)0x0)) {
    FTypedElementInternalData::ReleaseRef(local_50,local_48);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUTypedElementCommonActions @ 147b8ed40

void __cdecl UTypedElementCommonActions::StaticRegisterNativesUTypedElementCommonActions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementCommonActions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyNormalizedElements @ 147b925d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execCopyNormalizedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong *plVar4;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_38;
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28 = 0;
  pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  plVar4 = &local_28;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar4 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.Object = (TTypedElementList<FScriptTypedElementHandle> *)*plVar4;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar4[1];
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_38,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_38.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    uVar3 = 0;
  }
  else {
    local_18.Object = (TTypedElementList<FScriptTypedElementHandle> *)local_38.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(param_1,&local_18,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// execCopyNormalizedElementsToString @ 147b92730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execCopyNormalizedElementsToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  longlong *plVar5;
  void *local_68;
  undefined8 local_60;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_58;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  plVar5 = &local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  ppvVar4 = &local_68;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Object = (TTypedElementList<FScriptTypedElementHandle> *)*plVar5;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar5[1];
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_58,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_58.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    uVar3 = 0;
  }
  else {
    local_38.Object = (TTypedElementList<FScriptTypedElementHandle> *)local_58.Object;
    local_38.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b8);
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(param_1,&local_38,ppvVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execCopySelectedElements @ 147b928f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execCopySelectedElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  UTypedElementSelectionSet *local_res10;
  undefined8 local_res18;
  undefined1 local_38 [12];
  uint uStack_2c;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_28;
  
  local_res10 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UTypedElementSelectionSet *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_38[0] = false;
  local_38[1] = false;
  local_38._2_2_ = 0;
  local_38._4_4_ = 0;
  stack0xffffffffffffffd0 = (TReferenceControllerBase<1> *)((ulonglong)uStack_2c << 0x20);
  UTypedElementSelectionSet::GetNormalizedSelection
            (local_res10,&local_28,(FTypedElementSelectionNormalizationOptions *)local_38);
  local_38._0_8_ = local_28.Object;
  stack0xffffffffffffffd0 = local_28.SharedReferenceCount.ReferenceController;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b8);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,local_38,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (stack0xffffffffffffffd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execCopySelectedElementsToString @ 147b92a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execCopySelectedElementsToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  UTypedElementSelectionSet *local_res10;
  undefined8 local_res18;
  undefined1 local_58 [16];
  void *local_48;
  undefined8 local_40;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_38;
  
  local_res10 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  ppvVar4 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UTypedElementSelectionSet *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    uVar3 = 0;
  }
  else {
    local_58[0] = false;
    local_58[1] = false;
    local_58._2_2_ = 0;
    local_58._4_4_ = 0;
    local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
    UTypedElementSelectionSet::GetNormalizedSelection
              (local_res10,&local_38,(FTypedElementSelectionNormalizationOptions *)local_58);
    local_58._0_8_ = local_38.Object;
    local_58._8_8_ = local_38.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b8);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = (*pcVar2)(param_1,local_58,ppvVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execDeleteNormalizedElements @ 147b92d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execDeleteNormalizedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTypedElementSelectionSet *pUVar2;
  UWorld *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  atomic<int> *paVar6;
  wchar_t *pwVar7;
  FTypedElementDeletionOptions *pFVar8;
  FTypedElementDeletionOptions local_res10 [2];
  UTypedElementSelectionSet *local_res18;
  UWorld *local_res20;
  TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> local_68;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_58;
  TTypedElementList<FTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_48 = (TTypedElementList<FTypedElementHandle> *)0x0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0].bVerifyDeletionCanHappen = false;
  local_res10[0].bWarnAboutReferences = true;
  local_res10[0].bWarnAboutSoftReferences = true;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pTVar4 = pTStack_40;
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  pFVar8 = local_res10;
  if ((FTypedElementDeletionOptions *)param_2->MostRecentPropertyAddress !=
      (FTypedElementDeletionOptions *)0x0) {
    pFVar8 = (FTypedElementDeletionOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_40 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTStack_40->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_68.Object = local_48;
  local_68.SharedReferenceCount.ReferenceController = pTStack_40;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList
            (&local_58,
             (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> *)&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_58.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    pwVar7 = L"ElementList is in a invalid state.";
  }
  else {
    if (pUVar3 != (UWorld *)0x0) {
      local_68.Object = local_58.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = DeleteNormalizedElements
                        ((UTypedElementCommonActions *)param_1,&local_68,pUVar3,pUVar2,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      goto LAB_147b92f4b;
    }
    pwVar7 = L"World is null.";
  }
  local_68.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  FFrame::KismetExecutionMessage(pwVar7,Error,(FName)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  bVar5 = false;
LAB_147b92f4b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(bool *)param_3 = bVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execDeleteSelectedElements @ 147b92f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execDeleteSelectedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorld *pUVar2;
  UTypedElementSelectionSet *pUVar3;
  bool bVar4;
  FTypedElementDeletionOptions *pFVar5;
  FTypedElementDeletionOptions local_res10 [2];
  UWorld *local_res18;
  UTypedElementSelectionSet *local_res20;
  TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> local_58;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_48;
  
  local_res20 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0].bVerifyDeletionCanHappen = false;
  local_res10[0].bWarnAboutReferences = true;
  local_res10[0].bWarnAboutSoftReferences = true;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  local_58.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  pFVar5 = local_res10;
  if ((FTypedElementDeletionOptions *)param_2->MostRecentPropertyAddress !=
      (FTypedElementDeletionOptions *)0x0) {
    pFVar5 = (FTypedElementDeletionOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res18 == (UWorld *)0x0) {
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_58.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  local_58.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  UTypedElementSelectionSet::GetNormalizedSelection
            (local_res20,&local_48,(FTypedElementSelectionNormalizationOptions *)&local_58);
  local_58.Object = local_48.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = DeleteNormalizedElements
                    ((UTypedElementCommonActions *)param_1,&local_58,pUVar2,pUVar3,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = bVar4;
  return;
}

// execDuplicateNormalizedElements @ 147b93310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execDuplicateNormalizedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  atomic<int> *paVar6;
  UTypedElementRegistry *pUVar7;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  uchar *puVar10;
  longlong local_res10 [3];
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_b8;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_a8;
  TTypedElementList<FScriptTypedElementHandle> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_88;
  FTypedElementHandle *local_78;
  int local_70;
  TTypedElementList<FTypedElementHandle> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  uchar local_58 [32];
  
  local_98 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pTVar4 = pTStack_90;
  lVar3 = local_res10[0];
  puVar10 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTStack_90->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_88.Object = local_98;
  local_88.SharedReferenceCount.ReferenceController = pTStack_90;
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_a8,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_a8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
  }
  else if (lVar3 == 0) {
    local_res10[2] = 0;
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
  }
  else {
    if ((local_a8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar7 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_a8.Object)->Registry).WeakPtr);
    local_68 = local_a8.Object;
    pTStack_60 = local_a8.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b0);
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)(param_1,&local_78,&local_68,lVar3,puVar10);
    TypedElementUtil::ConvertToScriptElementArray(&local_b8,pTVar8,pUVar7);
    DestructItems<FTypedElementHandle,int>(local_78,local_70);
    if (local_78 != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_3 == &local_b8) {
    iVar9 = local_b8.ArrayNum;
  }
  else {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_b8.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_b8.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_b8.ArrayMax;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    iVar9 = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_b8.AllocatorInstance.Data,iVar9);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return;
}

// execK2_DuplicateSelectedElements @ 147b93e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execK2_DuplicateSelectedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  UTypedElementSelectionSet *this;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar4;
  UTypedElementRegistry *pUVar5;
  wchar_t *pwVar6;
  uchar *puVar7;
  longlong local_res10;
  UTypedElementSelectionSet *local_res18;
  undefined8 local_res20;
  undefined1 local_a8 [12];
  uint uStack_9c;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_98;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_78;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_68;
  uchar local_58 [32];
  
  local_res18 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  this = local_res18;
  lVar3 = local_res10;
  puVar7 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UTypedElementSelectionSet *)0x0) {
    pwVar6 = L"SelectionSet is null.";
  }
  else {
    if (local_res10 != 0) {
      pTVar4 = UTypedElementSelectionSet::GetElementList(local_res18,&local_68);
      pUVar5 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(pTVar4->Object->Registry).WeakPtr);
      local_a8[0] = false;
      local_a8[1] = false;
      local_a8._2_2_ = 0;
      local_a8._4_4_ = 0;
      stack0xffffffffffffff60 = (TReferenceControllerBase<1> *)((ulonglong)uStack_9c << 0x20);
      UTypedElementSelectionSet::GetNormalizedSelection
                (this,&local_78,(FTypedElementSelectionNormalizationOptions *)local_a8);
      local_a8._0_8_ = local_78.Object;
      stack0xffffffffffffff60 = local_78.SharedReferenceCount.ReferenceController;
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b0);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(param_1,&local_88,local_a8,lVar3,puVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (stack0xffffffffffffff60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      TypedElementUtil::ConvertToScriptElementArray(&local_98,&local_88,pUVar5);
      DestructItems<FTypedElementHandle,int>
                ((FTypedElementHandle *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
      if ((FTypedElementHandle *)local_88.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      goto LAB_147b94034;
    }
    pwVar6 = L"World is null.";
  }
  local_res20 = 0;
  FFrame::KismetExecutionMessage(pwVar6,Error,(FName)0x0);
  local_98.ArrayMax = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
LAB_147b94034:
  if (param_3 != &local_98) {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_98.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_98.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_98.ArrayMax;
    local_98.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// execK2_PasteElements @ 147b940d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execK2_PasteElements(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UWorld *pUVar3;
  UTypedElementSelectionSet *pUVar4;
  uint uVar5;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar6;
  UTypedElementRegistry *pUVar7;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  wchar_t *pwVar9;
  TObjectPtr<UTypedElementSelectionSet>_u_0 *pTVar10;
  undefined1 auStackY_138 [32];
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_108;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_f8;
  UWorld *local_e8;
  UTypedElementSelectionSet *local_e0;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_d8;
  TObjectPtr<UTypedElementSelectionSet>_u_0 local_c8;
  undefined1 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e8 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_c8.DebugPtr = (UTypedElementSelectionSet *)0x0;
  local_c0 = 0;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pUVar4 = local_e0;
  pUVar3 = local_e8;
  pTVar10 = &local_c8;
  if ((TObjectPtr<UTypedElementSelectionSet>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UTypedElementSelectionSet>_u_0 *)0x0) {
    pTVar10 = (TObjectPtr<UTypedElementSelectionSet>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_e0 == (UTypedElementSelectionSet *)0x0) {
    pwVar9 = L"SelectionSet is null.";
  }
  else {
    if (local_e8 != (UWorld *)0x0) {
      pTVar6 = UTypedElementSelectionSet::GetElementList(local_e0,&local_d8);
      pUVar7 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(pTVar6->Object->Registry).WeakPtr);
      pTVar8 = PasteElements((UTypedElementCommonActions *)param_1,&local_f8,pUVar4,pUVar3,
                             (FTypedElementPasteOptions *)&pTVar10->ObjectPtr,(FString *)0x0);
      TypedElementUtil::ConvertToScriptElementArray(&local_108,pTVar8,pUVar7);
      DestructItems<FTypedElementHandle,int>
                ((FTypedElementHandle *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FTypedElementHandle *)local_f8.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      goto LAB_147b942e6;
    }
    pwVar9 = L"World is null.";
  }
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FFrame::KismetExecutionMessage(pwVar9,Error,(FName)0x0);
  local_108.ArrayMax = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
LAB_147b942e6:
  if (param_3 != &local_108) {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_108.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_108.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_108.ArrayMax;
    local_108.ArrayMax = 0;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar2 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar5 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar5) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  return;
}

// execK2_PasteNormalizedElements @ 147b94410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execK2_PasteNormalizedElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  UTypedElementRegistry *pUVar6;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uchar *puVar9;
  undefined1 auStackY_178 [32];
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_148;
  longlong local_138 [2];
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_128;
  undefined8 local_118;
  undefined8 local_110;
  uchar local_108 [8];
  TReferenceControllerBase<1> *pTStack_100;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_f8;
  FTypedElementHandle *local_e8;
  int local_e0;
  TTypedElementList<FTypedElementHandle> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  pTStack_100 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_138[0] = 0;
  puVar9 = local_108;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  lVar3 = local_138[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Object = *(TTypedElementList<FScriptTypedElementHandle> **)puVar9;
  local_f8.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(puVar9 + 8);
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_128,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_128.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_118 = 0;
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
  }
  else if (lVar3 == 0) {
    local_110 = 0;
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
  }
  else {
    if ((local_128.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_128.Object)->Registry).WeakPtr);
    local_d8 = local_128.Object;
    pTStack_d0 = local_128.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
    if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)(param_1,&local_e8,&local_d8,lVar3);
    TypedElementUtil::ConvertToScriptElementArray(&local_148,pTVar7,pUVar6);
    DestructItems<FTypedElementHandle,int>(local_e8,local_e0);
    if (local_e8 != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  if (param_3 == &local_148) {
    iVar8 = local_148.ArrayNum;
  }
  else {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_148.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_148.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_148.ArrayMax;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    iVar8 = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_148.AllocatorInstance.Data,iVar8);
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar8 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar4 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  return;
}

// execPasteElementsFromString @ 147b94a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execPasteElementsFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  UTypedElementSelectionSet *this;
  uint uVar5;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *pTVar6;
  UTypedElementRegistry *pUVar7;
  wchar_t *pwVar8;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [12];
  uint uStack_12c;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_128;
  longlong local_118;
  UTypedElementSelectionSet *local_110;
  void *local_108;
  undefined8 local_100;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_f8;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_e8;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_d8;
  undefined8 local_c8;
  undefined1 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_110 = (UTypedElementSelectionSet *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_108 = (void *)0x0;
  local_100 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  this = local_110;
  lVar4 = local_118;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_110 == (UTypedElementSelectionSet *)0x0) {
    pwVar8 = L"SelectionSet is null.";
  }
  else {
    if (local_118 != 0) {
      pTVar6 = UTypedElementSelectionSet::GetElementList(local_110,&local_d8);
      pUVar7 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(pTVar6->Object->Registry).WeakPtr);
      local_138[0] = false;
      local_138[1] = false;
      local_138._2_2_ = 0;
      local_138._4_4_ = 0;
      stack0xfffffffffffffed0 = (TReferenceControllerBase<1> *)((ulonglong)uStack_12c << 0x20);
      UTypedElementSelectionSet::GetNormalizedSelection
                (this,&local_e8,(FTypedElementSelectionNormalizationOptions *)local_138);
      local_138._0_8_ = local_e8.Object;
      stack0xfffffffffffffed0 = local_e8.SharedReferenceCount.ReferenceController;
      pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(param_1,&local_f8,local_138,lVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (stack0xfffffffffffffed0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      TypedElementUtil::ConvertToScriptElementArray(&local_128,&local_f8,pUVar7);
      DestructItems<FTypedElementHandle,int>
                ((FTypedElementHandle *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((FTypedElementHandle *)local_f8.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      goto LAB_147b94d0e;
    }
    pwVar8 = L"World is null.";
  }
  local_138._0_8_ = (TTypedElementList<FTypedElementHandle> *)0x0;
  FFrame::KismetExecutionMessage(pwVar8,Error,(FName)0x0);
  local_128.ArrayMax = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
LAB_147b94d0e:
  if (param_3 != &local_128) {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_128.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_128.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_128.ArrayMax;
    local_128.ArrayMax = 0;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar3 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar5 = local_78._4_4_;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  uStack_70 = 0xffffffff;
  if (0x80 < uVar5) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  return;
}

// execPasteNormalizedElementsFromString @ 147b94e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementCommonActions::execPasteNormalizedElementsFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  UTypedElementRegistry *pUVar6;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uchar *puVar9;
  undefined1 auStackY_188 [32];
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_158;
  longlong local_148 [2];
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_138;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  uchar local_108 [8];
  TReferenceControllerBase<1> *pTStack_100;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_f8;
  FTypedElementHandle *local_e8;
  int local_e0;
  TTypedElementList<FTypedElementHandle> *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  pTStack_100 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_148[0] = 0;
  puVar9 = local_108;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_128 = (void *)0x0;
  local_120 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  lVar3 = local_148[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Object = *(TTypedElementList<FScriptTypedElementHandle> **)puVar9;
  local_f8.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)(puVar9 + 8);
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_138,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_138.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_118 = 0;
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
  }
  else if (lVar3 == 0) {
    local_110 = 0;
    FFrame::KismetExecutionMessage(L"World is null.",Error,(FName)0x0);
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
  }
  else {
    if ((local_138.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_138.Object)->Registry).WeakPtr);
    local_d8 = local_138.Object;
    pTStack_d0 = local_138.SharedReferenceCount.ReferenceController;
    pcVar2 = *(code **)(*(longlong *)param_1 + 0x2c0);
    if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
             (*pcVar2)(param_1,&local_e8,&local_d8,lVar3);
    TypedElementUtil::ConvertToScriptElementArray(&local_158,pTVar7,pUVar6);
    DestructItems<FTypedElementHandle,int>(local_e8,local_e0);
    if (local_e8 != (FTypedElementHandle *)0x0) {
      FMemory::Free(local_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (param_3 == &local_158) {
    iVar8 = local_158.ArrayNum;
  }
  else {
    DestructItems<FScriptTypedElementHandle,int>
              (*(FScriptTypedElementHandle **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_158.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_158.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_158.ArrayMax;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    iVar8 = 0;
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)local_158.AllocatorInstance.Data,iVar8);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,TFunction<TSharedRef<FWorldElementPasteImporter,1>___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a0,0,local_a0._8_4_);
  iVar8 = SUB84(local_a0._8_8_,4);
  local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar4 = local_78._4_4_;
  uStack_70 = 0xffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  if (0x80 < uVar4) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_100);
  return;
}

