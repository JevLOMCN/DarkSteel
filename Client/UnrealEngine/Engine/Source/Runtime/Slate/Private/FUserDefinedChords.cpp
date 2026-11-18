// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// GetUserDefinedChord @ 142745ca0

bool __thiscall
FUserDefinedChords::GetUserDefinedChord
          (FUserDefinedChords *this,FName param_1,FName param_2,EMultipleKeyBindingIndex param_3,
          FInputChord *param_4)

{
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar1;
  uint uVar2;
  uint uVar3;
  FName *pFVar4;
  undefined1 *puVar5;
  FInputChord *pFVar6;
  uint uStackX_1c;
  
  pTVar1 = (this->Chords).Object;
  if (pTVar1 != (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                 *)0x0) {
    uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    uStackX_1c = param_2.Number;
    if (*(int *)&pTVar1->field_0x8 != *(int *)&pTVar1->field_0x34) {
      puVar5 = *(undefined1 **)&pTVar1->field_0x40;
      if (*(undefined1 **)&pTVar1->field_0x40 == (undefined1 *)0x0) {
        puVar5 = &pTVar1->field_0x38;
      }
      uVar2 = *(uint *)(puVar5 + (ulonglong)
                                 (*(int *)&pTVar1->field_0x48 - 1U &
                                 (uVar3 + uStackX_1c ^ uVar2 + param_1.Number)) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          pFVar4 = (FName *)((longlong)(int)uVar2 * 0x40 + *(longlong *)pTVar1);
          if (((*pFVar4 == param_1) && (pFVar4[1] == param_2)) &&
             ((EMultipleKeyBindingIndex)pFVar4[2].ComparisonIndex.Value == param_3)) {
            if (uVar2 == 0xffffffff) {
              return false;
            }
            pFVar6 = (FInputChord *)(pFVar4 + 3);
            if (pFVar4 == (FName *)0x0) {
              pFVar6 = (FInputChord *)0x0;
            }
            if (pFVar6 == (FInputChord *)0x0) {
              return false;
            }
            FInputChord::operator=(param_4,pFVar6);
            return true;
          }
          uVar2 = pFVar4[7].ComparisonIndex.Value;
        } while (uVar2 != 0xffffffff);
      }
    }
  }
  return false;
}

// LoadChord @ 14274f580

FInputChord * __cdecl
FUserDefinedChords::LoadChord
          (FInputChord *__return_storage_ptr__,TSharedPtr<FJsonObject,1> *param_1)

{
  longlong lVar1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FInputChord *pFVar10;
  FString *pFVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  FJsonValue *this;
  TReferenceControllerBase<1> *pTVar21;
  FJsonValue *local_res18;
  FJsonValue *local_res20;
  FJsonValue *local_d8;
  FJsonValue *local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FName local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pwVar16 = L"";
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_c8,L"Control");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar15.Data = local_c8.Data.AllocatorInstance.Data;
  }
  this = (FJsonValue *)0x0;
  iVar14 = 0;
  iVar9 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar9 = iVar14;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar15.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar8,&local_c8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar9 * 0x28, lVar1 == 0)
     ) {
    local_res20 = (FJsonValue *)0x0;
    pTVar20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar20 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    local_res20 = *(FJsonValue **)(lVar1 + 0x10);
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_b8,L"Alt");
  iVar9 = local_b8.Data.ArrayNum + -1;
  FVar15.Data = local_b8.Data.AllocatorInstance.Data;
  if (local_b8.Data.ArrayNum == 0) {
    iVar9 = iVar14;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar15.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar8,&local_b8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar9 * 0x28, lVar1 == 0)
     ) {
    local_d8 = (FJsonValue *)0x0;
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar19 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    local_d8 = *(FJsonValue **)(lVar1 + 0x10);
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_a8,L"Shift");
  iVar9 = local_a8.Data.ArrayNum + -1;
  FVar15.Data = local_a8.Data.AllocatorInstance.Data;
  if (local_a8.Data.ArrayNum == 0) {
    iVar9 = iVar14;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar15.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar8,&local_a8);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar9 * 0x28, lVar1 == 0)
     ) {
    local_res18 = (FJsonValue *)0x0;
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar21 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    local_res18 = *(FJsonValue **)(lVar1 + 0x10);
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_98,L"Command");
  iVar9 = local_98.Data.ArrayNum + -1;
  FVar15.Data = local_98.Data.AllocatorInstance.Data;
  if (local_98.Data.ArrayNum == 0) {
    iVar9 = iVar14;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar15.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar8,&local_98);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar9 * 0x28, lVar1 == 0)
     ) {
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar17 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    this = *(FJsonValue **)(lVar1 + 0x10);
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_88,L"Key");
  iVar9 = local_88.Data.ArrayNum + -1;
  FVar15.Data = local_88.Data.AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar15.Data);
  iVar9 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar8,&local_88);
  if ((iVar9 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar9 * 0x28, lVar1 == 0)
     ) {
    local_d0 = (FJsonValue *)0x0;
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_d0 = *(FJsonValue **)(lVar1 + 0x10);
    pTVar18 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (this == (FJsonValue *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = FJsonValue::AsBool(this);
  }
  if ((local_res18 == (FJsonValue *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  bVar5 = FJsonValue::AsBool(local_res18);
  if ((local_d8 == (FJsonValue *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  bVar6 = FJsonValue::AsBool(local_d8);
  if ((local_res20 == (FJsonValue *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  bVar7 = FJsonValue::AsBool(local_res20);
  bVar12 = bVar7 | 2;
  if (!bVar6) {
    bVar12 = bVar7;
  }
  bVar13 = bVar12 | 4;
  if (!bVar5) {
    bVar13 = bVar12;
  }
  bVar12 = bVar13 | 8;
  if (bVar4 == false) {
    bVar12 = bVar13;
  }
  if ((local_d0 == (FJsonValue *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FInputChord *)(*pcVar3)();
    return pFVar10;
  }
  pFVar11 = FJsonValue::AsString(local_d0,&local_78);
  if ((pFVar11->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_68,pwVar16);
  (__return_storage_ptr__->Key).KeyName = local_68;
  (__return_storage_ptr__->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  (__return_storage_ptr__->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar8 = ((uint)(bVar12 >> 2) ^ __return_storage_ptr__->bShift) & 1 ^
          *(uint *)&__return_storage_ptr__->field_0x18;
  uVar8 = ((uint)bVar12 * 2 ^ uVar8) & 2 ^ uVar8;
  uVar8 = ((uint)bVar12 * 2 ^ uVar8) & 4 ^ uVar8;
  *(uint *)&__return_storage_ptr__->field_0x18 = (uVar8 ^ bVar12) & 8 ^ uVar8;
  local_60 = 0;
  uStack_58 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return __return_storage_ptr__;
}

// LoadChords @ 14274fae0

void __thiscall FUserDefinedChords::LoadChords(FUserDefinedChords *this)

{
  ulonglong uVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  code *pcVar5;
  FScriptContainerElement *_Src;
  longlong lVar6;
  undefined1 *puVar7;
  TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
  *pTVar8;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar9;
  ForElementType<FSetElementId> FVar10;
  FName FVar11;
  FName FVar12;
  FJsonObject *pFVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  TJsonReader<char> *pTVar17;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar18;
  IFileManager *pIVar19;
  FString *pFVar20;
  FArchive *pFVar21;
  TJsonReader<char> *pTVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  FInputChord *pFVar25;
  byte bVar26;
  longlong lVar27;
  ForAnyElementType FVar28;
  wchar_t *pwVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar36;
  FName *pFVar37;
  uint *puVar38;
  uint *puVar39;
  uint uVar40;
  TBitArray<FDefaultBitArrayAllocator> *pTVar41;
  FJsonObject *pFVar42;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FUserDefinedChordKey local_2e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d0;
  FJsonObject *local_2c0;
  undefined8 uStack_2b8;
  TBitArray<FDefaultBitArrayAllocator> *local_2b0;
  uint uStack_2a8;
  uint uStack_2a4;
  uint local_2a0;
  undefined4 uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  FString local_290;
  TSharedPtr<FJsonObject,1> local_280;
  int local_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_268;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  undefined4 uStack_254;
  FName local_250;
  FName local_248;
  StackState local_240;
  StackState local_208;
  FString local_1d0;
  TSharedPtr<FJsonObject,1> local_1c0;
  FString local_1b0;
  int local_1a0;
  int local_19c;
  int local_198;
  TRawPtrProxy<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
  local_190;
  TRawPtrProxy<TJsonReader<char>_> local_188;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  FJsonObject *local_178;
  TReferenceControllerBase<1> *local_170;
  FJsonObject *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FJsonObject *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TSharedRef<TJsonReader<char>,1> local_108;
  FString local_f8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_e8;
  FInputChord local_d8;
  FJsonObject *local_b8;
  longlong lStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined8 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  TJsonReader<char> *pTVar35;
  
  if ((this->Chords).Object ==
      (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
       *)0x0) {
    pTVar17 = ::operator_new(0x50);
    pTVar35 = (TJsonReader<char> *)0x0;
    uVar33 = 0;
    local_190.Object =
         (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
          *)pTVar35;
    if (pTVar17 != (TJsonReader<char> *)0x0) {
      pTVar17->_padding_ = 0;
      (pTVar17->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar17->Stream = (FArchive *)0x0;
      *(undefined4 *)&(pTVar17->Identifier).Data.AllocatorInstance.Data = 0;
      *(undefined4 *)((longlong)&(pTVar17->Identifier).Data.AllocatorInstance.Data + 4) = 0x80;
      (pTVar17->Identifier).Data.ArrayNum = -1;
      (pTVar17->Identifier).Data.ArrayMax = 0;
      (pTVar17->ErrorMessage).Data.ArrayNum = 0;
      (pTVar17->ErrorMessage).Data.ArrayMax = 0;
      *(undefined4 *)&(pTVar17->StringValue).Data.AllocatorInstance.Data = 0;
      local_190.Object =
           (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
            *)pTVar17;
    }
    TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
    ::
    operator=<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
              (&this->Chords,&local_190);
    local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.ArrayNum = 0;
    local_2d0.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"ProjectDefinedChords",L"ProjectDefinedChords",&local_2d0,
               &GEditorSettingsIni);
    LoadFromCurrentJsonConfig(this,&local_2d0,true);
    iVar15 = FConfigCacheIni::GetArray
                       (GConfig,L"UserDefinedChords",L"UserDefinedChords",&local_2d0,
                        &GEditorKeyBindingsIni);
    if (iVar15 < 1) {
      iVar15 = FConfigCacheIni::GetArray
                         (GConfig,L"UserDefinedGestures",L"UserDefinedGestures",&local_2d0,
                          &GEditorKeyBindingsIni);
    }
    if (iVar15 < 1) {
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      local_280.Object = (FJsonObject *)0x0;
      local_280.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      iVar15 = FConfigCacheIni::GetArray
                         (GConfig,L"UserDefinedChords",L"Content",&local_2d0,&GEditorKeyBindingsIni)
      ;
      if (iVar15 < 1) {
        FConfigCacheIni::GetArray
                  (GConfig,L"UserDefinedGestures",L"Content",&local_2d0,&GEditorKeyBindingsIni);
      }
      else {
        pFVar20 = FRemoteConfig::ReplaceIniSpecialCharWithChar(&local_f8,&local_1b0);
        ::FString::ReplaceEscapedCharWithCharInline
                  (pFVar20,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
        local_1d0.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
        (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d0.Data.ArrayNum = (pFVar20->Data).ArrayNum;
        local_1d0.Data.ArrayMax = (pFVar20->Data).ArrayMax;
        (pFVar20->Data).ArrayNum = 0;
        (pFVar20->Data).ArrayMax = 0;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        pTVar18 = TJsonStringReader<wchar_t>::Create(&local_e8,&local_1d0);
        pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
        pTVar4 = pTVar18->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        local_240.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_240.Identifier.Data.ArrayNum = 0;
        local_240.Identifier.Data.ArrayMax = 0;
        local_240.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_240.Array.ArrayNum = 0;
        local_240.Array.ArrayMax = 0;
        local_240.Object.Object = (FJsonObject *)0x0;
        local_240.Object.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        bVar14 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                           ((TJsonReader<wchar_t> *)pTVar4,&local_240,None);
        if (bVar14) {
          FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_240,&local_280);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_240.Object.SharedReferenceCount.ReferenceController);
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_240.Array.AllocatorInstance.Data,
                   local_240.Array.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_240.Array.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_240.Array.AllocatorInstance.Data);
        }
        if (local_240.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Identifier.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
      }
      bVar14 = false;
      if (local_280.Object == (FJsonObject *)0x0) {
        pIVar19 = IFileManager::Get();
        pcVar5 = *(code **)((longlong)*pIVar19 + 0x18);
        pFVar20 = FPaths::ProjectSavedDir();
        local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar15 = (pFVar20->Data).ArrayNum;
        _Src = (pFVar20->Data).AllocatorInstance.Data;
        uVar32 = (0x23 - (uint)((pFVar20->Data).ArrayNum != 0)) + iVar15;
        local_290.Data.ArrayNum = iVar15;
        if ((int)uVar32 < iVar15) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar32,0,(ForAnyElementType *)&local_290,iVar15,&local_290.Data.ArrayMax);
        if (iVar15 != 0) {
          memcpy(local_290.Data.AllocatorInstance.Data,_Src,(longlong)iVar15 * 2);
        }
        ::FString::PathAppend(&local_290,L"Preferences/EditorKeyBindings.txt",0x21);
        FVar28.Data = (FScriptContainerElement *)L"";
        if (local_290.Data.ArrayNum != 0) {
          FVar28.Data = local_290.Data.AllocatorInstance.Data;
        }
        pFVar21 = (FArchive *)(*pcVar5)(pIVar19,FVar28.Data);
        pTVar22 = ::operator_new(0x18);
        pTVar17 = pTVar35;
        if (pTVar22 != (TJsonReader<char> *)0x0) {
          *(undefined4 *)&(pTVar22->ParseState).AllocatorInstance.Data = 1;
          *(undefined4 *)((longlong)&(pTVar22->ParseState).AllocatorInstance.Data + 4) = 1;
          pTVar22->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFArchive__U__DefaultDeleter_VFArchive___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          *(FArchive **)&(pTVar22->ParseState).ArrayNum = pFVar21;
          pTVar17 = pTVar22;
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        if (pFVar21 != (FArchive *)0x0) {
          pTVar22 = ::operator_new(0x70);
          local_188.Object = pTVar35;
          if (pTVar22 != (TJsonReader<char> *)0x0) {
            (pTVar22->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar22->ParseState).ArrayNum = 0;
            (pTVar22->ParseState).ArrayMax = 0;
            pTVar22->_padding_ = (longlong)&___7__TJsonReader_D__6B_;
            pTVar22->CurrentToken = None;
            pTVar22->Stream = pFVar21;
            (pTVar22->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar22->Identifier).Data.ArrayNum = 0;
            (pTVar22->Identifier).Data.ArrayMax = 0;
            (pTVar22->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar22->ErrorMessage).Data.ArrayNum = 0;
            (pTVar22->ErrorMessage).Data.ArrayMax = 0;
            (pTVar22->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar22->StringValue).Data.ArrayNum = 0;
            (pTVar22->StringValue).Data.ArrayMax = 0;
            pTVar22->NumberValue = 0.0;
            pTVar22->LineNumber = 1;
            pTVar22->CharacterNumber = 0;
            pTVar22->BoolValue = false;
            pTVar22->FinishedReadingRootObject = false;
            local_188.Object = pTVar22;
          }
          TSharedRef<TJsonReader<char>,1>::TSharedRef<TJsonReader<char>,1><TJsonReader<char>_>
                    (&local_108,&local_188);
          local_208.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.Identifier.Data.ArrayNum = 0;
          local_208.Identifier.Data.ArrayMax = 0;
          local_208.Object.Object = (FJsonObject *)0x0;
          local_208.Object.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_208.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.Array.ArrayNum = 0;
          local_208.Array.ArrayMax = 0;
          bVar14 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char>
                             (local_108.Object,&local_208,None);
          if (bVar14) {
            FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_208,&local_280);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208.Object.SharedReferenceCount.ReferenceController);
          DestructItems<TSharedPtr<FJsonValue,1>,int>
                    ((TSharedPtr<FJsonValue,1> *)local_208.Array.AllocatorInstance.Data,
                     local_208.Array.ArrayNum);
          if ((TSharedPtr<FJsonValue,1> *)local_208.Array.AllocatorInstance.Data !=
              (TSharedPtr<FJsonValue,1> *)0x0) {
            FMemory::Free(local_208.Array.AllocatorInstance.Data);
          }
          if (local_208.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Identifier.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar17);
        bVar14 = local_280.Object == (FJsonObject *)0x0;
      }
      if (local_280.Object != (FJsonObject *)0x0) {
        if ((bVar14) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar42 = local_280.Object;
        uVar32 = *(uint *)&((local_280.Object)->Values).field_0x28;
        puVar7 = &((local_280.Object)->Values).field_0x10;
        uVar16 = 1;
        local_2a0 = 0;
        uStack_2a4 = local_2a0;
        if (uVar32 != 0) {
          puVar38 = *(uint **)&((local_280.Object)->Values).field_0x20;
          if (puVar38 == (uint *)0x0) {
            puVar38 = (uint *)puVar7;
          }
          uVar2 = *puVar38;
          pTVar17 = pTVar35;
          local_2a0 = 0;
          uVar33 = 0;
          while (uVar2 == 0) {
            iVar15 = (int)pTVar35;
            local_2a0 = (int)pTVar17 + 0x20;
            pTVar17 = (TJsonReader<char> *)(ulonglong)local_2a0;
            uVar33 = iVar15 + 1;
            pTVar35 = (TJsonReader<char> *)(ulonglong)uVar33;
            uStack_2a4 = uVar32;
            if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
            goto LAB_142750070;
            uVar2 = puVar38[(longlong)iVar15 + 1];
          }
          uVar16 = -uVar2 & uVar2;
          uVar1 = (ulonglong)uVar16 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_res20 = (int)lVar27;
          uStack_2a4 = local_res20 + -1 + local_2a0;
          if ((int)uVar32 < (int)uStack_2a4) {
            uStack_2a4 = uVar32;
          }
        }
LAB_142750070:
        uVar2 = *(uint *)&((local_280.Object)->Values).field_0x28;
        bVar26 = (byte)uVar2 & 0x1f;
        iStack_298 = *(int *)&((local_280.Object)->Values).field_0x8 -
                     *(int *)&((local_280.Object)->Values).field_0x34;
        uVar31 = uVar2 & 0xffffffe0;
        iVar15 = (int)uVar2 >> 5;
        uStack_26c = 1 << bVar26;
        uVar40 = -1 << bVar26;
        uStack_2b8 = CONCAT44(uVar16,uVar33);
        uStack_2a8 = 0xffffffff;
        uStack_29c = local_6c;
        TStack_130._padding_ = uStack_2b8;
        uStack_110 = CONCAT44(uStack_294,iStack_298);
        TStack_130.UnvisitedBitMask = 0xffffffff;
        TStack_130.CurrentBitIndex = uStack_2a4;
        TStack_130.BaseBitIndex = local_2a0;
        TStack_130._28_4_ = local_6c;
        local_270 = iVar15;
        pTStack_268 = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
        local_260 = uVar40;
        uStack_25c = uVar2;
        uStack_258 = uVar31;
        local_138 = local_280.Object;
        TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
        if ((((int)uVar2 < 0) || ((int)uVar32 < (int)uVar2)) &&
           (local_2c0 = local_280.Object, local_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar7
           , bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar33 = *(uint *)&(pFVar42->Values).field_0x28;
        if (uVar2 != uVar33) {
          puVar36 = *(undefined1 **)&(pFVar42->Values).field_0x20;
          if (puVar36 == (undefined1 *)0x0) {
            puVar36 = puVar7;
          }
          uVar40 = uVar40 & *(uint *)(puVar36 + (longlong)iVar15 * 4);
          while (uVar40 == 0) {
            uStack_258 = uVar31 + 0x20;
            local_270 = iVar15 + 1;
            if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < local_270)
            goto LAB_1427501be;
            uVar40 = *(uint *)(puVar36 + (longlong)iVar15 * 4 + 4);
            local_260 = 0xffffffff;
            uVar31 = uStack_258;
            iVar15 = local_270;
          }
          uStack_26c = -uVar40 & uVar40;
          uVar1 = (ulonglong)uStack_26c * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_1a0 = (int)lVar27;
          uStack_25c = local_1a0 + -1 + uVar31;
          if ((int)uVar33 < (int)uStack_25c) {
LAB_1427501be:
            uStack_25c = uVar33;
          }
        }
        uStack_2b8 = CONCAT44(uStack_26c,local_270);
        uStack_2a4 = uStack_25c;
        uStack_2a8 = local_260;
        uStack_29c = uStack_254;
        local_2a0 = uStack_258;
        iStack_298 = *(int *)&(pFVar42->Values).field_0x8 - *(int *)&(pFVar42->Values).field_0x34;
        local_2b0 = pTStack_268;
        uStack_90 = CONCAT44(uStack_294,iStack_298);
        local_a8 = pTStack_268;
        local_2c0 = pFVar42;
        local_b8 = pFVar42;
        lStack_b0 = uStack_2b8;
        uStack_a0 = _uStack_2a8;
        local_98 = _local_2a0;
        while( true ) {
          pFVar42 = local_138;
          if (*(int *)&(local_138->Values).field_0x8 - *(int *)&(local_138->Values).field_0x34 !=
              (int)uStack_110) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          lVar27 = (longlong)TStack_130.CurrentBitIndex;
          if (((TStack_130.CurrentBitIndex == iStack_9c) && (TStack_130.Array == local_a8)) &&
             (pFVar42 == local_b8)) break;
          lVar6 = *(longlong *)&pFVar42->Values;
          if (*(int *)(lVar6 + 8 + lVar27 * 0x28) == 0) {
            pwVar29 = L"";
          }
          else {
            pwVar29 = *(wchar_t **)(lVar6 + lVar27 * 0x28);
          }
          ::FName::FName(&local_250,pwVar29);
          if ((*(longlong *)(lVar6 + 0x10 + lVar27 * 0x28) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar23 = (longlong *)(**(code **)**(undefined8 **)(lVar6 + 0x10 + lVar27 * 0x28))();
          pFVar42 = (FJsonObject *)*plVar23;
          local_170 = (TReferenceControllerBase<1> *)plVar23[1];
          if (local_170 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_170->SharedReferenceCount =
                 (atomic<int>)((int)local_170->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_178 = pFVar42;
          if ((pFVar42 == (FJsonObject *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar15 = *(int *)&(pFVar42->Values).field_0x28;
          pTVar41 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar42->Values).field_0x10;
          iVar34 = 0;
          local_2a0 = 0;
          uVar33 = 1;
          uStack_2a4 = 0;
          if (iVar15 != 0) {
            puVar38 = *(uint **)&(pFVar42->Values).field_0x20;
            puVar39 = (uint *)pTVar41;
            if (puVar38 != (uint *)0x0) {
              puVar39 = puVar38;
            }
            uVar32 = *puVar39;
            while (uVar32 == 0) {
              lVar27 = (longlong)iVar34;
              local_2a0 = local_2a0 + 0x20;
              iVar34 = iVar34 + 1;
              uStack_2a4 = iVar15;
              if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar34)
              goto LAB_142750390;
              uVar32 = puVar39[lVar27 + 1];
            }
            uVar33 = -uVar32 & uVar32;
            uVar1 = (ulonglong)uVar33 * 2 + 1;
            lVar27 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_19c = (int)lVar27;
            uStack_2a4 = local_2a0 + -1 + local_19c;
            if (iVar15 < (int)uStack_2a4) {
              uStack_2a4 = iVar15;
            }
          }
LAB_142750390:
          uVar32 = *(uint *)&(pFVar42->Values).field_0x28;
          uVar16 = uVar32 & 0xffffffe0;
          iStack_298 = *(int *)&(pFVar42->Values).field_0x8 - *(int *)&(pFVar42->Values).field_0x34;
          uStack_2b8 = CONCAT44(uVar33,iVar34);
          uStack_2a8 = 0xffffffff;
          uStack_29c = local_4c;
          TStack_160._padding_ = uStack_2b8;
          iVar34 = (int)uVar32 >> 5;
          uStack_140 = CONCAT44(uStack_294,iStack_298);
          TStack_160.UnvisitedBitMask = 0xffffffff;
          TStack_160.CurrentBitIndex = uStack_2a4;
          TStack_160.BaseBitIndex = local_2a0;
          TStack_160._28_4_ = local_4c;
          local_2c0 = pFVar42;
          local_2b0 = pTVar41;
          local_180 = pTVar41;
          local_168 = pFVar42;
          TStack_160.Array = pTVar41;
          if ((((int)uVar32 < 0) || (iVar15 < (int)uVar32)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar33 = *(uint *)&(pFVar42->Values).field_0x28;
          if (uVar32 != uVar33) {
            puVar7 = *(undefined1 **)&(pFVar42->Values).field_0x20;
            puVar36 = (undefined1 *)pTVar41;
            if (puVar7 != (undefined1 *)0x0) {
              puVar36 = puVar7;
            }
            uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar34 * 4);
            while (uVar32 == 0) {
              lVar27 = (longlong)iVar34;
              uVar16 = uVar16 + 0x20;
              iVar34 = iVar34 + 1;
              uVar32 = uVar33;
              if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
              goto LAB_1427504b0;
              uVar32 = *(uint *)(puVar36 + lVar27 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_198 = (int)lVar27;
            uVar32 = (uVar16 - 1) + local_198;
            if ((int)uVar33 < (int)uVar32) {
              uVar32 = uVar33;
            }
          }
LAB_1427504b0:
          while( true ) {
            pFVar13 = local_168;
            if (*(int *)&(local_168->Values).field_0x8 - *(int *)&(local_168->Values).field_0x34 !=
                (int)uStack_140) {
              local_res18[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            lVar27 = (longlong)TStack_160.CurrentBitIndex;
            if (((TStack_160.CurrentBitIndex == uVar32) && (TStack_160.Array == pTVar41)) &&
               (pFVar13 == pFVar42)) break;
            lVar6 = *(longlong *)&pFVar13->Values;
            if (*(int *)(lVar6 + 8 + lVar27 * 0x28) == 0) {
              pwVar29 = L"";
            }
            else {
              pwVar29 = *(wchar_t **)(lVar6 + lVar27 * 0x28);
            }
            ::FName::FName(&local_248,pwVar29);
            if ((*(longlong *)(lVar6 + 0x10 + lVar27 * 0x28) == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar24 = (undefined8 *)(**(code **)**(undefined8 **)(lVar6 + 0x10 + lVar27 * 0x28))();
            local_1c0.Object = (FJsonObject *)*puVar24;
            local_1c0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar24[1];
            if (local_1c0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_2e8.BindingContext = local_250;
            local_2e8.CommandName = local_248;
            local_2e8.ChordIndex = Primary;
            local_2e8.bIsFromProjectSetting = false;
            if (((this->Chords).Object ==
                 (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                  *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar11 = local_2e8.BindingContext;
            pTVar8 = (TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                      *)(this->Chords).Object;
            if (*(int *)&(pTVar8->Elements).field_0x8 != *(int *)&(pTVar8->Elements).field_0x34) {
              uVar33 = ::GetTypeHash(local_2e8.BindingContext.ComparisonIndex);
              FVar12 = local_2e8.CommandName;
              uVar16 = ::GetTypeHash(local_2e8.CommandName.ComparisonIndex.Value);
              TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
              ::RemoveImpl<FUserDefinedChordKey>
                        (pTVar8,FVar12.Number + uVar16 ^ FVar11.Number + uVar33,&local_2e8);
            }
            if (((this->Chords).Object ==
                 (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                  *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar9 = (this->Chords).Object;
            pFVar25 = LoadChord(&local_d8,&local_1c0);
            FVar11 = local_2e8.BindingContext;
            uVar33 = ::GetTypeHash(local_2e8.BindingContext.ComparisonIndex);
            FVar12 = local_2e8.CommandName;
            uVar16 = ::GetTypeHash(local_2e8.CommandName.ComparisonIndex);
            uVar33 = FVar12.Number + uVar16 ^ FVar11.Number + uVar33;
            if (*(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                            *)&pTVar9->field_0x0)->Elements).field_0x8 !=
                *(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                            *)&pTVar9->field_0x0)->Elements).field_0x34) {
              FVar10 = (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                          *)&pTVar9->field_0x0)->Hash).SecondaryData;
              FVar30 = (ForElementType<FSetElementId>)
                       &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                          *)&pTVar9->field_0x0)->Hash;
              if (FVar10 != (ForElementType<FSetElementId>)0x0) {
                FVar30 = FVar10;
              }
              uVar16 = *(uint *)((longlong)FVar30 +
                                (ulonglong)
                                (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                                   *)&pTVar9->field_0x0)->HashSize - 1U & uVar33) * 4);
              if (uVar16 != 0xffffffff) {
                do {
                  pFVar37 = (FName *)((longlong)(int)uVar16 * 0x40 +
                                     *(longlong *)
                                      &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                                         *)&pTVar9->field_0x0)->Elements);
                  if (((*pFVar37 == local_2e8.BindingContext) &&
                      (pFVar37[1] == local_2e8.CommandName)) &&
                     ((EMultipleKeyBindingIndex)pFVar37[2].ComparisonIndex.Value ==
                      local_2e8.ChordIndex)) {
                    if ((uVar16 != 0xffffffff) && (pFVar37 != (FName *)0x0)) goto LAB_1427506e6;
                    break;
                  }
                  uVar16 = pFVar37[7].ComparisonIndex.Value;
                } while (uVar16 != 0xffffffff);
              }
            }
            TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
            ::EmplaceByHash<FUserDefinedChordKey_const_&,FInputChord>
                      ((TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                        *)pTVar9,uVar33,&local_2e8,pFVar25);
LAB_1427506e6:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
            local_2e8.BindingContext = local_250;
            local_2e8.CommandName = local_248;
            local_2e8.ChordIndex = Secondary;
            local_2e8.bIsFromProjectSetting = false;
            if (((this->Chords).Object ==
                 (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                  *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar11 = local_2e8.BindingContext;
            pTVar8 = (TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                      *)(this->Chords).Object;
            if (*(int *)&(pTVar8->Elements).field_0x8 != *(int *)&(pTVar8->Elements).field_0x34) {
              uVar33 = ::GetTypeHash(local_2e8.BindingContext.ComparisonIndex);
              FVar12 = local_2e8.CommandName;
              uVar16 = ::GetTypeHash(local_2e8.CommandName.ComparisonIndex.Value);
              TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
              ::RemoveImpl<FUserDefinedChordKey>
                        (pTVar8,FVar12.Number + uVar16 ^ FVar11.Number + uVar33,&local_2e8);
            }
            if (((this->Chords).Object ==
                 (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                  *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar9 = (this->Chords).Object;
            pFVar25 = LoadChord(&local_d8,&local_1c0);
            FVar11 = local_2e8.BindingContext;
            uVar33 = ::GetTypeHash(local_2e8.BindingContext.ComparisonIndex);
            FVar12 = local_2e8.CommandName;
            uVar16 = ::GetTypeHash(local_2e8.CommandName.ComparisonIndex);
            uVar33 = FVar12.Number + uVar16 ^ FVar11.Number + uVar33;
            if (*(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                            *)&pTVar9->field_0x0)->Elements).field_0x8 !=
                *(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                            *)&pTVar9->field_0x0)->Elements).field_0x34) {
              FVar10 = (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                          *)&pTVar9->field_0x0)->Hash).SecondaryData;
              FVar30 = (ForElementType<FSetElementId>)
                       &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                          *)&pTVar9->field_0x0)->Hash;
              if (FVar10 != (ForElementType<FSetElementId>)0x0) {
                FVar30 = FVar10;
              }
              uVar16 = *(uint *)((longlong)FVar30 +
                                (ulonglong)
                                (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                                   *)&pTVar9->field_0x0)->HashSize - 1U & uVar33) * 4);
              if (uVar16 != 0xffffffff) {
                do {
                  pFVar37 = (FName *)((longlong)(int)uVar16 * 0x40 +
                                     *(longlong *)
                                      &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                                         *)&pTVar9->field_0x0)->Elements);
                  if (((*pFVar37 == local_2e8.BindingContext) &&
                      (pFVar37[1] == local_2e8.CommandName)) &&
                     ((EMultipleKeyBindingIndex)pFVar37[2].ComparisonIndex.Value ==
                      local_2e8.ChordIndex)) {
                    if ((uVar16 != 0xffffffff) && (pFVar37 != (FName *)0x0)) goto LAB_142750875;
                    break;
                  }
                  uVar16 = pFVar37[7].ComparisonIndex.Value;
                } while (uVar16 != 0xffffffff);
              }
            }
            TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
            ::EmplaceByHash<FUserDefinedChordKey_const_&,FInputChord>
                      ((TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                        *)pTVar9,uVar33,&local_2e8,pFVar25);
LAB_142750875:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1c0.SharedReferenceCount.ReferenceController);
            TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
            pTVar41 = local_180;
            pFVar42 = local_178;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_170);
          TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
        }
      }
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
    }
    else {
      LoadFromCurrentJsonConfig(this,&local_2d0,false);
    }
    DestructItems<FString,int>((FString *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
    if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.AllocatorInstance.Data);
    }
  }
  return;
}

// LoadFromCurrentJsonConfig @ 142751440

void __thiscall
FUserDefinedChords::LoadFromCurrentJsonConfig
          (FUserDefinedChords *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TJsonStringReader<wchar_t> *pTVar3;
  TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *this_01;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FString *this_02;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  FInputChord *pFVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  longlong *plVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res20 [8];
  FUserDefinedChordKey local_f8;
  uint local_e0;
  StackState local_d8;
  TSharedPtr<FJsonObject,1> local_a0;
  FString local_90;
  FScriptContainerElement *local_80;
  FString local_78;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_68;
  FInputChord local_58;
  
  pFVar17 = (param_1->AllocatorInstance).Data;
  local_e0 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)local_e0;
  local_80 = pFVar17 + uVar13 * 0x10;
  do {
    pFVar7 = local_80;
    if (param_1->ArrayNum != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar17 == pFVar7) {
      return;
    }
    this_02 = FRemoteConfig::ReplaceIniSpecialCharWithChar(&local_78,(FString *)pFVar17);
    ::FString::ReplaceEscapedCharWithCharInline
              (this_02,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    local_90.Data.AllocatorInstance.Data = (this_02->Data).AllocatorInstance.Data;
    (this_02->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = (this_02->Data).ArrayNum;
    local_90.Data.ArrayMax = (this_02->Data).ArrayMax;
    (this_02->Data).ArrayNum = 0;
    (this_02->Data).ArrayMax = 0;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_a0.Object = (FJsonObject *)0x0;
    local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = TJsonStringReader<wchar_t>::Create(&local_68,&local_90);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pTVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    local_d8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Identifier.Data.ArrayNum = 0;
    local_d8.Identifier.Data.ArrayMax = 0;
    local_d8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Array.ArrayNum = 0;
    local_d8.Array.ArrayMax = 0;
    local_d8.Object.Object = (FJsonObject *)0x0;
    local_d8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar8 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar3,&local_d8,None);
    if (bVar8) {
      bVar8 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_d8,&local_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data,
                 local_d8.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_d8.Array.AllocatorInstance.Data);
      }
      if (local_d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Identifier.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        LoadKey(&local_f8,&local_a0);
        local_f8.bIsFromProjectSetting = param_2;
        if (((this->Chords).Object ==
             (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar16 = local_f8.BindingContext.Number;
        this_00 = (TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                   *)(this->Chords).Object;
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          uVar9 = ::GetTypeHash(local_f8.BindingContext.ComparisonIndex);
          uVar6 = local_f8.CommandName.Number;
          uVar10 = ::GetTypeHash(local_f8.CommandName.ComparisonIndex);
          TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
          ::RemoveImpl<FUserDefinedChordKey>(this_00,uVar6 + uVar10 ^ uVar16 + uVar9,&local_f8);
        }
        if (((this->Chords).Object ==
             (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_01 = (this->Chords).Object;
        pFVar12 = LoadChord(&local_58,&local_a0);
        uVar16 = local_f8.BindingContext.Number;
        uVar9 = ::GetTypeHash(local_f8.BindingContext.ComparisonIndex);
        uVar6 = local_f8.CommandName.Number;
        uVar10 = ::GetTypeHash(local_f8.CommandName.ComparisonIndex);
        uVar16 = uVar6 + uVar10 ^ uVar16 + uVar9;
        if (*(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                        *)&this_01->field_0x0)->Elements).field_0x8 !=
            *(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                        *)&this_01->field_0x0)->Elements).field_0x34) {
          FVar4 = (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                     *)&this_01->field_0x0)->Hash).SecondaryData;
          FVar14 = (ForElementType<FSetElementId>)
                   &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                      *)&this_01->field_0x0)->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar14 = FVar4;
          }
          iVar1 = *(int *)((longlong)FVar14 +
                          (ulonglong)
                          (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                             *)&this_01->field_0x0)->HashSize - 1U & uVar16) * 4);
          if (iVar1 != -1) {
            do {
              plVar15 = (longlong *)
                        ((longlong)iVar1 * 0x40 +
                        *(longlong *)
                         &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                            *)&this_01->field_0x0)->Elements);
              if (((*plVar15 ==
                    CONCAT44(local_f8.BindingContext.Number,
                             local_f8.BindingContext.ComparisonIndex.Value)) &&
                  (plVar15[1] ==
                   CONCAT44(local_f8.CommandName.Number,local_f8.CommandName.ComparisonIndex.Value))
                  ) && (*(EMultipleKeyBindingIndex *)(plVar15 + 2) == local_f8.ChordIndex)) {
                if ((iVar1 != -1) && (plVar15 != (longlong *)0x0)) goto LAB_142751755;
                break;
              }
              iVar1 = (int)plVar15[7];
            } while (iVar1 != -1);
          }
        }
        TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
        ::EmplaceByHash<FUserDefinedChordKey_const_&,FInputChord>
                  ((TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                    *)this_01,uVar16,&local_f8,pFVar12);
LAB_142751755:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data,
                 local_d8.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_d8.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_d8.Array.AllocatorInstance.Data);
      }
      if (local_d8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    pFVar17 = pFVar17 + 0x10;
    uVar13 = (ulonglong)local_e0;
  } while( true );
}

// LoadKey @ 142751880

FUserDefinedChordKey * __cdecl
FUserDefinedChords::LoadKey
          (FUserDefinedChordKey *__return_storage_ptr__,TSharedPtr<FJsonObject,1> *param_1)

{
  longlong lVar1;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUserDefinedChordKey *pFVar7;
  FString *pFVar8;
  EMultipleKeyBindingIndex EVar9;
  int iVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FJsonValue *this;
  FJsonValue *this_00;
  FJsonValue *this_01;
  TReferenceControllerBase<1> *pTVar16;
  double dVar17;
  FName local_res8;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pwVar13 = L"";
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUserDefinedChordKey *)(*pcVar3)();
    return pFVar7;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_88,L"BindingContext");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar11.Data = local_88.Data.AllocatorInstance.Data;
  }
  this = (FJsonValue *)0x0;
  iVar10 = 0;
  iVar6 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar6 = iVar10;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
  iVar6 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar5,&local_88);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar6 * 0x28, lVar1 == 0)
     ) {
    this_01 = (FJsonValue *)0x0;
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    this_01 = *(FJsonValue **)(lVar1 + 0x10);
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUserDefinedChordKey *)(*pcVar3)();
    return pFVar7;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_78,L"CommandName");
  iVar6 = local_78.Data.ArrayNum + -1;
  FVar11.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar6 = iVar10;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
  iVar6 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar5,&local_78);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar6 * 0x28, lVar1 == 0)
     ) {
    this_00 = (FJsonValue *)0x0;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = *(FJsonValue **)(lVar1 + 0x10);
    pTVar14 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FJsonObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUserDefinedChordKey *)(*pcVar3)();
    return pFVar7;
  }
  pTVar2 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)param_1->Object;
  ::FString::FString(&local_68,L"ChordIndex");
  iVar6 = local_68.Data.ArrayNum + -1;
  FVar11.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    iVar6 = iVar10;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
  iVar6 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar2,uVar5,&local_68);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)&pTVar2->Elements + (longlong)iVar6 * 0x28, lVar1 == 0)
     ) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this = *(FJsonValue **)(lVar1 + 0x10);
    pTVar15 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((this_01 == (FJsonValue *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUserDefinedChordKey *)(*pcVar3)();
    return pFVar7;
  }
  pFVar8 = FJsonValue::AsString(this_01,&local_58);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar12);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this_00 == (FJsonValue *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FUserDefinedChordKey *)(*pcVar3)();
    return pFVar7;
  }
  pFVar8 = FJsonValue::AsString(this_00,&local_48);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar13);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this == (FJsonValue *)0x0) {
    EVar9 = Primary;
  }
  else {
    dVar17 = FJsonValue::AsNumber(this);
    EVar9 = (EMultipleKeyBindingIndex)(longlong)dVar17;
  }
  __return_storage_ptr__->BindingContext = local_res8;
  __return_storage_ptr__->ChordIndex = EVar9;
  __return_storage_ptr__->CommandName = local_res10;
  __return_storage_ptr__->bIsFromProjectSetting = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return __return_storage_ptr__;
}

// RemoveAll @ 14277b050

void __thiscall FUserDefinedChords::RemoveAll(FUserDefinedChords *this)

{
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar1;
  TRawPtrProxy<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
  local_res8 [4];
  
  pTVar1 = ::operator_new(0x50);
  local_res8[0].Object =
       (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
        *)0x0;
  if (pTVar1 != (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                 *)0x0) {
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&pTVar1->field_0x8 = 0;
    *(undefined8 *)&pTVar1->field_0x20 = 0;
    *(undefined4 *)&pTVar1->field_0x28 = 0;
    *(undefined4 *)&pTVar1->field_0x2c = 0x80;
    *(undefined4 *)&pTVar1->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar1->field_0x34 = 0;
    *(undefined8 *)&pTVar1->field_0x40 = 0;
    *(undefined4 *)&pTVar1->field_0x48 = 0;
    local_res8[0].Object = pTVar1;
  }
  TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
  ::
  operator=<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
            (&this->Chords,local_res8);
  return;
}

// SaveChords @ 142781fd0

void __thiscall FUserDefinedChords::SaveChords(FUserDefinedChords *this)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar7;
  ForAnyElementType _Src;
  bool bVar8;
  int iVar9;
  FJsonValueObject *pFVar10;
  FJsonObject *pFVar11;
  TSharedPtr<FJsonObject,1> *pTVar12;
  undefined8 *puVar13;
  TJsonValueString<wchar_t> *pTVar14;
  FString *pFVar15;
  FJsonValueNumber *this_01;
  TJsonValueString<wchar_t> *pTVar16;
  FJsonValueBoolean *pFVar17;
  byte bVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint uVar22;
  TJsonValueString<wchar_t> *pTVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  FName *this_02;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3d8;
  ForAnyElementType local_3c8;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b0;
  uint local_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  FString local_398;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *local_388;
  int iStack_380;
  uint uStack_37c;
  undefined1 *local_378;
  undefined4 uStack_370;
  int iStack_36c;
  int local_368;
  int iStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  TRawPtrProxy<FJsonObject> local_338;
  TRawPtrProxy<FJsonValueObject> local_330;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_328;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_320;
  TRawPtrProxy<FJsonValueNumber> local_318;
  TRawPtrProxy<FJsonValueBoolean> local_310;
  TRawPtrProxy<FJsonValueBoolean> local_308;
  TRawPtrProxy<FJsonValueBoolean> local_300;
  TRawPtrProxy<FJsonValueBoolean> local_2f8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_2f0;
  TSharedPtr<FJsonValueObject,1> local_2e8;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FString *local_2a8;
  TSharedPtr<FJsonValue,1> *local_2a0;
  FString local_298;
  TSharedPtr<FJsonValue,1> local_288;
  FString *local_278;
  TSharedPtr<FJsonValue,1> *local_270;
  FString local_268;
  TSharedPtr<FJsonValue,1> local_258;
  FString *local_248;
  TSharedPtr<FJsonValue,1> *local_240;
  FString local_238;
  TSharedPtr<FJsonValue,1> local_228;
  FString *local_218;
  TSharedPtr<FJsonValue,1> *local_210;
  FString local_208;
  TSharedPtr<FJsonValue,1> local_1f8;
  FString *local_1e8;
  TSharedPtr<FJsonValue,1> *local_1e0;
  FString local_1d8;
  TSharedPtr<FJsonValue,1> local_1c8;
  FString *local_1b8;
  TSharedPtr<FJsonValue,1> *local_1b0;
  FString local_1a8;
  TSharedPtr<FJsonValue,1> local_198;
  FString *local_188;
  TSharedPtr<FJsonValue,1> *local_180;
  FString local_178;
  TSharedPtr<FJsonValue,1> local_168;
  TSharedPtr<FJsonObject,1> local_158;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_148;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_138;
  FString *local_128;
  TSharedPtr<FJsonValue,1> *local_120;
  FString local_118;
  TSharedPtr<FJsonValue,1> local_108;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *local_f8;
  undefined8 uStack_f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *local_88;
  undefined8 uStack_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  TSharedPtr<FJsonObject,1> local_58;
  
  pTVar5 = (this->Chords).Object;
  iStack_380 = 0;
  local_res10 = 0;
  if (pTVar5 != (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                 *)0x0) {
    puVar1 = &pTVar5->field_0x10;
    local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_398.Data.ArrayNum = 0;
    local_398.Data.ArrayMax = 0;
    local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.ArrayNum = 0;
    local_3d8.ArrayMax = 0;
    iVar9 = *(int *)&pTVar5->field_0x28;
    uStack_37c = 1;
    iStack_36c = 0;
    local_368 = iStack_380;
    if (iVar9 != 0) {
      puVar25 = *(uint **)&pTVar5->field_0x20;
      if (*(uint **)&pTVar5->field_0x20 == (uint *)0x0) {
        puVar25 = (uint *)puVar1;
      }
      uStack_37c = *puVar25;
      local_368 = 0;
      iStack_380 = 0;
      while (uStack_37c == 0) {
        lVar19 = (longlong)iStack_380;
        local_368 = local_368 + 0x20;
        iStack_380 = iStack_380 + 1;
        uStack_37c = 1;
        iStack_36c = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_380) goto LAB_1427820a0;
        uStack_37c = puVar25[lVar19 + 1];
      }
      uStack_37c = -uStack_37c & uStack_37c;
      uVar3 = (ulonglong)uStack_37c * 2 + 1;
      lVar19 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_res18 = (int)lVar19;
      iStack_36c = local_res18 + -1 + local_368;
      if (iVar9 < iStack_36c) {
        iStack_36c = iVar9;
      }
    }
LAB_1427820a0:
    uVar26 = *(uint *)&pTVar5->field_0x28;
    bVar18 = (byte)uVar26 & 0x1f;
    uStack_3b4 = 1 << bVar18;
    iStack_360 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
    iVar27 = (int)uVar26 >> 5;
    uVar22 = uVar26 & 0xffffffe0;
    uVar21 = -1 << bVar18;
    uStack_370 = 0xffffffff;
    TStack_2d0._padding_ = CONCAT44(uStack_37c,iStack_380);
    TStack_2d0.CurrentBitIndex = iStack_36c;
    TStack_2d0.UnvisitedBitMask = 0xffffffff;
    TStack_2d0._28_4_ = iStack_36c;
    TStack_2d0.BaseBitIndex = local_368;
    uStack_2b0 = CONCAT44(uStack_35c,iStack_360);
    local_3b8 = iVar27;
    pTStack_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_3a8 = uVar21;
    uStack_3a4 = uVar26;
    uStack_3a0 = uVar22;
    local_388 = pTVar5;
    local_378 = puVar1;
    iStack_364 = iStack_36c;
    local_2d8 = pTVar5;
    TStack_2d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar26 < 0) || (iVar9 < (int)uVar26)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&pTVar5->field_0x28;
    if (uVar26 != uVar4) {
      puVar24 = *(undefined1 **)&pTVar5->field_0x20;
      if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
        puVar24 = puVar1;
      }
      uVar21 = uVar21 & *(uint *)(puVar24 + (longlong)iVar27 * 4);
      while (uVar21 == 0) {
        uStack_3a0 = uVar22 + 0x20;
        local_3b8 = iVar27 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_3b8)
        goto LAB_1427821dd;
        uVar21 = *(uint *)(puVar24 + (longlong)iVar27 * 4 + 4);
        local_3a8 = 0xffffffff;
        iVar27 = local_3b8;
        uVar22 = uStack_3a0;
      }
      uStack_3b4 = -uVar21 & uVar21;
      uVar3 = (ulonglong)uStack_3b4 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_res20 = (int)lVar19;
      uStack_3a4 = local_res20 + -1 + uVar22;
      if ((int)uVar4 < (int)uStack_3a4) {
LAB_1427821dd:
        uStack_3a4 = uVar4;
      }
    }
    uStack_f0 = CONCAT44(uStack_3b4,local_3b8);
    uStack_e0 = CONCAT44(uStack_3a4,local_3a8);
    uStack_d8 = CONCAT44(uStack_39c,uStack_3a0);
    local_d0 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
    pTStack_e8 = pTStack_3b0;
    uStack_60 = CONCAT44(uStack_cc,local_d0);
    local_78 = pTStack_3b0;
    local_f8 = pTVar5;
    local_88 = pTVar5;
    uStack_80 = uStack_f0;
    uStack_70 = uStack_e0;
    local_68 = uStack_d8;
    while( true ) {
      pTVar5 = local_2d8;
      if (*(int *)&local_2d8->field_0x8 - *(int *)&local_2d8->field_0x34 != (int)uStack_2b0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_2d0.CurrentBitIndex == uStack_70._4_4_) && (TStack_2d0.Array == local_78)) &&
         (pTVar5 == local_88)) break;
      this_02 = (FName *)((longlong)TStack_2d0.CurrentBitIndex * 0x40 + *(longlong *)pTVar5);
      if (*(char *)((longlong)&this_02[2].ComparisonIndex.Value + 1) == '\0') {
        pFVar10 = ::operator_new(0x20);
        if (pFVar10 == (FJsonValueObject *)0x0) {
          local_330.Object = (FJsonValueObject *)0x0;
        }
        else {
          pFVar11 = ::operator_new(0x50);
          local_338.Object = (FJsonObject *)0x0;
          if (pFVar11 != (FJsonObject *)0x0) {
            *(undefined8 *)&pFVar11->Values = 0;
            *(undefined8 *)&(pFVar11->Values).field_0x8 = 0;
            *(undefined8 *)&(pFVar11->Values).field_0x20 = 0;
            *(undefined4 *)&(pFVar11->Values).field_0x28 = 0;
            *(undefined4 *)&(pFVar11->Values).field_0x2c = 0x80;
            *(undefined4 *)&(pFVar11->Values).field_0x30 = 0xffffffff;
            *(undefined4 *)&(pFVar11->Values).field_0x34 = 0;
            *(undefined8 *)&(pFVar11->Values).field_0x40 = 0;
            *(undefined4 *)&(pFVar11->Values).field_0x48 = 0;
            local_338.Object = pFVar11;
          }
          pTVar12 = TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
                              (&local_58,&local_338);
          local_330.Object = FJsonValueObject::FJsonValueObject(pFVar10,pTVar12);
        }
        pTVar23 = (TJsonValueString<wchar_t> *)0x0;
        TSharedPtr<FJsonValueObject,1>::TSharedPtr<FJsonValueObject,1><FJsonValueObject>
                  (&local_2e8,&local_330);
        pFVar10 = local_2e8.Object;
        if ((local_2e8.Object == (FJsonValueObject *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar13 = (undefined8 *)(**(code **)pFVar10->_padding_)(pFVar10);
        pTVar6 = (TReferenceControllerBase<1> *)puVar13[1];
        this_00 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                   *)*puVar13;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar14 = ::operator_new(0x20);
        pTVar16 = pTVar23;
        uVar26 = local_res10;
        if (pTVar14 != (TJsonValueString<wchar_t> *)0x0) {
          uVar26 = local_res10 | 1;
          local_res10 = uVar26;
          pFVar15 = ::FName::ToString(this_02,&local_b8);
          FJsonValue::FJsonValue((FJsonValue *)pTVar14);
          pTVar14->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          (pTVar14->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar14->Value).Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar14->Value).Data.ArrayNum = (pFVar15->Data).ArrayNum;
          (pTVar14->Value).Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
          *(EJson *)&pTVar14->_padding_ = String;
          pTVar16 = pTVar14;
        }
        local_328.Object = pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&local_108,&local_328);
        ::FString::FString(&local_118,L"BindingContext");
        local_128 = &local_118;
        local_120 = &local_108;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)local_358,
                   (bool *)&local_128);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        if (((uVar26 & 1) != 0) &&
           (uVar26 = uVar26 & 0xfffffffe, local_res10 = uVar26,
           local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar14 = ::operator_new(0x20);
        pTVar16 = pTVar23;
        if (pTVar14 != (TJsonValueString<wchar_t> *)0x0) {
          uVar26 = uVar26 | 2;
          local_res10 = uVar26;
          pFVar15 = ::FName::ToString(this_02 + 1,&local_a8);
          FJsonValue::FJsonValue((FJsonValue *)pTVar14);
          pTVar14->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          (pTVar14->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar14->Value).Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar14->Value).Data.ArrayNum = (pFVar15->Data).ArrayNum;
          (pTVar14->Value).Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
          *(EJson *)&pTVar14->_padding_ = String;
          pTVar16 = pTVar14;
        }
        local_320.Object = pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&local_288,&local_320);
        ::FString::FString(&local_298,L"CommandName");
        local_2a8 = &local_298;
        local_2a0 = &local_288;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (local_358 + 4),(bool *)&local_2a8);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.SharedReferenceCount.ReferenceController);
        if (((uVar26 & 2) != 0) &&
           (uVar26 = uVar26 & 0xfffffffd, local_res10 = uVar26,
           local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_01 = ::operator_new(0x18);
        pTVar16 = pTVar23;
        if (this_01 != (FJsonValueNumber *)0x0) {
          pTVar16 = (TJsonValueString<wchar_t> *)
                    FJsonValueNumber::FJsonValueNumber
                              (this_01,(double)(byte)this_02[2].ComparisonIndex.Value);
        }
        local_318.Object = (FJsonValueNumber *)pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_258,&local_318);
        ::FString::FString(&local_268,L"ChordIndex");
        local_278 = &local_268;
        local_270 = &local_258;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)local_350,
                   (bool *)&local_278);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_258.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = ::operator_new(0x18);
        pFVar2 = this_02 + 6;
        pTVar16 = pTVar23;
        if (pFVar17 != (FJsonValueBoolean *)0x0) {
          pTVar16 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar17,(bool)((byte)((pFVar2->ComparisonIndex).Value >> 1) & 1));
        }
        local_310.Object = (FJsonValueBoolean *)pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>(&local_228,&local_310)
        ;
        ::FString::FString(&local_238,L"Control");
        local_248 = &local_238;
        local_240 = &local_228;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (local_350 + 4),(bool *)&local_248);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = ::operator_new(0x18);
        pTVar16 = pTVar23;
        if (pFVar17 != (FJsonValueBoolean *)0x0) {
          pTVar16 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar17,(bool)((byte)((pFVar2->ComparisonIndex).Value >> 2) & 1));
        }
        local_308.Object = (FJsonValueBoolean *)pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>(&local_1f8,&local_308)
        ;
        ::FString::FString(&local_208,L"Alt");
        local_218 = &local_208;
        local_210 = &local_1f8;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)local_348,
                   (bool *)&local_218);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f8.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = ::operator_new(0x18);
        pTVar16 = pTVar23;
        if (pFVar17 != (FJsonValueBoolean *)0x0) {
          pTVar16 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar17,(bool)((byte)(pFVar2->ComparisonIndex).Value & 1));
        }
        local_300.Object = (FJsonValueBoolean *)pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>(&local_1c8,&local_300)
        ;
        ::FString::FString(&local_1d8,L"Shift");
        local_1e8 = &local_1d8;
        local_1e0 = &local_1c8;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (local_348 + 4),(bool *)&local_1e8);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = ::operator_new(0x18);
        pTVar16 = pTVar23;
        if (pFVar17 != (FJsonValueBoolean *)0x0) {
          pTVar16 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar17,(bool)((byte)((pFVar2->ComparisonIndex).Value >> 3) & 1));
        }
        local_2f8.Object = (FJsonValueBoolean *)pTVar16;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>(&local_198,&local_2f8)
        ;
        ::FString::FString(&local_1a8,L"Command");
        local_1b8 = &local_1a8;
        local_1b0 = &local_198;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)local_340,
                   (bool *)&local_1b8);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar16 = ::operator_new(0x20);
        if (pTVar16 != (TJsonValueString<wchar_t> *)0x0) {
          uVar26 = uVar26 | 4;
          local_res10 = uVar26;
          pFVar15 = FKey::ToString((FKey *)(this_02 + 3),&local_98);
          FJsonValue::FJsonValue((FJsonValue *)pTVar16);
          pTVar16->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          (pTVar16->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar16->Value).Data.AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar16->Value).Data.ArrayNum = (pFVar15->Data).ArrayNum;
          (pTVar16->Value).Data.ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
          *(undefined4 *)&pTVar16->_padding_ = 2;
          pTVar23 = pTVar16;
        }
        local_2f0.Object = pTVar23;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&local_168,&local_2f0);
        ::FString::FString(&local_178,L"Key");
        local_188 = &local_178;
        local_180 = &local_168;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (local_340 + 4),(bool *)&local_188);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        if (((uVar26 & 4) != 0) &&
           (local_res10 = uVar26 & 0xfffffffb,
           local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
                  (&local_138,&local_398,0);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_158.Object = (FJsonObject *)this_00;
        local_158.SharedReferenceCount.ReferenceController = pTVar6;
        MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
                  (&local_148,&local_158);
        TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
        Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_148,local_138.Object,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        pFVar15 = FRemoteConfig::ReplaceIniCharWithSpecialChar(&local_c8,&local_398);
        ::FString::ReplaceCharWithEscapedCharInline
                  (pFVar15,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
        local_3c8.Data = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c0 = (pFVar15->Data).ArrayNum;
        local_3bc = (pFVar15->Data).ArrayMax;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (((local_3d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c8) &&
            ((FScriptContainerElement *)&local_3c8 <
             local_3d8.AllocatorInstance.Data + (longlong)local_3d8.ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = local_3d8.ArrayNum;
        if (local_3d8.ArrayNum == local_3d8.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_3d8.AllocatorInstance,&local_3d8.ArrayMax);
        }
        _Src.Data = local_3c8.Data;
        pFVar20 = local_3d8.AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        local_3d8.ArrayNum = iVar9 + 1;
        *(FScriptContainerElement **)pFVar20 = (FScriptContainerElement *)0x0;
        lVar19 = (longlong)local_3c0;
        *(int *)(pFVar20 + 8) = local_3c0;
        if (local_3c0 == 0) {
          *(int *)(pFVar20 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3c0,0,(ForAnyElementType *)pFVar20,local_3c0,(int *)(pFVar20 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar20,_Src.Data,lVar19 * 2);
        }
        if (local_3c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e8.SharedReferenceCount.ReferenceController);
      }
      TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
    }
    FConfigCacheIni::SetArray
              (GConfig,L"UserDefinedChords",L"UserDefinedChords",&local_3d8,&GEditorKeyBindingsIni);
    FConfigCacheIni::RemoveKey
              (GConfig,L"UserDefinedGestures",L"UserDefinedGestures",&GEditorKeyBindingsIni);
    FConfigCacheIni::RemoveKey(GConfig,L"UserDefinedChords",L"Content",&GEditorKeyBindingsIni);
    FConfigCacheIni::RemoveKey(GConfig,L"UserDefinedChords",L"Content",&GEditorKeyBindingsIni);
    DestructItems<FString,int>((FString *)local_3d8.AllocatorInstance.Data,local_3d8.ArrayNum);
    if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetUserDefinedChords @ 142787810

void __thiscall
FUserDefinedChords::SetUserDefinedChords(FUserDefinedChords *this,FUICommandInfo *param_1)

{
  FName FVar1;
  FName FVar2;
  TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *this_01;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FInputChord *pFVar13;
  ForElementType<FSetElementId> FVar14;
  FName *pFVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  uint *puVar19;
  uint local_res18;
  FUserDefinedChordKey local_98;
  FName local_80;
  FKeyDetails *local_78;
  TReferenceControllerBase<1> *local_70;
  uint local_68 [2];
  FName local_60;
  FName local_58;
  FName local_50;
  uint local_48 [4];
  
  bVar9 = false;
  bVar8 = false;
  if ((this->Chords).Object !=
      (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
       *)0x0) {
    FVar1 = param_1->BindingContext;
    FVar2 = param_1->CommandName;
    local_res18 = 0;
    do {
      local_98.ChordIndex = (EMultipleKeyBindingIndex)local_res18;
      local_98.bIsFromProjectSetting = false;
      local_98.BindingContext = FVar1;
      local_98.CommandName = FVar2;
      if (((this->Chords).Object ==
           (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar16 = local_98.BindingContext;
      this_00 = (TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                 *)(this->Chords).Object;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        uVar11 = ::GetTypeHash(local_98.BindingContext.ComparisonIndex);
        FVar17 = local_98.CommandName;
        uVar12 = ::GetTypeHash(local_98.CommandName.ComparisonIndex.Value);
        TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
        ::RemoveImpl<FUserDefinedChordKey>
                  (this_00,FVar17.Number + uVar12 ^ FVar16.Number + uVar11,&local_98);
      }
      if (((this->Chords).Object ==
           (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
            *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar16 = local_98.BindingContext;
      this_01 = (this->Chords).Object;
      uVar11 = ::GetTypeHash(local_98.BindingContext.ComparisonIndex);
      FVar17 = local_98.CommandName;
      uVar12 = ::GetTypeHash(local_98.CommandName.ComparisonIndex);
      uVar11 = FVar17.Number + uVar12 ^ FVar16.Number + uVar11;
      if (*(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                      *)&this_01->field_0x0)->Elements).field_0x8 !=
          *(int *)&(((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                      *)&this_01->field_0x0)->Elements).field_0x34) {
        FVar3 = (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                   *)&this_01->field_0x0)->Hash).SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)
                 &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                    *)&this_01->field_0x0)->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar3;
        }
        uVar12 = *(uint *)((longlong)FVar14 +
                          (ulonglong)
                          (((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                             *)&this_01->field_0x0)->HashSize - 1U & uVar11) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            pFVar15 = (FName *)((longlong)(int)uVar12 * 0x40 +
                               *(longlong *)
                                &((TSet<TTuple<FUserDefinedChordKey,FInputChord>,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>,FDefaultSetAllocator>
                                   *)&this_01->field_0x0)->Elements);
            if (((*pFVar15 == local_98.BindingContext) && (pFVar15[1] == local_98.CommandName)) &&
               ((EMultipleKeyBindingIndex)pFVar15[2].ComparisonIndex.Value == local_98.ChordIndex))
            {
              if ((uVar12 != 0xffffffff) && (pFVar15 != (FName *)0x0)) {
                pFVar13 = (FInputChord *)(pFVar15 + 3);
                goto LAB_1427879bb;
              }
              break;
            }
            uVar12 = pFVar15[7].ComparisonIndex.Value;
          } while (uVar12 != 0xffffffff);
        }
      }
      pFVar13 = TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                ::EmplaceByHash<FUserDefinedChordKey_const_&>
                          ((TMapBase<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                            *)this_01,uVar11,&local_98);
LAB_1427879bb:
      if (((param_1->ActiveChords).ArrayNum <= (int)(local_res18 & 0xff)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->ActiveChords).AllocatorInstance.Data;
      pTVar5 = *(TReferenceControllerBase<1> **)
                (pFVar4 + (ulonglong)(local_res18 & 0xff) * 0x10 + 8);
      pFVar15 = *(FName **)(pFVar4 + (ulonglong)(local_res18 & 0xff) * 0x10);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      FVar16 = (FName)EKeys::Invalid.KeyDetails.SharedReferenceCount;
      FVar18 = (FName)EKeys::Invalid.KeyDetails.Object;
      FVar17 = EKeys::Invalid.KeyName;
      if (pFVar15 == (FName *)0x0) {
        bVar8 = true;
        local_80 = EKeys::Invalid.KeyName;
        local_78 = EKeys::Invalid.KeyDetails.Object;
        local_70 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
        if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68[0] = local_68[0] & 0xfffffff0;
        puVar19 = local_68;
      }
      else {
        FVar16 = pFVar15[2];
        bVar9 = true;
        FVar17 = *pFVar15;
        FVar18 = pFVar15[1];
        if (FVar16 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar16 + 8) = *(int *)((longlong)FVar16 + 8) + 1;
          UNLOCK();
        }
        puVar19 = local_48;
        local_48[0] = pFVar15[3].ComparisonIndex.Value & 0xf | local_48[0] & 0xfffffff0;
        local_60 = FVar17;
        local_58 = FVar18;
        local_50 = FVar16;
      }
      (pFVar13->Key).KeyName = FVar17;
      if (FVar16 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar16 + 8) = *(int *)((longlong)FVar16 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (pFVar13->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      (pFVar13->Key).KeyDetails.Object = (FKeyDetails *)FVar18;
      (pFVar13->Key).KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)FVar16;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      uVar11 = *puVar19;
      uVar12 = (uVar11 ^ pFVar13->bShift) & 1 ^ *(uint *)&pFVar13->field_0x18;
      uVar12 = (uVar12 ^ uVar11) & 2 ^ uVar12;
      uVar12 = (uVar12 ^ uVar11) & 4 ^ uVar12;
      *(uint *)&pFVar13->field_0x18 = (uVar12 ^ uVar11) & 8 ^ uVar12;
      if (bVar8) {
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70);
      }
      if (bVar9) {
        bVar9 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      local_res18 = local_res18 + 1;
    } while (local_res18 < 2);
  }
  return;
}

