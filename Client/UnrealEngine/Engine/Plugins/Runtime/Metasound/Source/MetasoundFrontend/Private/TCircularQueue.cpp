// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// TCircularQueue<int> @ 14ad93040

TCircularQueue<int> * __thiscall
TCircularQueue<int>::TCircularQueue<int>(TCircularQueue<int> *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = &(this->Buffer).Elements.ArrayNum;
  piVar2 = &(this->Buffer).Elements.ArrayMax;
  (this->Buffer).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar3 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar7 = 1 << ((byte)lVar4 & 0x1f);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar7,&(this->Buffer).Elements.AllocatorInstance,piVar1,piVar2);
  memset((this->Buffer).Elements.AllocatorInstance.Data + (longlong)iVar6 * 4,0,(longlong)iVar7 << 2
        );
  (this->Buffer).IndexMask = (this->Buffer).Elements.ArrayNum - 1;
  this->Head = (TAtomic<unsigned_int>)0x0;
  this->Tail = (TAtomic<unsigned_int>)0x0;
  return this;
}

