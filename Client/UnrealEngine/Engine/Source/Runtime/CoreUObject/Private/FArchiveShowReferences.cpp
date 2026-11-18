// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FArchiveShowReferences @ 141ed1c00

FArchiveShowReferences * __thiscall
FArchiveShowReferences::FArchiveShowReferences
          (FArchiveShowReferences *this,FOutputDevice *param_1,UObject *param_2,UObject *param_3,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4)

{
  byte *pbVar1;
  int iVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  FArchiveShowReferences *pFVar7;
  UClass *pUVar8;
  UObject *local_res8;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7FArchiveShowReferences__6B_;
  this->SourceObject = param_3;
  this->Exclude = param_4;
  (this->Found).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Found).ArrayNum = 0;
  (this->Found).ArrayMax = 0;
  this->SourceOuter = param_2;
  this->OutputAr = param_1;
  this->DidRef = false;
  if ((this->SourceObject == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveShowReferences.cpp"
                         ,0x1f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FArchiveShowReferences *)(*pcVar5)();
    return pFVar7;
  }
  bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this->SourceObject);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceObject->IsValidLowLevel()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveShowReferences.cpp"
                         ,0x20,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FArchiveShowReferences *)(*pcVar5)();
    return pFVar7;
  }
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
            (&this->Found,&this->SourceOuter);
  for (pTVar3 = *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)&this->SourceObject->field_0x10;
      pTVar3 != (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
      pTVar3 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)pTVar3[4].AllocatorInstance.Data) {
    param_4 = pTVar3;
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
              (&this->Found,(UObject **)&param_4);
  }
  pUVar4 = this->SourceObject;
  if (pUVar4 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      for (pUVar4 = *(UObject **)&pUVar4[1].field_0x18; pUVar4 != (UObject *)0x0;
          pUVar4 = *(UObject **)&pUVar4[1].field_0x18) {
        local_res8 = pUVar4;
        TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*>
                  (&this->Found,&local_res8);
      }
    }
  }
  (**(code **)(*(longlong *)this->SourceObject + 200))(this->SourceObject,this);
  return this;
}

// operator<< @ 141ed6e80

FArchive * __thiscall
FArchiveShowReferences::operator<<(FArchiveShowReferences *this,UObject **param_1)

{
  FOutputDevice *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FArchive *pFVar5;
  longlong lVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  UObject *this_00;
  FString local_28;
  FString local_18;
  
  this_00 = *param_1;
  if ((this_00 == (UObject *)0x0) || (*(UObject **)&this_00->field_0x20 == this->SourceOuter)) {
    return (FArchive *)this;
  }
  pTVar7 = this->Exclude;
  uVar8 = 0;
  if (0 < pTVar7->ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < pTVar7->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar2)();
        return pFVar5;
      }
      this_00 = *param_1;
      if (*(longlong *)((pTVar7->AllocatorInstance).Data + lVar6) ==
          *(longlong *)&this_00->field_0x20) break;
      pTVar7 = this->Exclude;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar8 < pTVar7->ArrayNum);
  }
  if (uVar8 == this->Exclude->ArrayNum) {
    if (this->DidRef == false) {
      pFVar1 = this->OutputAr;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
      FOutputDevice::LogfImpl(pFVar1,L"   %s references:");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = this->OutputAr;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)*param_1,&local_18,(UObject *)0x0,None);
    FOutputDevice::LogfImpl(pFVar1,L"      %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this->DidRef = true;
  }
  return (FArchive *)this;
}

// GetArchiveName @ 141ef8fe0

FString * __thiscall
FArchiveShowReferences::GetArchiveName(FArchiveShowReferences *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FArchiveShowReferences");
  return __return_storage_ptr__;
}

