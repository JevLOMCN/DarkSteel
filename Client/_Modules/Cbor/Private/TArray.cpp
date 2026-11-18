// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Cbor
// Functions: 1

// Pop @ 143120dd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCborContext * __thiscall
TArray<FCborContext,TSizedDefaultAllocator<32>_>::Pop
          (TArray<FCborContext,TSizedDefaultAllocator<32>_> *this,
          FCborContext *__return_storage_ptr__,EAllowShrinking param_1)

{
  FCborContext_u_8 FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCborContext *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  
  if (this->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCborContext *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar7 = (this->AllocatorInstance).Data;
  lVar6 = (longlong)this->ArrayNum * 0x20;
  (__return_storage_ptr__->Header).Header = (uchar)pFVar7[lVar6 + -0x20];
  __return_storage_ptr__->field1_0x8 = *(FCborContext_u_8 *)(pFVar7 + lVar6 + -0x18);
  __return_storage_ptr__->field1_0x8 = *(FCborContext_u_8 *)(pFVar7 + lVar6 + -0x18);
  (__return_storage_ptr__->field1_0x8).BoolValue = (bool)pFVar7[lVar6 + -0x18];
  (__return_storage_ptr__->field1_0x8).FloatValue = *(float *)(pFVar7 + lVar6 + -0x18);
  __return_storage_ptr__->field1_0x8 = *(FCborContext_u_8 *)(pFVar7 + lVar6 + -0x18);
  FVar1 = *(FCborContext_u_8 *)(pFVar7 + lVar6 + -0x18);
  (__return_storage_ptr__->RawTextValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->field1_0x8 = FVar1;
  (__return_storage_ptr__->RawTextValue).AllocatorInstance.Data =
       *(FScriptContainerElement **)(pFVar7 + lVar6 + -0x10);
  *(undefined8 *)(pFVar7 + lVar6 + -0x10) = 0;
  (__return_storage_ptr__->RawTextValue).ArrayNum = *(int *)(pFVar7 + lVar6 + -8);
  (__return_storage_ptr__->RawTextValue).ArrayMax = *(int *)(pFVar7 + lVar6 + -4);
  *(undefined8 *)(pFVar7 + lVar6 + -8) = 0;
  iVar4 = this->ArrayNum;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
  if (*(void **)(pFVar7 + -0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar7 + -0x10));
  }
  iVar4 = this->ArrayNum - iVar4;
  if (iVar4 != 0) {
    memmove(pFVar7 + -0x20,pFVar7,(longlong)iVar4 << 5);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

