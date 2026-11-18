// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// AsProperty @ 1428d78c0

IAccessibleProperty * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FSlateAccessibleComboBox::AsProperty
          (FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// GetValue @ 14294b170

FString * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FSlateAccessibleComboBox::GetValue
          (FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_14294b36d;
  pTVar10 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14294b1ef:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar10 = pTVar9;
LAB_14294b1f4:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14294b1ef;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    pTVar11 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_14294b1f4;
  }
  lVar1._0_4_ = pTVar11[0x45].SharedReferenceCount;
  lVar1._4_4_ = pTVar11[0x45].WeakReferenceCount;
  if (lVar1 != 0) {
    local_30 = (TReferenceControllerBase<1> *)pTVar11[0x46]._padding_;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar2._0_4_ = pTVar11[0x46].SharedReferenceCount;
    lVar2._4_4_ = pTVar11[0x46].WeakReferenceCount;
    local_38 = lVar1;
    if ((lVar2 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    plVar8 = (longlong *)(*(longlong *)&pTVar11[0x46].SharedReferenceCount + 0x588);
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((local_48 == (longlong *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      (**(code **)(*local_48 + 0x58))(local_48,&local_28);
      pFVar7 = SWidget::GetAccessibleText(local_28,&local_18,Main);
      pFVar6 = FText::ToString(pFVar7);
      ::FString::FString(__return_storage_ptr__,pFVar6);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14294b36d:
  pFVar7 = FText::GetEmpty();
  pFVar6 = FText::ToString(pFVar7);
  ::FString::FString(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 14294bdb0

FVariant * __thiscall
SComboBox<TSharedPtr<FString,1>_>::FSlateAccessibleComboBox::GetValueAsVariant
          (FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 *puVar3;
  undefined7 uVar4;
  FArchiveState local_c8;
  undefined8 local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  undefined1 local_18 [16];
  
  puVar3 = local_18;
  pFVar2 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,puVar3);
  local_c8._padding_ = 0;
  local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  (__return_storage_ptr__->Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  (__return_storage_ptr__->Value).ArrayNum = 0;
  (__return_storage_ptr__->Value).ArrayMax = 0;
  local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_c8._40_8_ = 0;
  local_c8.ArSerializingDefaults = 0;
  local_c8.ArPortFlags = 0;
  local_c8.ArMaxSerializeSize = 0;
  local_c8.ArUEVer.FileVersionUE4 = 0;
  local_c8.ArUEVer.FileVersionUE5 = 0;
  local_c8.ArLicenseeUEVer = 0;
  local_c8.ArEngineVer.Major = 0;
  local_c8.ArEngineVer.Minor = 0;
  local_c8.ArEngineVer.Patch = 0;
  local_c8.ArEngineVer._6_2_ = 0;
  local_c8.ArEngineVer.Changelist = 0;
  local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_c8.SerializedProperty = (FProperty *)0x0;
  local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_c8.bCustomVersionsAreReset = false;
  local_c8._129_7_ = 0;
  local_c8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_c8);
  local_38 = 0;
  local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  uVar4 = (undefined7)((ulonglong)puVar3 >> 8);
  local_28 = 0;
  local_30 = &__return_storage_ptr__->Value;
  FArchiveState::SetIsSaving(&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,CONCAT71(uVar4,1));
  local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  ::operator<<((FArchive *)&local_c8,pFVar2);
  __return_storage_ptr__->Type = String;
  FArchive::~FArchive((FArchive *)&local_c8);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

