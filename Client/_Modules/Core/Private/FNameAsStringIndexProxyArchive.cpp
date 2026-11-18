// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator<< @ 1419d5490

FArchive * __thiscall
FNameAsStringIndexProxyArchive::operator<<(FNameAsStringIndexProxyArchive *this,FName *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  FName *pFVar10;
  FArchive *pFVar11;
  ForElementType<FSetElementId> FVar12;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if ((this->_padding_ & 1) == 0) {
    FVar3 = *param_1;
    uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (*(int *)&(this->NamesSeenOnSave).Elements.field_0x8 !=
        *(int *)&(this->NamesSeenOnSave).Elements.field_0x34) {
      FVar12 = (this->NamesSeenOnSave).Hash.SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&(this->NamesSeenOnSave).Hash;
      }
      iVar7 = *(int *)((longlong)FVar12 +
                      (ulonglong)((this->NamesSeenOnSave).HashSize - 1U & FVar3.Number + uVar8) * 4)
      ;
      if (iVar7 != -1) {
        lVar4 = *(longlong *)&(this->NamesSeenOnSave).Elements;
        do {
          if (*(FName *)(lVar4 + (longlong)iVar7 * 0x10) == FVar3) {
            if (iVar7 != -1) {
              WriteVarUIntToArchive((FArchive *)this->_padding_,(longlong)iVar7 + 1);
              return (FArchive *)this;
            }
            break;
          }
          iVar7 = *(int *)(lVar4 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    ::FName::ToString(param_1,&local_28);
    WriteVarUIntToArchive((FArchive *)this->_padding_,0);
    ::operator<<((FArchive *)this->_padding_,&local_28);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->NamesSeenOnSave,&local_res8,(bool *)param_1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar9 = ReadVarUIntFromArchive((FArchive *)this->_padding_);
    if (uVar9 != 0) {
      iVar7 = (int)uVar9 + -1;
      if ((iVar7 < 0) || ((this->NamesLoaded).ArrayNum <= iVar7)) {
        FArchiveState::SetError((FArchiveState *)this);
        return (FArchive *)this;
      }
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar5)();
        return pFVar11;
      }
      *param_1 = *(FName *)((this->NamesLoaded).AllocatorInstance.Data + (longlong)iVar7 * 8);
      return (FArchive *)this;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::operator<<((FArchive *)this->_padding_,&local_38);
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar10 = ::FName::FName(local_res18,iVar7,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                             FNAME_Add);
    pTVar2 = &this->NamesLoaded;
    *param_1 = *pFVar10;
    pFVar10 = (FName *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar10 <= param_1) && (param_1 < pFVar10 + (this->NamesLoaded).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FArchive *)(*pcVar5)();
      return pFVar11;
    }
    iVar7 = (this->NamesLoaded).ArrayNum;
    piVar1 = &(this->NamesLoaded).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->NamesLoaded).ArrayNum = iVar7 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = *param_1;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return (FArchive *)this;
    }
  }
  return (FArchive *)this;
}

