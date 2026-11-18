// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 10

// FRequestPayloadInMemory @ 14314de20

FRequestPayloadInMemory * __thiscall
FRequestPayloadInMemory::FRequestPayloadInMemory
          (FRequestPayloadInMemory *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  this->_padding_ = (longlong)&___7FRequestPayloadInMemory__6B_;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = param_1->ArrayNum;
  (this->Buffer).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return this;
}

// FRequestPayloadInMemory @ 14314de60

FRequestPayloadInMemory * __thiscall
FRequestPayloadInMemory::FRequestPayloadInMemory
          (FRequestPayloadInMemory *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  pTVar1 = &this->Buffer;
  this->_padding_ = (longlong)&___7FRequestPayloadInMemory__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Buffer).ArrayMax;
  iVar3 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Buffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// ~FRequestPayloadInMemory @ 143150e50

void __thiscall FRequestPayloadInMemory::~FRequestPayloadInMemory(FRequestPayloadInMemory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRequestPayloadInMemory__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRequestPayload__6B_;
  return;
}

// Close @ 143158c20

void __thiscall FRequestPayloadInMemory::Close(FRequestPayloadInMemory *this)

{
  return;
}

// FillOutputBuffer @ 14315e4c0

ulong64 __thiscall
FRequestPayloadInMemory::FillOutputBuffer
          (FRequestPayloadInMemory *this,void *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  void *local_18;
  int iStack_10;
  
  pcVar1 = *(code **)(this->_padding_ + 0x20);
  if ((int)param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  iStack_10 = (int)param_2;
  local_18 = param_1;
  uVar3 = (*pcVar1)(this,&local_18,param_3);
  return uVar3;
}

// FillOutputBuffer @ 14315e540

ulong64 __thiscall
FRequestPayloadInMemory::FillOutputBuffer
          (FRequestPayloadInMemory *this,TArrayView<unsigned_char,int> *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong _Size;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Buffer).ArrayNum;
  if (uVar4 < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeAlreadySent <= ContentLength",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\GenericPlatform\\HttpRequestPayload.cpp"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar4 = uVar4 - param_2;
  _Size = (longlong)param_1->ArrayNum;
  if (uVar4 < (ulonglong)(longlong)param_1->ArrayNum) {
    _Size = uVar4;
  }
  if (_Size != 0) {
    memcpy(param_1->DataPtr,(this->Buffer).AllocatorInstance.Data + param_2,_Size);
  }
  return _Size;
}

// GetContent @ 143161cc0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FRequestPayloadInMemory::GetContent(FRequestPayloadInMemory *this)

{
  return &this->Buffer;
}

// GetContentLength @ 1431620b0

ulong64 __thiscall FRequestPayloadInMemory::GetContentLength(FRequestPayloadInMemory *this)

{
  return (longlong)(this->Buffer).ArrayNum;
}

// IsURLEncoded @ 14316cdb0

bool __thiscall FRequestPayloadInMemory::IsURLEncoded(FRequestPayloadInMemory *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  if (!bTableFilled) {
    uVar9 = 0;
    pcVar6 = AllowedChars;
    do {
      bVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      uVar9 = uVar9 + 1;
      AllowedTable[bVar1] = true;
    } while (uVar9 < 0x42);
    bTableFilled = true;
  }
  lVar8 = (longlong)(this->Buffer).ArrayNum;
  uVar9 = 0;
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->Buffer).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (AllowedTable[(byte)(this->Buffer).AllocatorInstance.Data[lVar7]] == false) {
        return false;
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return true;
}

// Open @ 143171d80

bool __thiscall FRequestPayloadInMemory::Open(FRequestPayloadInMemory *this)

{
  return true;
}

