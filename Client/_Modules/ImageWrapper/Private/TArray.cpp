// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 11

// Append<unsigned_char,TSizedDefaultAllocator<64>_> @ 14260b150

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Append<unsigned_char,TSizedDefaultAllocator<64>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  size_t _Size;
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (this == param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Size = param_1->ArrayNum;
  if (_Size != 0) {
    lVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,_Size,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + lVar3,(param_1->AllocatorInstance).Data,_Size);
    param_1->ArrayNum = 0;
  }
  return;
}

// ~TArray<unsigned_char,TSizedDefaultAllocator<64>_> @ 142666430

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::
~TArray<unsigned_char,TSizedDefaultAllocator<64>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 142666450

void __thiscall
TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
~TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Tasks::Private::FTaskBase_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this)

{
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar1;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// ~TArray<char_const_*,TSizedDefaultAllocator<32>_> @ 142666470

void __thiscall
TArray<char_const_*,TSizedDefaultAllocator<32>_>::~TArray<char_const_*,TSizedDefaultAllocator<32>_>
          (TArray<char_const_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<FColor,TSizedDefaultAllocator<32>_> @ 142666490

void __thiscall
TArray<FColor,TSizedDefaultAllocator<32>_>::~TArray<FColor,TSizedDefaultAllocator<32>_>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_> @ 1426664e0

void __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>::
~TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(this->AllocatorInstance).Data,
             this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14266a7f0

TArray<unsigned_char,TSizedDefaultAllocator<64>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::operator=
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// Empty @ 142689fc0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Empty
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,long64 param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(param_1);
}

// RemoveAtImpl @ 14268d750

void __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *_Dst;
  int iVar1;
  
  _Dst = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14268d7d0

void __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<64>_>::Reset
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this,long64 param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(param_1);
}

// SetNum @ 14268ee30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x18,0,
           (longlong)(param_1 - iVar2) * 0x18);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

