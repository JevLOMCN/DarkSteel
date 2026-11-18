// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 2

// AddUniqueImpl<TTuple<unsigned___int64,unsigned_int>_> @ 14de6c8d0

int __thiscall
TArray<TTuple<unsigned___int64,unsigned_int>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TTuple<unsigned___int64,unsigned_int>_>
          (TArray<TTuple<unsigned___int64,unsigned_int>,TSizedDefaultAllocator<32>_> *this,
          TTuple<unsigned___int64,unsigned_int> *param_1)

{
  FScriptContainerElement *pFVar1;
  TTuple<unsigned___int64,unsigned_int> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TTuple<unsigned___int64,unsigned_int> *pTVar7;
  
  pTVar2 = (TTuple<unsigned___int64,unsigned_int> *)(this->AllocatorInstance).Data;
  if (pTVar2 != pTVar2 + this->ArrayNum) {
    pTVar7 = pTVar2;
    do {
      if ((*(longlong *)pTVar7 == *(longlong *)param_1) &&
         (*(int *)&pTVar7->field_0x8 == *(int *)&param_1->field_0x8)) {
        iVar6 = (int)((longlong)pTVar7 - (longlong)pTVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pTVar7 = pTVar7 + 1;
    } while (pTVar7 != pTVar2 + this->ArrayNum);
  }
  if (((pTVar2 <= param_1) && (param_1 < pTVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar1 + 8) = uVar4;
  return iVar6;
}

// RemoveAtSwapImpl @ 14de81bf0

void __thiscall
TArray<FTrackedView,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FTrackedView,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIResource *this_00;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x40;
  this_00 = *(FRHIResource **)(_Dst + 0x30);
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x40,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

