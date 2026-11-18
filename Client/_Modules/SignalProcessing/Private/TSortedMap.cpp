// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// AllocateMemoryForEmplace<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&> @ 14449a4d0

TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
* __thiscall
TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
::AllocateMemoryForEmplace<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>
          (TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
           *this,FChannelMixKey *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
  *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  
  uVar2 = (this->Pairs).ArrayNum;
  piVar1 = &(this->Pairs).ArrayNum;
  pFVar11 = (this->Pairs).AllocatorInstance.Data;
  iVar12 = 0;
  if (0 < (int)uVar2) {
    iVar8 = param_1->InputChannelIndex;
    uVar13 = uVar2;
    do {
      iVar4 = (uVar13 >> 1) + iVar12;
      lVar10 = (longlong)iVar4 * 0x1c;
      iVar3 = *(int *)(pFVar11 + lVar10);
      bVar14 = SBORROW4(iVar3,iVar8);
      iVar5 = iVar3 - iVar8;
      if (iVar3 == iVar8) {
        iVar5 = *(int *)(pFVar11 + lVar10 + 4);
        bVar14 = SBORROW4(iVar5,param_1->OutputChannelIndex);
        iVar5 = iVar5 - param_1->OutputChannelIndex;
      }
      if (bVar14 != iVar5 < 0) {
        iVar12 = iVar4 + (uVar13 & 1);
      }
      uVar7 = uVar13 >> 1;
      uVar13 = uVar13 >> 1;
    } while (uVar7 != 0);
  }
  if ((iVar12 < 0) || ((int)uVar2 < iVar12)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                        ,0x249,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
                *)(*pcVar6)();
      return pTVar9;
    }
    if (iVar12 < 0) goto LAB_14449a5e3;
  }
  if (iVar12 < *piVar1) {
    if ((iVar12 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
                *)(*pcVar6)();
      return pTVar9;
    }
    pTVar9 = (TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
              *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar12 * 0x1c);
    iVar8 = *(int *)pTVar9;
    iVar4 = param_1->InputChannelIndex;
    bVar14 = SBORROW4(iVar4,iVar8);
    iVar3 = iVar4 - iVar8;
    if (iVar4 == iVar8) {
      bVar14 = SBORROW4(param_1->OutputChannelIndex,*(int *)&pTVar9->field_0x4);
      iVar3 = param_1->OutputChannelIndex - *(int *)&pTVar9->field_0x4;
    }
    if (bVar14 == iVar3 < 0) {
      return pTVar9;
    }
  }
LAB_14449a5e3:
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,1,(ForAnyElementType *)this,piVar1,&(this->Pairs).ArrayMax);
  pFVar11 = (this->Pairs).AllocatorInstance.Data + (longlong)iVar12 * 0x1c;
  memmove(pFVar11 + 0x1c,pFVar11,(longlong)(iVar8 - iVar12) * 0x1c);
  return (TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>
          *)((this->Pairs).AllocatorInstance.Data + (longlong)iVar12 * 0x1c);
}

// Find @ 1444be2c0

FChannelMixState * __thiscall
TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
::Find(TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
       *this,FChannelMixKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FChannelMixState *pFVar4;
  uint uVar5;
  FKeyForward local_res8;
  
  uVar3 = Algo::
          BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>)local_res8);
  if (uVar3 == 0xffffffff) {
    return (FChannelMixState *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar3 < (this->Pairs).ArrayNum) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FChannelMixState *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FChannelMixState *)
         ((this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x1c + 8);
}

// Remove @ 1444e11a0

int __thiscall
TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
::Remove(TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
         *this,FChannelMixKey *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState>,TSizedDefaultAllocator<32>_>,Audio::FBaseChannelFormatConverter::FChannelMixKey,TSortedMap<Audio::FBaseChannelFormatConverter::FChannelMixKey,Audio::FBaseChannelFormatConverter::FChannelMixState,TSizedDefaultAllocator<32>,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>::FKeyForward,TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>_>
                    (&this->Pairs,param_1,local_res8,
                     (TLess<Audio::FBaseChannelFormatConverter::FChannelMixKey_const_&>)local_res8);
  uVar5 = 0;
  if (uVar4 != 0xffffffff) {
    if ((int)uVar4 < (this->Pairs).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
    }
    _Dst = (this->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x1c;
    iVar6 = (this->Pairs).ArrayNum + ~uVar4;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x1c,(longlong)iVar6 * 0x1c);
    }
    piVar1 = &(this->Pairs).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,(ForAnyElementType *)this,(this->Pairs).ArrayNum,&(this->Pairs).ArrayMax);
    uVar5 = 1;
  }
  return uVar5;
}

