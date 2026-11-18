// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CompareTo @ 1416e3e60

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __cdecl FTextComparison::CompareTo(FString *param_1,FString *param_2,Type param_3)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FInternationalization *pFVar6;
  int iVar7;
  undefined4 local_res8 [2];
  undefined4 uStack_18c;
  TSharedRef<icu_64::Collator_const_,1> local_188;
  UCharCharacterIterator local_178;
  void *local_158;
  undefined8 local_150;
  <unnamed_type_u_> local_148;
  undefined8 uStack_140;
  UCharCharacterIterator local_138;
  void *local_118;
  undefined8 local_110;
  <unnamed_type_u_> local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [112];
  undefined1 local_88 [112];
  
  pFVar6 = FInternationalization::Get();
  if ((pFVar6->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar1 = (pFVar6->CurrentLanguage).Object;
  pTVar2 = (pFVar6->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  FICUCultureImplementation::GetCollator((pFVar1->Implementation).Ptr,&local_188,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar5 = (param_1->Data).ArrayNum;
  local_108 = (<unnamed_type_u_>)(param_1->Data).AllocatorInstance.Data;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  icu_64::UCharCharacterIterator::UCharCharacterIterator(&local_138);
  uStack_100 = CONCAT44(uStack_18c,iVar7);
  local_118 = (void *)0x0;
  local_138._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  local_110 = 0;
  icu_64::UCharCharacterIterator::setText(&local_138,(ConstChar16Ptr)local_108,iVar7);
  uiter_setCharacterIterator_64(local_88,&local_138);
  iVar7 = (param_2->Data).ArrayNum;
  local_148 = (<unnamed_type_u_>)(param_2->Data).AllocatorInstance.Data;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  icu_64::UCharCharacterIterator::UCharCharacterIterator(&local_178);
  uStack_140 = CONCAT44(uStack_18c,iVar5);
  local_178._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  local_158 = (void *)0x0;
  local_150 = 0;
  icu_64::UCharCharacterIterator::setText(&local_178,(ConstChar16Ptr)local_148,iVar5);
  uiter_setCharacterIterator_64(local_f8,&local_178);
  local_res8[0] = 0;
  iVar5 = (**(code **)((longlong)*local_188.Object + 0x28))
                    (local_188.Object,local_88,local_f8,local_res8);
  local_178._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  icu_64::UCharCharacterIterator::~UCharCharacterIterator(&local_178);
  local_138._padding_ = (longlong)&___7FICUTextCharacterIterator_NativeUTF16__6B_;
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  icu_64::UCharCharacterIterator::~UCharCharacterIterator(&local_138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  return iVar5;
}

// CompareToCaseIgnored @ 1416e4060

int __cdecl FTextComparison::CompareToCaseIgnored(FString *param_1,FString *param_2)

{
  int iVar1;
  
  iVar1 = CompareTo(param_1,param_2,Secondary);
  return iVar1;
}

// EqualTo @ 1416eceb0

bool __cdecl FTextComparison::EqualTo(FString *param_1,FString *param_2,Type param_3)

{
  int iVar1;
  
  iVar1 = CompareTo(param_1,param_2,param_3);
  return iVar1 == 0;
}

// EqualToCaseIgnored @ 1416eced0

bool __cdecl FTextComparison::EqualToCaseIgnored(FString *param_1,FString *param_2)

{
  int iVar1;
  
  iVar1 = CompareTo(param_1,param_2,Secondary);
  return iVar1 == 0;
}

