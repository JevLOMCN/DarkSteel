// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 4

// Bind @ 14deb2e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FACLDatabaseCompressedAnimData::Bind
          (FACLDatabaseCompressedAnimData *this,TArrayView<unsigned_char,int> *param_1)

{
  int iVar1;
  UAnimationCompressionLibraryDatabase *pUVar2;
  UAnimBoneCompressionCodec_ACLDatabase *pUVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  undefined4 uStack_c;
  
  if ((param_1->ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLDatabase.cpp"
                         ,0x2d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = 0;
  pUVar2 = (this->Codec->DatabaseAsset).field0_0x0.DebugPtr;
  uVar9 = (pUVar2->CookedAnimSequenceMappings).ArrayNum;
  pFVar7 = (pUVar2->CookedAnimSequenceMappings).AllocatorInstance.Data;
  if (0 < (int)uVar9) {
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      if ((uint)((ulonglong)*(undefined8 *)(pFVar7 + (longlong)iVar1 * 8) >> 0x20) <
          this->SequenceNameHash) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar5 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar5 != 0);
  }
  if (((iVar8 < (pUVar2->CookedAnimSequenceMappings).ArrayNum) &&
      ((uint)((ulonglong)*(undefined8 *)(pFVar7 + (longlong)iVar8 * 8) >> 0x20) <=
       this->SequenceNameHash)) && (iVar8 != -1)) {
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = (((this->Codec->DatabaseAsset).field0_0x0.DebugPtr)->CookedCompressedBytes).
             AllocatorInstance.Data +
             *(uint *)((pUVar2->CookedAnimSequenceMappings).AllocatorInstance.Data +
                      (longlong)iVar8 * 8);
    if ((((pFVar7 == (FScriptContainerElement *)0x0) || (((ulonglong)pFVar7 & 0xf) != 0)) ||
        ((*(int *)(pFVar7 + 8) != -0x53ee53ef ||
         ((pFVar7[0xe] != (FScriptContainerElement)0x0 ||
          (3 < (ushort)(*(short *)(pFVar7 + 0xc) - 7U))))))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedClipData != nullptr && CompressedClipData->is_valid(false).empty()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimBoneCompressionCodec_ACLDatabase.cpp"
                           ,0x3d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = *(int *)pFVar7;
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar3 = this->Codec;
    (this->CompressedByteStream).DataPtr = (uchar *)pFVar7;
    *(ulonglong *)&(this->CompressedByteStream).ArrayNum = CONCAT44(uStack_c,iVar8);
    this->DatabaseContext = &((pUVar3->DatabaseAsset).field0_0x0.DebugPtr)->DatabaseContext;
  }
  else if (2 < (byte)LogAnimationCompression._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
  }
  return;
}

// GetApproxCompressedSize @ 14deb5840

long64 __thiscall
FACLDatabaseCompressedAnimData::GetApproxCompressedSize(FACLDatabaseCompressedAnimData *this)

{
  return (longlong)(this->CompressedByteStream).ArrayNum;
}

// IsValid @ 14deb5ea0

bool __thiscall FACLDatabaseCompressedAnimData::IsValid(FACLDatabaseCompressedAnimData *this)

{
  uchar *puVar1;
  
  puVar1 = (this->CompressedByteStream).DataPtr;
  if ((((puVar1 != (uchar *)0x0) && (((ulonglong)puVar1 & 0xf) == 0)) &&
      (*(int *)(puVar1 + 8) == -0x53ee53ef)) &&
     (((puVar1[0xe] == '\0' && ((ushort)(*(short *)(puVar1 + 0xc) - 7U) < 4)) &&
      (this->DatabaseContext != (database_context<UEDefaultDatabaseSettings> *)0x0)))) {
    return true;
  }
  return false;
}

// SerializeCompressedData @ 14deb78b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FACLDatabaseCompressedAnimData::SerializeCompressedData
          (FACLDatabaseCompressedAnimData *this,UObject *param_1,FArchive *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FString *pFVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  ICompressedAnimData::SerializeCompressedData((ICompressedAnimData *)this,param_1,param_2);
  ::operator<<(param_2,(bool *)&this->_padding_);
  if (((char)this->_padding_ != '\0') &&
     ((((param_2->field_0x28 & 1) != 0 ||
       ((*(longlong *)&param_2->field_0x68 != 0 &&
        (*(longlong *)(*(longlong *)&param_2->field_0x68 + 0x10) != 0)))) &&
      (1 < (byte)LogAnimationCompression._0_1_)))) {
    if (param_1 != (UObject *)0x0) {
      pFVar3 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimationCompression);
    if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  puVar1 = &this->SequenceNameHash;
  puVar2 = (uint *)**(undefined8 **)&param_2->field_0x8;
  if ((uint *)(*(undefined8 **)&param_2->field_0x8)[1] < puVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  return;
}

