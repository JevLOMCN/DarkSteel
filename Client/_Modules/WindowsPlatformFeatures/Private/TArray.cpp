// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 2

// Insert @ 148d282d0

int __thiscall
TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_>::Insert
          (TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> *this,FMediaPacket *param_1,
          int param_2)

{
  FMediaPacket *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (FMediaPacket *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x40;
  memmove(pFVar6 + 0x40,pFVar6,(longlong)(iVar5 - param_2) << 6);
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x40;
  *(EPacketType *)pFVar6 = param_1->Type;
  *(long64 *)(pFVar6 + 8) = (param_1->Timestamp).Ticks;
  *(long64 *)(pFVar6 + 0x10) = (param_1->Duration).Ticks;
  *(undefined8 *)(pFVar6 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar6 + 0x18) = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar6 + 0x20) = (param_1->Data).ArrayNum;
  *(int *)(pFVar6 + 0x24) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  uVar3 = *(undefined8 *)((longlong)&param_1->field4_0x28 + 8);
  *(undefined8 *)(pFVar6 + 0x28) = *(undefined8 *)&param_1->field4_0x28;
  *(undefined8 *)(pFVar6 + 0x30) = uVar3;
  *(uint *)(pFVar6 + 0x38) = (param_1->field4_0x28).Video.Framerate;
  return param_2;
}

// RemoveAtImpl @ 148d294a0

void __thiscall
TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<AVEncoder::FMediaPacket,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  int iVar1;
  FMediaPacket *_Dst;
  
  _Dst = (FMediaPacket *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<AVEncoder::FMediaPacket,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

