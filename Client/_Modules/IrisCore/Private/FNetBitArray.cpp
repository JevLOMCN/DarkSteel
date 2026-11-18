// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// Init @ 14420f5b0

void __thiscall UE::Net::FNetBitArray::Init(FNetBitArray *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  this->BitCount = param_1;
  piVar1 = &(this->Storage).ArrayMax;
  piVar2 = &(this->Storage).ArrayNum;
  uVar4 = param_1 + 0x1f >> 5;
  *piVar2 = 0;
  if (*piVar1 < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,(ForAnyElementType *)this,0,piVar1);
  }
  iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar4,(ForAnyElementType *)this,piVar2,piVar1);
  memset((this->Storage).AllocatorInstance.Data + (longlong)iVar3 * 4,0,(ulonglong)uVar4 << 2);
  return;
}

// Combine<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)> @ 144220da0

void __thiscall
UE::Net::FNetBitArray::Combine<unsigned_int_(__cdecl&)(unsigned_int,unsigned_int)>
          (FNetBitArray *this,FNetBitArray *param_1,_func___cdecl_uint_uint_uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((((this->Storage).AllocatorInstance.Data == (param_1->Storage).AllocatorInstance.Data) ||
      (this->BitCount != param_1->BitCount)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x539,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = (this->Storage).ArrayNum;
  pFVar4 = (this->Storage).AllocatorInstance.Data;
  if (uVar3 != 0) {
    lVar5 = (longlong)(param_1->Storage).AllocatorInstance.Data - (longlong)pFVar4;
    uVar6 = (ulonglong)uVar3;
    do {
      uVar3 = (*param_2)(*(uint *)pFVar4,*(uint *)(pFVar4 + lVar5));
      *(uint *)pFVar4 = uVar3;
      pFVar4 = pFVar4 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// FNetBitArray @ 144229250

FNetBitArray * __thiscall
UE::Net::FNetBitArray::FNetBitArray(FNetBitArray *this,FNetBitArray *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Storage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Storage).ArrayMax;
  iVar2 = (param_1->Storage).ArrayNum;
  _Src = (param_1->Storage).AllocatorInstance.Data;
  (this->Storage).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Storage).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->BitCount = param_1->BitCount;
  return this;
}

// Copy @ 144233fd0

void __thiscall UE::Net::FNetBitArray::Copy(FNetBitArray *this,FNetBitArray *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  if (((this->Storage).AllocatorInstance.Data == (param_1->Storage).AllocatorInstance.Data) ||
     (this->BitCount != param_1->BitCount)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x51e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = (this->Storage).ArrayNum;
  if ((uVar1 != 0) && ((param_1->Storage).ArrayNum != 0)) {
    memcpy((this->Storage).AllocatorInstance.Data,(param_1->Storage).AllocatorInstance.Data,
           (ulonglong)uVar1 << 2);
  }
  return;
}

// GetDataChecked @ 14423bc60

uint * __thiscall UE::Net::FNetBitArray::GetDataChecked(FNetBitArray *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  if ((int)param_1 <= (this->Storage).ArrayNum) {
    return (uint *)(this->Storage).AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(int32)MaxWordIterationCount <= Storage.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                     ,0x8e,
                     L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uint *)(*pcVar1)();
    return puVar3;
  }
  return (uint *)(this->Storage).AllocatorInstance.Data;
}

// GetDataChecked @ 14423bcc0

uint * __thiscall UE::Net::FNetBitArray::GetDataChecked(FNetBitArray *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  if ((int)param_1 <= (this->Storage).ArrayNum) {
    return (uint *)(this->Storage).AllocatorInstance.Data;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(int32)MaxWordIterationCount <= Storage.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                     ,0x84,
                     L"MaxWordIterationCount (%u) is higher than this NetBitArray word count (%d). Out of Bounds memory access will occur."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    puVar3 = (uint *)(*pcVar1)();
    return puVar3;
  }
  return (uint *)(this->Storage).AllocatorInstance.Data;
}

// IsBitSet @ 144243bc0

bool __thiscall UE::Net::FNetBitArray::IsBitSet(FNetBitArray *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (*(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
}

// begin @ 14425d770

FNetBitArrayRangedForConstIterator * __thiscall
UE::Net::FNetBitArray::begin
          (FNetBitArray *this,FNetBitArrayRangedForConstIterator *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FNetBitArrayRangedForConstIterator *pFVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  uVar9 = this->BitCount;
  __return_storage_ptr__->Data = (uint *)pFVar1;
  __return_storage_ptr__->BitCount = uVar9;
  __return_storage_ptr__->WordCount = uVar9 + 0x1f >> 5;
  __return_storage_ptr__->CurrentBitIndex = 0;
  __return_storage_ptr__->CurrentWord = 0;
  if (((pFVar1 == (FScriptContainerElement *)0x0) && (uVar9 != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData != nullptr || InBitCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x6b9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNetBitArrayRangedForConstIterator *)(*pcVar3)();
    return pFVar5;
  }
  uVar9 = __return_storage_ptr__->CurrentBitIndex;
  uVar10 = __return_storage_ptr__->BitCount;
  uVar8 = (ulonglong)(uVar9 >> 5);
  if (uVar9 < uVar10) {
    uVar6 = *__return_storage_ptr__->Data;
    __return_storage_ptr__->CurrentWord = uVar6;
    if (uVar6 != 0) goto LAB_14425d813;
  }
  else {
    __return_storage_ptr__->CurrentWord = 0;
  }
  do {
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar6;
    if (__return_storage_ptr__->WordCount <= uVar6) goto LAB_14425d837;
    uVar9 = uVar9 + 0x20;
    __return_storage_ptr__->CurrentBitIndex = uVar9;
    uVar6 = __return_storage_ptr__->Data[uVar8];
    __return_storage_ptr__->CurrentWord = uVar6;
  } while (uVar6 == 0);
LAB_14425d813:
  iVar2 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  iVar7 = 0x20;
  if (uVar6 != 0) {
    iVar7 = iVar2;
  }
  uVar9 = iVar7 + (uVar9 & 0xffffffe0);
  __return_storage_ptr__->CurrentWord = uVar6 - 1 & uVar6;
  if (uVar9 < uVar10) {
    uVar10 = uVar9;
  }
LAB_14425d837:
  __return_storage_ptr__->CurrentBitIndex = uVar10;
  return __return_storage_ptr__;
}

// end @ 14425d850

FNetBitArrayRangedForConstIterator * __thiscall
UE::Net::FNetBitArray::end
          (FNetBitArray *this,FNetBitArrayRangedForConstIterator *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FNetBitArrayRangedForConstIterator *pFVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  uVar9 = this->BitCount;
  __return_storage_ptr__->Data = (uint *)pFVar1;
  __return_storage_ptr__->BitCount = uVar9;
  __return_storage_ptr__->WordCount = uVar9 + 0x1f >> 5;
  __return_storage_ptr__->CurrentBitIndex = uVar9;
  __return_storage_ptr__->CurrentWord = 0;
  if (((pFVar1 == (FScriptContainerElement *)0x0) && (uVar9 != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InData != nullptr || InBitCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x6b9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNetBitArrayRangedForConstIterator *)(*pcVar3)();
    return pFVar5;
  }
  uVar9 = __return_storage_ptr__->CurrentBitIndex;
  uVar10 = __return_storage_ptr__->BitCount;
  uVar8 = (ulonglong)(uVar9 >> 5);
  if (uVar9 < uVar10) {
    uVar6 = *__return_storage_ptr__->Data;
    __return_storage_ptr__->CurrentWord = uVar6;
    if (uVar6 != 0) goto LAB_14425d8f5;
  }
  else {
    __return_storage_ptr__->CurrentWord = 0;
  }
  do {
    uVar6 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar6;
    if (__return_storage_ptr__->WordCount <= uVar6) goto LAB_14425d919;
    uVar9 = uVar9 + 0x20;
    __return_storage_ptr__->CurrentBitIndex = uVar9;
    uVar6 = __return_storage_ptr__->Data[uVar8];
    __return_storage_ptr__->CurrentWord = uVar6;
  } while (uVar6 == 0);
LAB_14425d8f5:
  iVar2 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  iVar7 = 0x20;
  if (uVar6 != 0) {
    iVar7 = iVar2;
  }
  uVar9 = iVar7 + (uVar9 & 0xffffffe0);
  __return_storage_ptr__->CurrentWord = uVar6 - 1 & uVar6;
  if (uVar9 < uVar10) {
    uVar10 = uVar9;
  }
LAB_14425d919:
  __return_storage_ptr__->CurrentBitIndex = uVar10;
  return __return_storage_ptr__;
}

// SetBitValue @ 1442e4370

void __thiscall UE::Net::FNetBitArray::SetBitValue(FNetBitArray *this,uint param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  pFVar1 = (this->Storage).AllocatorInstance.Data;
  if (this->BitCount <= param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2ac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  pFVar1 = pFVar1 + (ulonglong)(param_1 >> 5) * 4;
  uVar4 = 0;
  if (param_2) {
    uVar4 = uVar5;
  }
  *(uint *)pFVar1 = ~uVar5 & *(uint *)pFVar1 | uVar4;
  return;
}

