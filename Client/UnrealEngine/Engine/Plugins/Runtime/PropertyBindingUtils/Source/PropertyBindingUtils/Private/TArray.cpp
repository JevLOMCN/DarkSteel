// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 4

// AddDefaulted_GetRef @ 14d37ee10

FPropertyBindingPathIndirection * __thiscall
TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
AddDefaulted_GetRef(TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                    *this)

{
  ForElementType<FPropertyBindingPathIndirection> FVar1;
  int iVar2;
  FPropertyBindingPathIndirection *pFVar3;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
                      (0x830,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FPropertyBindingPathIndirection>)0x0) {
    this = (TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  pFVar3 = (FPropertyBindingPathIndirection *)((longlong)this + (longlong)iVar2 * 0x30);
  DefaultConstructItems<FPropertyBindingPathIndirection,int>(pFVar3,1);
  return pFVar3;
}

// RemoveAt @ 14d381e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FPropertyBindingPropertyIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::RemoveAt(TArray<FPropertyBindingPropertyIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,EAllowShrinking param_2)

{
  void *_Dst;
  ForElementType<FPropertyBindingPropertyIndirection> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FPropertyBindingPropertyIndirection> FVar6;
  
  uVar4 = 0;
  if (param_1 < this->ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<FPropertyBindingPropertyIndirection>)this;
  if (FVar1 != (ForElementType<FPropertyBindingPropertyIndirection>)0x0) {
    FVar6 = FVar1;
  }
  _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 0x18);
  iVar5 = this->ArrayNum + ~param_1;
  if (iVar5 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar5 * 0x18);
  }
  iVar5 = this->ArrayNum + -1;
  this->ArrayNum = iVar5;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPropertyIndirection>_>
              (0x18,8,&this->AllocatorInstance,iVar5,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14d381f40

void __thiscall
TArray<FPropertyBindingCopyInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FPropertyBindingCopyInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FPropertyBindingCopyInfo *_Dst;
  
  _Dst = (FPropertyBindingCopyInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x60);
  DestructItems<FPropertyBindingCopyInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14d381fc0

void __thiscall
TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
Reset(TArray<FPropertyBindingPathIndirection,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPropertyBindingPathIndirection>_>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

