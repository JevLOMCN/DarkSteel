// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 15

// StaticClass @ 14453bc50

UClass * __cdecl UTypedElementSelectionSetLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementSelectionSetLibrary",
               &Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.InnerSingleton,
               StaticRegisterNativesUTypedElementSelectionSetLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTypedElementSelectionSetLibrary>,
               InternalVTableHelperCtorCaller<UTypedElementSelectionSetLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.InnerSingleton;
}

// UTypedElementSelectionSetLibrary @ 14453f2b0

UTypedElementSelectionSetLibrary * __thiscall
UTypedElementSelectionSetLibrary::UTypedElementSelectionSetLibrary
          (UTypedElementSelectionSetLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTypedElementSelectionSetLibrary__6B_;
  return this;
}

// UTypedElementSelectionSetLibrary @ 14453f2e0

UTypedElementSelectionSetLibrary * __thiscall
UTypedElementSelectionSetLibrary::UTypedElementSelectionSetLibrary
          (UTypedElementSelectionSetLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UTypedElementSelectionSetLibrary__6B_;
  return this;
}

// ~UTypedElementSelectionSetLibrary @ 14453f540

void __thiscall
UTypedElementSelectionSetLibrary::~UTypedElementSelectionSetLibrary
          (UTypedElementSelectionSetLibrary *this)

{
  *(undefined ***)this = &___7UTypedElementSelectionSetLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DeselectElementsFromList @ 144542e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UTypedElementSelectionSetLibrary::DeselectElementsFromList
          (UTypedElementSelectionSet *param_1,FScriptTypedElementListProxy *param_2,
          FTypedElementSelectionOptions *param_3)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  TTypedElementList<FTypedElementHandle> *this;
  undefined1 local_res8 [8];
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_b8;
  undefined8 local_a8;
  TObjectPtr<UClass>_u_0 local_a0;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_98;
  code *local_88;
  UTypedElementSelectionSet **local_80;
  UTypedElementSelectionSet *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  FName FStack_58;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  FLegacySyncScopedBatch local_38;
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
  }
  local_98.Object = (param_2->ElementList).Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_2->ElementList).SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_b8,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (local_b8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_a8 = 0;
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->ElementList).SharedReferenceCount.ReferenceController);
    uVar4 = 0;
  }
  else {
    local_60._0_1_ = param_3->bAllowHidden;
    local_60._1_1_ = param_3->bAllowGroups;
    local_60._2_1_ = param_3->bAllowLegacyNotifications;
    local_60._3_1_ = param_3->bWarnIfLocked;
    local_60._4_1_ = param_3->bAllowSubRootSelection;
    local_60._5_1_ = param_3->ChildElementInclusionMethod;
    local_60._6_2_ = *(undefined2 *)&param_3->field_0x6;
    FStack_58 = param_3->TEDSIntegrationSelectionSetName;
    this = local_b8.Object;
    if ((local_b8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), this = local_b8.Object, bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FVar2.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar2.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = (bool)local_60._2_1_;
    local_48 = (undefined1)local_60;
    uStack_47 = local_60._1_1_;
    uStack_46 = local_60._2_1_;
    uStack_45 = local_60._3_1_;
    uStack_44 = local_60._4_1_;
    uStack_43 = local_60._5_1_;
    uStack_42 = local_60._6_1_;
    uStack_41 = local_60._7_1_;
    uStack_40 = (undefined1)FStack_58.ComparisonIndex.Value;
    uStack_3f = FStack_58.ComparisonIndex.Value._1_1_;
    uStack_3e = FStack_58.ComparisonIndex.Value._2_1_;
    uStack_3d = FStack_58.ComparisonIndex.Value._3_1_;
    uStack_3c = (undefined1)FStack_58.Number;
    uStack_3b = FStack_58.Number._1_1_;
    uStack_3a = FStack_58.Number._2_1_;
    uStack_39 = FStack_58.Number._3_1_;
    if (((param_1->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
              (&local_38,(param_1->ElementList).Object,bVar3);
    local_70 = local_res8;
    local_res8[0] = 0;
    local_68 = &local_48;
    local_a0.DebugPtr = (UClass *)0x0;
    local_80 = &local_78;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UTypedElementSelectionSet::DeselectElements'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
               ::Call;
    local_78 = param_1;
    TTypedElementList<FTypedElementHandle>::ForEachElementHandle
              (this,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_88,
               (TSubclassOf<UInterface> *)&local_a0.ObjectPtr);
    uVar4 = local_res8[0];
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
              (&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  }
  return (bool)uVar4;
}

// GetNormalizedElementList @ 1445445d0

/* WARNING: Enum "Type": Some values do not have unique names */

FScriptTypedElementListProxy * __cdecl
UTypedElementSelectionSetLibrary::GetNormalizedElementList
          (FScriptTypedElementListProxy *__return_storage_ptr__,UTypedElementSelectionSet *param_1,
          FScriptTypedElementListProxy *param_2,FTypedElementSelectionNormalizationOptions *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  TTypedElementList<FScriptTypedElementHandle> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FScriptTypedElementListProxy *pFVar8;
  UTypedElementRegistry *pUVar9;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *pTVar10;
  FTypedElementSelectionNormalizationOptions local_b8;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_a8;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_98;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_88;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_78;
  TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> local_68;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_58;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> local_48 [2];
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
  }
  local_98.Object = (param_2->ElementList).Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_2->ElementList).SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_a8,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (local_a8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    (__return_storage_ptr__->ElementList).Object =
         (TTypedElementList<FScriptTypedElementHandle> *)0x0;
    (__return_storage_ptr__->ElementList).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    uVar2 = (param_3->TEDSIntegrationSelectionSetName).Number;
    uVar1._0_1_ = param_3->bExpandGroups;
    uVar1._1_1_ = param_3->bFollowAttachment;
    uVar1._2_2_ = *(undefined2 *)&param_3->field_0x2;
    uVar1._4_4_ = (param_3->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
    if ((local_a8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
      return pFVar8;
    }
    FVar6.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_a8.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
      return pFVar8;
    }
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8._0_8_ = uVar1;
    local_b8.TEDSIntegrationSelectionSetName.Number = uVar2;
    pUVar9 = UTypedElementRegistry::GetInstance();
    TTypedElementList<FTypedElementHandle>::Private_CreateElementList(&local_88,pUVar9);
    local_58.Object = local_88.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UTypedElementSelectionSet::GetNormalizedElementList(param_1,&local_78,&local_b8,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    local_68.Object = local_88.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = UE::TypedElementFramework::ConvertToScriptTypedElementList(local_48,&local_68);
    if ((pTVar10->Object == (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
      return pFVar8;
    }
    pTVar3 = pTVar10->Object;
    pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
    (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar10->Object = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
    if ((pTVar3 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
      return pFVar8;
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    (__return_storage_ptr__->ElementList).Object = pTVar3;
    (__return_storage_ptr__->ElementList).SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetNormalizedSelection @ 144544f30

/* WARNING: Enum "Type": Some values do not have unique names */

FScriptTypedElementListProxy * __cdecl
UTypedElementSelectionSetLibrary::GetNormalizedSelection
          (FScriptTypedElementListProxy *__return_storage_ptr__,UTypedElementSelectionSet *param_1,
          FTypedElementSelectionNormalizationOptions *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  TTypedElementList<FTypedElementHandle> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FScriptTypedElementListProxy *pFVar8;
  UTypedElementRegistry *pUVar9;
  TTypedElementList<FScriptTypedElementHandle> *pTVar10;
  FTypedElementSelectionNormalizationOptions local_98;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> local_88;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_78;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_68;
  TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> local_58;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_48 [2];
  
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
  }
  uVar1._0_1_ = param_2->bExpandGroups;
  uVar1._1_1_ = param_2->bFollowAttachment;
  uVar1._2_2_ = *(undefined2 *)&param_2->field_0x2;
  uVar1._4_4_ = (param_2->TEDSIntegrationSelectionSetName).ComparisonIndex.Value;
  uVar2 = (param_2->TEDSIntegrationSelectionSetName).Number;
  if (((param_1->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
    return pFVar8;
  }
  pTVar3 = (param_1->ElementList).SharedReferenceCount.ReferenceController;
  pTVar4 = (param_1->ElementList).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pTVar4 == (TTypedElementList<FTypedElementHandle> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
    return pFVar8;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98._0_8_ = uVar1;
  local_98.TEDSIntegrationSelectionSetName.Number = uVar2;
  pUVar9 = UTypedElementRegistry::GetInstance();
  TTypedElementList<FTypedElementHandle>::Private_CreateElementList(&local_78,pUVar9);
  local_48[0].Object = local_78.Object;
  local_48[0].SharedReferenceCount.ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = pTVar4;
  local_68.SharedReferenceCount.ReferenceController = pTVar3;
  UTypedElementSelectionSet::GetNormalizedElementList(param_1,&local_68,&local_98,local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_58.Object = local_78.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToScriptTypedElementList(&local_88,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_88.Object == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    (__return_storage_ptr__->ElementList).Object =
         (TTypedElementList<FScriptTypedElementHandle> *)0x0;
    (__return_storage_ptr__->ElementList).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10 = local_88.Object;
    if ((local_88.Object == (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), pTVar10 = local_88.Object, bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
      return pFVar8;
    }
    FVar6.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar10 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FScriptTypedElementListProxy *)(*pcVar5)();
      return pFVar8;
    }
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    (__return_storage_ptr__->ElementList).Object = pTVar10;
    (__return_storage_ptr__->ElementList).SharedReferenceCount.ReferenceController =
         FVar6.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 144545e80

UClass * __cdecl UTypedElementSelectionSetLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementSelectionSetLibrary",
               &Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.InnerSingleton,
               StaticRegisterNativesUTypedElementSelectionSetLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTypedElementSelectionSetLibrary>,
               InternalVTableHelperCtorCaller<UTypedElementSelectionSetLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementSelectionSetLibrary.InnerSingleton;
}

// SetSelectionFromList @ 14454a450

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UTypedElementSelectionSetLibrary::SetSelectionFromList
          (UTypedElementSelectionSet *param_1,FScriptTypedElementListProxy *param_2,
          FTypedElementSelectionOptions *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  TReferenceControllerBase<1> *local_res8;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_98;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_88;
  FTypedElementSelectionOptions local_78;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_68;
  FTypedElementSelectionOptions local_58;
  FTypedElementSelectionOptions local_48;
  FLegacySyncScopedBatch local_38;
  FTypedElementSelectionOptions local_28;
  
  bVar4 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1 == (UTypedElementSelectionSet *)0x0) {
    local_res8 = (TReferenceControllerBase<1> *)0x0;
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
  }
  local_88.Object = (param_2->ElementList).Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_2->ElementList).SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_98,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  uVar2._0_1_ = param_3->bAllowHidden;
  uVar2._1_1_ = param_3->bAllowGroups;
  uVar2._2_1_ = param_3->bAllowLegacyNotifications;
  uVar2._3_1_ = param_3->bWarnIfLocked;
  uVar2._4_1_ = param_3->bAllowSubRootSelection;
  uVar2._5_1_ = param_3->ChildElementInclusionMethod;
  uVar2._6_2_ = *(undefined2 *)&param_3->field_0x6;
  FVar3 = param_3->TEDSIntegrationSelectionSetName;
  if (local_98.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_28._0_8_ = uVar2;
    local_28.TEDSIntegrationSelectionSetName = FVar3;
    bVar6 = UTypedElementSelectionSet::ClearSelection(param_1,&local_28);
  }
  else {
    local_78._0_8_ = uVar2;
    local_78.TEDSIntegrationSelectionSetName = FVar3;
    if ((local_98.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    local_res8 = local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_98.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    uVar2 = local_78._0_8_;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((param_1->ElementList).Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::FLegacySyncScopedBatch
              (&local_38,(param_1->ElementList).Object,SUB81(uVar2,2));
    local_58.bAllowHidden = local_78.bAllowHidden;
    local_58.bAllowGroups = local_78.bAllowGroups;
    local_58.bAllowLegacyNotifications = local_78.bAllowLegacyNotifications;
    local_58.bWarnIfLocked = local_78.bWarnIfLocked;
    local_58.bAllowSubRootSelection = local_78.bAllowSubRootSelection;
    local_58.ChildElementInclusionMethod = local_78.ChildElementInclusionMethod;
    local_58._6_2_ = local_78._6_2_;
    local_58.TEDSIntegrationSelectionSetName = local_78.TEDSIntegrationSelectionSetName;
    bVar4 = UTypedElementSelectionSet::ClearSelection(param_1,&local_58);
    local_68.SharedReferenceCount.ReferenceController = local_res8;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.bAllowHidden = local_78.bAllowHidden;
    local_48.bAllowGroups = local_78.bAllowGroups;
    local_48.bAllowLegacyNotifications = local_78.bAllowLegacyNotifications;
    local_48.bWarnIfLocked = local_78.bWarnIfLocked;
    local_48.bAllowSubRootSelection = local_78.bAllowSubRootSelection;
    local_48.ChildElementInclusionMethod = local_78.ChildElementInclusionMethod;
    local_48._6_2_ = local_78._6_2_;
    local_48.TEDSIntegrationSelectionSetName = local_78.TEDSIntegrationSelectionSetName;
    bVar6 = UTypedElementSelectionSet::SelectElements(param_1,&local_68,&local_48);
    bVar6 = bVar6 || bVar4;
    TTypedElementList<FTypedElementHandle>::FLegacySyncScopedBatch::~FLegacySyncScopedBatch
              (&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
    bVar4 = true;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  return bVar6;
}

// StaticRegisterNativesUTypedElementSelectionSetLibrary @ 14454a800

void __cdecl
UTypedElementSelectionSetLibrary::StaticRegisterNativesUTypedElementSelectionSetLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementSelectionSetLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDeselectElementsFromList @ 14454bd20

void __cdecl
UTypedElementSelectionSetLibrary::execDeselectElementsFromList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UTypedElementSelectionSet *local_res10;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  FName FStack_40;
  TTypedElementList<FScriptTypedElementHandle> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FTypedElementSelectionOptions local_28;
  FScriptTypedElementListProxy local_18;
  
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
  local_38 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = 0x10100;
  uStack_44 = 0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.bAllowSubRootSelection = (bool)(undefined1)uStack_44;
  local_28.ChildElementInclusionMethod = uStack_44._1_1_;
  local_28.bAllowHidden = (bool)(undefined1)local_48;
  local_28.bAllowGroups = (bool)local_48._1_1_;
  local_28.bAllowLegacyNotifications = (bool)local_48._2_1_;
  local_28.bWarnIfLocked = (bool)local_48._3_1_;
  local_28._6_2_ = uStack_42;
  local_18.ElementList.Object = local_38;
  local_18.ElementList.SharedReferenceCount.ReferenceController = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.TEDSIntegrationSelectionSetName = FStack_40;
  bVar2 = DeselectElementsFromList(local_res10,&local_18,&local_28);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetNormalizedElementList @ 14454c490

void __cdecl
UTypedElementSelectionSetLibrary::execGetNormalizedElementList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptTypedElementListProxy *pFVar2;
  UTypedElementSelectionSet *local_res10;
  undefined2 local_58;
  undefined2 uStack_56;
  FNameEntryId FStack_54;
  uint uStack_50;
  FTypedElementSelectionNormalizationOptions local_48;
  TTypedElementList<FScriptTypedElementHandle> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FScriptTypedElementListProxy local_28;
  FScriptTypedElementListProxy local_18;
  
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
  local_38 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58 = 0;
  FStack_54.Value = 0;
  uStack_50 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48._2_2_ = uStack_56;
  local_48.bExpandGroups = (bool)(undefined1)local_58;
  local_48.bFollowAttachment = (bool)local_58._1_1_;
  local_48.TEDSIntegrationSelectionSetName.ComparisonIndex.Value = FStack_54.Value;
  local_28.ElementList.Object = local_38;
  local_28.ElementList.SharedReferenceCount.ReferenceController = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.TEDSIntegrationSelectionSetName.Number = uStack_50;
  pFVar2 = GetNormalizedElementList(&local_18,local_res10,&local_28,&local_48);
  if (param_3 != pFVar2) {
    *(TTypedElementList<FScriptTypedElementHandle> **)param_3 = (pFVar2->ElementList).Object;
    (pFVar2->ElementList).Object = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar2->ElementList).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ElementList.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetNormalizedSelection @ 14454c610

void __cdecl
UTypedElementSelectionSetLibrary::execGetNormalizedSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptTypedElementListProxy *pFVar2;
  UTypedElementSelectionSet *local_res10;
  undefined2 local_38;
  undefined2 uStack_36;
  FNameEntryId FStack_34;
  uint uStack_30;
  FTypedElementSelectionNormalizationOptions local_28;
  FScriptTypedElementListProxy local_18;
  
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
  local_38 = 0;
  FStack_34.Value = 0;
  uStack_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._2_2_ = uStack_36;
  local_28.bExpandGroups = (bool)(undefined1)local_38;
  local_28.bFollowAttachment = (bool)local_38._1_1_;
  local_28.TEDSIntegrationSelectionSetName.ComparisonIndex.Value = FStack_34.Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.TEDSIntegrationSelectionSetName.Number = uStack_30;
  pFVar2 = GetNormalizedSelection(&local_18,local_res10,&local_28);
  if (param_3 != pFVar2) {
    *(TTypedElementList<FScriptTypedElementHandle> **)param_3 = (pFVar2->ElementList).Object;
    (pFVar2->ElementList).Object = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &(pFVar2->ElementList).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ElementList.SharedReferenceCount.ReferenceController);
  return;
}

// execSelectElementsFromList @ 14454dd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTypedElementSelectionSetLibrary::execSelectElementsFromList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  UTypedElementSelectionSet *this;
  FName FVar4;
  FSharedReferencer<1> FVar5;
  TTypedElementList<FScriptTypedElementHandle> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  atomic<int> *paVar9;
  UTypedElementSelectionSet *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  FName FStack_a0;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_98;
  TTypedElementList<FScriptTypedElementHandle> *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_78;
  TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> local_68;
  FTypedElementSelectionOptions local_58 [2];
  
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
  local_88 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a8 = 0x10100;
  uStack_a4 = 0;
  FStack_a0.ComparisonIndex.Value = 0;
  FStack_a0.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar7 = pTStack_80;
  pTVar6 = local_88;
  FVar4 = FStack_a0;
  this = local_res10;
  uVar3._4_1_ = (bool)(undefined1)uStack_a4;
  uVar3._5_1_ = uStack_a4._1_1_;
  uVar3._0_1_ = (bool)(undefined1)local_a8;
  uVar3._1_1_ = (bool)local_a8._1_1_;
  uVar3._2_1_ = (bool)local_a8._2_1_;
  uVar3._3_1_ = (bool)local_a8._3_1_;
  uVar3._6_2_ = uStack_a2;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_80 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar9 = &pTStack_80->SharedReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  if (local_res10 == (UTypedElementSelectionSet *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"SelectionSet is null.",Error,(FName)0x0);
  }
  local_78.Object = pTVar6;
  local_78.SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_98,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_98.Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"ElementList is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    bVar8 = false;
  }
  else {
    if ((local_98.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar5.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_98.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar5.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58[0].TEDSIntegrationSelectionSetName = FVar4;
    local_58[0]._0_8_ = uVar3;
    bVar8 = UTypedElementSelectionSet::SelectElements(this,&local_68,local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar5.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  *(bool *)param_3 = bVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  return;
}

// execSetSelectionFromList @ 14454e4e0

void __cdecl
UTypedElementSelectionSetLibrary::execSetSelectionFromList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UTypedElementSelectionSet *local_res10;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  FName FStack_40;
  TTypedElementList<FScriptTypedElementHandle> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FTypedElementSelectionOptions local_28;
  FScriptTypedElementListProxy local_18;
  
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
  local_38 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = 0x10100;
  uStack_44 = 0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28.bAllowSubRootSelection = (bool)(undefined1)uStack_44;
  local_28.ChildElementInclusionMethod = uStack_44._1_1_;
  local_28.bAllowHidden = (bool)(undefined1)local_48;
  local_28.bAllowGroups = (bool)local_48._1_1_;
  local_28.bAllowLegacyNotifications = (bool)local_48._2_1_;
  local_28.bWarnIfLocked = (bool)local_48._3_1_;
  local_28._6_2_ = uStack_42;
  local_18.ElementList.Object = local_38;
  local_18.ElementList.SharedReferenceCount.ReferenceController = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.TEDSIntegrationSelectionSetName = FStack_40;
  bVar2 = SetSelectionFromList(local_res10,&local_18,&local_28);
  *(bool *)param_3 = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

