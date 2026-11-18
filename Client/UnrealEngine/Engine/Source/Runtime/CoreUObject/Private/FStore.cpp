// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// ~FStore @ 141e87fd0

void __thiscall FixedTagPrivate::FStore::~FStore(FStore *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMarshalledText *pFVar4;
  FMarshalledText *pFVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GStores);
  if ((0x3fff < this->Index) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Store.Index < Capacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x19e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((GStores.Data[this->Index] != this) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data[Store.Index] == &Store",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x19f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GStores.Data[this->Index] = (FStore *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GStores);
  if (this->Data != (void *)0x0) {
    pFVar4 = (this->Texts).DataPtr;
    pFVar5 = pFVar4 + (int)*(undefined8 *)&(this->Texts).ArrayNum;
    for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 1) {
      pFVar1 = (pFVar4->String).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    FMemory::Free(this->Data);
  }
  return;
}

// GetAnsiString @ 141e9f460

char * __thiscall FixedTagPrivate::FStore::GetAnsiString(FStore *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  
  puVar5 = TArrayView<unsigned_int,int>::operator[](&this->AnsiStringOffsets,param_1);
  uVar1 = *puVar5;
  uVar4 = 0;
  if ((int)uVar1 < (this->AnsiStrings).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pcVar6 = (char *)(*pcVar2)();
      return pcVar6;
    }
  }
  return (this->AnsiStrings).DataPtr + (int)uVar1;
}

// GetWideString @ 141ea3e50

wchar_t * __thiscall FixedTagPrivate::FStore::GetWideString(FStore *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  wchar_t *pwVar6;
  
  puVar5 = TArrayView<unsigned_int,int>::operator[](&this->WideStringOffsets,param_1);
  uVar1 = *puVar5;
  uVar4 = 0;
  if ((int)uVar1 < (this->WideStrings).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar6 = (wchar_t *)(*pcVar2)();
      return pwVar6;
    }
  }
  return (this->WideStrings).DataPtr + (int)uVar1;
}

// Release @ 141eb4010

void __thiscall FixedTagPrivate::FStore::Release(FStore *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMarshalledText *pFVar6;
  FMarshalledText *pFVar7;
  
  LOCK();
  pFVar1 = &this->RefCount;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if ((iVar2 == 1) && (this != (FStore *)0x0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GStores);
    if ((0x3fff < this->Index) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Store.Index < Capacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x19e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((GStores.Data[this->Index] != this) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data[Store.Index] == &Store",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                           ,0x19f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    GStores.Data[this->Index] = (FStore *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GStores);
    if (this->Data != (void *)0x0) {
      pFVar6 = (this->Texts).DataPtr;
      pFVar7 = pFVar6 + (int)*(undefined8 *)&(this->Texts).ArrayNum;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 1) {
        pFVar3 = (pFVar6->String).Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      FMemory::Free(this->Data);
    }
    ::operator_delete(this,200);
  }
  return;
}

