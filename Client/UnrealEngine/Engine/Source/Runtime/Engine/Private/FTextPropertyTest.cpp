// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetTestFlags @ 14886b720

EAutomationTestFlags __thiscall FTextPropertyTest::GetTestFlags(FTextPropertyTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14886b730

bool __thiscall FTextPropertyTest::IsStressTest(FTextPropertyTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886b740

uint __thiscall FTextPropertyTest::GetRequiredDeviceNum(FTextPropertyTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886b750

FString * __thiscall
FTextPropertyTest::GetTestSourceFileName(FTextPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\Internationalization\\TextPropertyTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886b780

int __thiscall FTextPropertyTest::GetTestSourceFileLine(FTextPropertyTest *this)

{
  return 0x14;
}

// GetTests @ 14886b7d0

/* WARNING: Removing unreachable block (ram,0x00014886b8bd) */
/* WARNING: Removing unreachable block (ram,0x00014886b988) */

void __thiscall
FTextPropertyTest::GetTests
          (FTextPropertyTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.Internationalization.Text Property Test");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14886b9b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FTextPropertyTest::RunTest(FTextPropertyTest *this,FString *param_1)

{
  UObject *pUVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  ITextData *pIVar5;
  FFeedbackContext *pFVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  FName *pFVar10;
  FProperty *this_00;
  FTextProperty *pFVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  UTextPropertyTestObject *pUVar14;
  FString *pFVar15;
  FString *pFVar16;
  FText *pFVar17;
  UObject *pUVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  UTextPropertyTestObject *pUVar21;
  undefined7 uVar23;
  FArchiveState *pFVar22;
  TRefCountPtr<ITextData> TVar24;
  bool bVar25;
  undefined8 local_res18;
  UClass *local_res20;
  ulonglong uVar26;
  FText local_168;
  FText local_158;
  FText local_148;
  FText *local_138;
  undefined8 local_130;
  FArchiveState local_128;
  undefined8 local_98;
  FText *local_90;
  undefined8 local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FText local_48;
  
  pUVar9 = Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
  local_res20 = pUVar9;
  pFVar10 = ::FName::FName((FName *)&local_78,"DefaultedText");
  this_00 = (FProperty *)FindFProperty<FTextProperty>((UStruct *)pUVar9,*pFVar10,Default);
  pFVar10 = ::FName::FName((FName *)&local_68,"UndefaultedText");
  pFVar11 = FindFProperty<FTextProperty>((UStruct *)pUVar9,*pFVar10,Default);
  pUVar18 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar18 == (UObject *)0x0) {
LAB_14886ba52:
    pUVar18 = (UObject *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
    iVar8 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar12->_padding_)) goto LAB_14886ba52;
  }
  local_res18 = 0;
  pUVar13 = GetTransientPackage();
  uVar26 = 0;
  pUVar14 = NewObject<UTextPropertyTestObject>
                      ((UObject *)pUVar13,pUVar9,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pFVar17 = &pUVar14->DefaultedText;
  cVar7 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,pFVar17,pUVar18 + 1);
  if (cVar7 == '\x01') {
    cVar7 = (**(code **)(*(longlong *)pFVar11 + 0xb8))
                      (pFVar11,&pUVar14->UndefaultedText,&pUVar18[1].field_0x10);
    if (cVar7 != '\x01') goto LAB_14886bac7;
  }
  else {
LAB_14886bac7:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString((FString *)&local_158,
                       L"FTextProperty::Identical failed to return true comparing a newly constructed object and the class default object."
                      );
    (*pcVar4)(this,&local_158,0);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_158.TextData.Reference);
    }
  }
  local_138 = (FText *)0x0;
  local_130 = 0;
  (**(code **)(this_00->_padding_ + 0xe0))
            (this_00,&local_138,pFVar17,0,0,0,uVar26 & 0xffffffff00000000,0);
  FText::FText(&local_158);
  pFVar19 = (FText *)L"";
  if ((int)local_130 != 0) {
    pFVar19 = local_138;
  }
  FTextStringHelper::ReadFromBuffer
            ((wchar_t *)pFVar19,&local_158,(wchar_t *)0x0,(wchar_t *)0x0,false);
  pFVar15 = FText::ToString(pFVar17);
  pFVar16 = FText::ToString(&local_158);
  iVar8 = (pFVar15->Data).ArrayNum;
  iVar2 = (pFVar16->Data).ArrayNum;
  if (iVar2 == iVar8) {
    if (1 < iVar2) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar15->Data).AllocatorInstance.Data);
      bVar25 = iVar8 == 0;
      goto LAB_14886bb9d;
    }
  }
  else {
    bVar25 = iVar8 + iVar2 == 1;
LAB_14886bb9d:
    if (!bVar25) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::FString((FString *)&local_148,
                         L"FTextProperty::ExportTextItem failed to provide the display string.");
      (*pcVar4)(this,&local_148,0);
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_148.TextData.Reference);
      }
    }
  }
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  if (local_138 != (FText *)0x0) {
    FMemory::Free(local_138);
  }
  ::FString::FString((FString *)&local_148,L"ImportValue");
  pFVar6 = GWarn;
  TVar24.Reference = (ITextData *)L"";
  if (local_148.Flags != 0) {
    TVar24.Reference = local_148.TextData.Reference;
  }
  bVar25 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)GWarn);
  if ((bVar25) && (TVar24.Reference != (ITextData *)0x0)) {
    (**(code **)(this_00->_padding_ + 0xe8))(this_00,TVar24.Reference,pFVar17,0,0,0x8000000,pFVar6);
  }
  pFVar15 = FTextInspector::GetSourceString(pFVar17);
  if (pFVar15 == (FString *)0x0) {
LAB_14886bc96:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString((FString *)&local_158,
                       L"FTextProperty::ImportText failed to alter the source string to the provided value."
                      );
    (*pcVar4)(this,&local_158,0);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_158.TextData.Reference);
    }
  }
  else {
    uVar3 = (pFVar15->Data).ArrayNum;
    if (local_148.Flags == uVar3) {
      if (1 < (int)local_148.Flags) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_148.TextData.Reference,
                           (wchar_t *)(pFVar15->Data).AllocatorInstance.Data);
        bVar25 = iVar8 == 0;
        goto LAB_14886bc8f;
      }
    }
    else {
      bVar25 = local_148.Flags + uVar3 == 1;
LAB_14886bc8f:
      if (!bVar25) goto LAB_14886bc96;
    }
  }
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_148.TextData.Reference);
  }
  local_res18 = 0;
  pUVar13 = GetTransientPackage();
  pUVar14 = NewObject<UTextPropertyTestObject>
                      ((UObject *)pUVar13,local_res20,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_168,L"TextPropertyTest",L"ModifiedDefaultedText",
                       L"Modified DefaultedText Value");
  FText::operator=(&pUVar14->DefaultedText,pFVar17);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_168,L"TextPropertyTest",L"ModifiedUndefaultedText",
                       L"Modified UndefaultedText Value");
  FText::operator=(&pUVar14->UndefaultedText,pFVar17);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  pUVar1 = pUVar18 + 1;
  cVar7 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,&pUVar14->DefaultedText,pUVar1,0);
  if (cVar7 == '\0') {
    cVar7 = (**(code **)(*(longlong *)pFVar11 + 0xb8))
                      (pFVar11,&pUVar14->UndefaultedText,&pUVar18[1].field_0x10,0);
    if (cVar7 != '\0') goto LAB_14886bdc2;
  }
  else {
LAB_14886bdc2:
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString((FString *)&local_158,
                       L"FTextProperty::Identical failed to return false comparing a modified object and the class default object."
                      );
    (*pcVar4)(this,&local_158,0);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_158.TextData.Reference);
    }
  }
  local_158.TextData.Reference = (ITextData *)0x0;
  local_158.Flags = 0;
  local_158._12_4_ = 0;
  pUVar18 = GetTransientPackageAsObject();
  pUVar14 = NewObject<UTextPropertyTestObject>(pUVar18);
  FTextKey::FTextKey((FTextKey *)&local_res18,L"DefaultedText");
  FTextKey::FTextKey((FTextKey *)&local_res20,L"TextPropertyTest");
  local_138 = &pUVar14->DefaultedText;
  pFVar17 = FText::AsLocalizable_Advanced
                      (&local_168,(FTextKey *)&local_res20,(FTextKey *)&local_res18,L"DefaultValue")
  ;
  FText::operator=(&pUVar14->DefaultedText,pFVar17);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_168,L"TextPropertyTest",L"ModifiedUndefaultedText",
                       L"Modified UndefaultedText Value");
  FText::operator=(&pUVar14->UndefaultedText,pFVar17);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_48,L"TextPropertyTest",L"TransientTestMessage",
                       L"Testing Transient serialization detection");
  pFVar19 = FText::AsLocalizable_Advanced_LocText
                      (&local_168,L"TextPropertyTest",L"TransientTest",L"{0}");
  pFVar20 = FTextFormat::FTextFormat(&local_58,pFVar19,Default);
  FText::Format<FText>(&local_148,pFVar20,pFVar17);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  pIVar5 = (pUVar14->TransientText).TextData.Reference;
  if (pIVar5 != local_148.TextData.Reference) {
    (pUVar14->TransientText).TextData.Reference = local_148.TextData.Reference;
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 8))
                (local_148.TextData.Reference,&local_res18);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  pFVar17 = &pUVar14->DefaultedText;
  (pUVar14->TransientText).Flags = local_148.Flags;
  cVar7 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,pFVar17,pUVar1,0);
  if (cVar7 == '\0') {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString((FString *)&local_168,
                       L"FTextProperty::Identical failed to return true comparing an FText with an identical source string to the class default object."
                      );
    pFVar17 = &local_168;
    (*pcVar4)(this,pFVar17,0);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_168.TextData.Reference);
    }
  }
  local_res18 = 0;
  local_128._padding_ = 0;
  local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_128._40_8_ = 0;
  local_128.ArSerializingDefaults = 0;
  local_128.ArPortFlags = 0;
  local_128.ArMaxSerializeSize = 0;
  local_128.ArUEVer.FileVersionUE4 = 0;
  local_128.ArUEVer.FileVersionUE5 = 0;
  local_128.ArLicenseeUEVer = 0;
  local_128.ArEngineVer.Major = 0;
  local_128.ArEngineVer.Minor = 0;
  local_128.ArEngineVer.Patch = 0;
  local_128.ArEngineVer._6_2_ = 0;
  local_128.ArEngineVer.Changelist = 0;
  local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_128.SerializedProperty = (FProperty *)0x0;
  local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_128.bCustomVersionsAreReset = false;
  local_128._129_7_ = 0;
  local_128.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_128);
  local_98 = 0;
  uVar23 = (undefined7)((ulonglong)pFVar17 >> 8);
  local_128._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_90 = &local_158;
  local_88 = local_res18;
  FArchiveState::SetIsSaving(&local_128,true);
  (**(code **)(local_128._padding_ + 0x108))(&local_128,CONCAT71(uVar23,1));
  local_128._padding_ = (longlong)&___7FMemoryWriter__6B_;
  pFVar22 = &local_128;
  (**(code **)(pUVar14->_padding_ + 200))(pUVar14,pFVar22);
  FArchive::~FArchive((FArchive *)&local_128);
  pUVar18 = GetTransientPackageAsObject();
  pUVar21 = NewObject<UTextPropertyTestObject>(pUVar18);
  local_128._padding_ = 0;
  local_128.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_128.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_128.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_128._40_8_ = 0;
  local_128.ArSerializingDefaults = 0;
  local_128.ArPortFlags = 0;
  local_128.ArMaxSerializeSize = 0;
  local_128.ArUEVer.FileVersionUE4 = 0;
  local_128.ArUEVer.FileVersionUE5 = 0;
  local_128.ArLicenseeUEVer = 0;
  local_128.ArEngineVer.Major = 0;
  local_128.ArEngineVer.Minor = 0;
  local_128.ArEngineVer.Patch = 0;
  local_128.ArEngineVer._6_2_ = 0;
  local_128.ArEngineVer.Changelist = 0;
  local_128.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_128.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_128.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_128.SerializedProperty = (FProperty *)0x0;
  local_128.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_128.bCustomVersionsAreReset = false;
  local_128._129_7_ = 0;
  local_128.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_128);
  local_98 = 0;
  local_128._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_90 = &local_158;
  uVar23 = (undefined7)((ulonglong)pFVar22 >> 8);
  local_88 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_128,true);
  (**(code **)(local_128._padding_ + 0x108))(&local_128,CONCAT71(uVar23,1));
  (**(code **)(pUVar21->_padding_ + 200))(pUVar21,&local_128);
  FArchive::~FArchive((FArchive *)&local_128);
  cVar7 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,&pUVar21->DefaultedText,local_138,0);
  if (cVar7 != '\0') {
    cVar7 = (**(code **)(*(longlong *)pFVar11 + 0xb8))
                      (pFVar11,&pUVar21->UndefaultedText,&pUVar14->UndefaultedText,0);
    if (cVar7 != '\0') goto LAB_14886c15b;
  }
  pcVar4 = *(code **)(*(longlong *)this + 0x28);
  ::FString::FString((FString *)&local_168,
                     L"Saving and loading a serialized object containing FText properties failed to maintain FText values."
                    );
  (*pcVar4)(this,&local_168,0);
  if (local_168.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_168.TextData.Reference);
  }
LAB_14886c15b:
  cVar7 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,&pUVar21->DefaultedText,pUVar1,0);
  if (cVar7 == '\0') {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString((FString *)&local_168,
                       L"FTextProperty::Identical failed to collapse identical source strings into the same namespace and key during serialization."
                      );
    (*pcVar4)(this,&local_168,0);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_168.TextData.Reference);
    }
  }
  FTextInspector::GetSourceString(&pUVar21->TransientText);
  FTextInspector::GetSourceString(&local_148);
  local_168.TextData.Reference = local_148.TextData.Reference;
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 8))
              (local_148.TextData.Reference,&local_res18);
  }
  local_168.Flags = local_148.Flags;
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_78,L"TextPropertyTest",L"Error_SerializationFailure",
                       L"ERR: Transient text cannot be serialized \"{0}\".");
  pFVar20 = FTextFormat::FTextFormat(&local_58,pFVar17,Default);
  pFVar17 = FText::Format<FText>(&local_68,pFVar20,&local_168);
  pFVar15 = FText::ToString(pFVar17);
  pFVar16 = FText::ToString(&pUVar21->TransientText);
  iVar8 = (pFVar16->Data).ArrayNum;
  if ((iVar8 == (pFVar15->Data).ArrayNum) && (1 < iVar8)) {
    FGenericPlatformStricmp::Stricmp
              ((wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
               (wchar_t *)(pFVar15->Data).AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_158.TextData.Reference);
  }
  return true;
}

// GetBeautifiedTestName @ 14886c2b0

FString * __thiscall
FTextPropertyTest::GetBeautifiedTestName(FTextPropertyTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.Internationalization.Text Property Test")
  ;
  return __return_storage_ptr__;
}

