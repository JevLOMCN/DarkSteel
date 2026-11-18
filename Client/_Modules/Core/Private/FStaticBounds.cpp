// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FStaticBounds @ 1417a3d20

FStaticBounds * __thiscall
`UnitConversion::GetQuantizationBounds'::__l2::FStaticBounds::FStaticBounds(void *this)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int *piVar4;
  ForAnyElementType *pFVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForAnyElementType *pFVar12;
  
  *(undefined8 *)this = 0;
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(undefined4 *)((longlong)this + 8) = 0;
  pFVar2 = (ForAnyElementType *)((longlong)this + 0x20);
  *(int *)((longlong)this + 0xc) = 0;
  pFVar12 = (ForAnyElementType *)((longlong)this + 0x30);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  pFVar3 = (ForAnyElementType *)((longlong)this + 0x40);
  piVar4 = (int *)((longlong)this + 0x3c);
  *(undefined8 *)((longlong)this + 0x18) = 0;
  pFVar5 = (ForAnyElementType *)((longlong)this + 0x50);
  pFVar6 = (ForAnyElementType *)((longlong)this + 0x60);
  pFVar2->Data = (FScriptContainerElement *)0x0;
  pFVar7 = (ForAnyElementType *)((longlong)this + 0x70);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  pFVar8 = (ForAnyElementType *)((longlong)this + 0x80);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  pFVar3->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  pFVar5->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  pFVar6->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  pFVar7->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  pFVar8->Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)this + 0x88) = 0;
  iVar11 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,this,(int *)((longlong)this + 0xc));
  *(int *)((longlong)this + 8) = iVar11 + 1;
  lVar9 = *(longlong *)this;
  *(undefined1 *)(lVar9 + (longlong)iVar11 * 8) = 0;
  *(undefined4 *)(lVar9 + 4 + (longlong)iVar11 * 8) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 8);
  if (iVar11 == *(int *)((longlong)this + 0xc)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar11 + 1;
  lVar9 = *(longlong *)this;
  *(undefined1 *)(lVar9 + (longlong)iVar11 * 8) = 1;
  *(undefined4 *)(lVar9 + 4 + (longlong)iVar11 * 8) = 0x41200000;
  iVar11 = *(int *)((longlong)this + 8);
  if (iVar11 == *(int *)((longlong)this + 0xc)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar11 + 1;
  lVar9 = *(longlong *)this;
  *(undefined1 *)(lVar9 + (longlong)iVar11 * 8) = 2;
  *(undefined4 *)(lVar9 + 4 + (longlong)iVar11 * 8) = 0x42c80000;
  iVar11 = *(int *)((longlong)this + 8);
  if (iVar11 == *(int *)((longlong)this + 0xc)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar11 + 1;
  lVar9 = *(longlong *)this;
  *(undefined1 *)(lVar9 + (longlong)iVar11 * 8) = 3;
  *(undefined4 *)(lVar9 + 4 + (longlong)iVar11 * 8) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 8);
  if (iVar11 == *(int *)((longlong)this + 0xc)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar11 + 1;
  lVar9 = *(longlong *)this;
  *(undefined1 *)(lVar9 + (longlong)iVar11 * 8) = 4;
  *(undefined4 *)(lVar9 + 4 + (longlong)iVar11 * 8) = 0;
  iVar11 = *(int *)((longlong)this + 0x18);
  if (iVar11 == *(int *)((longlong)this + 0x1c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar1,(int *)((longlong)this + 0x1c));
  }
  *(int *)((longlong)this + 0x18) = iVar11 + 1;
  pFVar10 = pFVar1->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x5;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x41400000;
  iVar11 = *(int *)((longlong)this + 0x18);
  if (iVar11 == *(int *)((longlong)this + 0x1c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar1,(int *)((longlong)this + 0x1c));
  }
  *(int *)((longlong)this + 0x18) = iVar11 + 1;
  pFVar10 = pFVar1->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x6;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x40400000;
  iVar11 = *(int *)((longlong)this + 0x18);
  if (iVar11 == *(int *)((longlong)this + 0x1c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar1,(int *)((longlong)this + 0x1c));
  }
  *(int *)((longlong)this + 0x18) = iVar11 + 1;
  pFVar10 = pFVar1->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x7;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x44dc0000;
  iVar11 = *(int *)((longlong)this + 0x18);
  if (iVar11 == *(int *)((longlong)this + 0x1c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar1,(int *)((longlong)this + 0x1c));
  }
  *(int *)((longlong)this + 0x18) = iVar11 + 1;
  pFVar10 = pFVar1->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x8;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x28);
  if (iVar11 == *(int *)((longlong)this + 0x2c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar2,(int *)((longlong)this + 0x2c));
  }
  *(int *)((longlong)this + 0x28) = iVar11 + 1;
  pFVar10 = pFVar2->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x17;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x28);
  if (iVar11 == *(int *)((longlong)this + 0x2c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar2,(int *)((longlong)this + 0x2c));
  }
  *(int *)((longlong)this + 0x28) = iVar11 + 1;
  pFVar10 = pFVar2->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x18;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x28);
  if (iVar11 == *(int *)((longlong)this + 0x2c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar2,(int *)((longlong)this + 0x2c));
  }
  *(int *)((longlong)this + 0x28) = iVar11 + 1;
  pFVar10 = pFVar2->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x19;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x28);
  if (iVar11 == *(int *)((longlong)this + 0x2c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar2,(int *)((longlong)this + 0x2c));
  }
  *(int *)((longlong)this + 0x28) = iVar11 + 1;
  pFVar10 = pFVar2->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x1a;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x28);
  if (iVar11 == *(int *)((longlong)this + 0x2c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar2,(int *)((longlong)this + 0x2c));
  }
  *(int *)((longlong)this + 0x28) = iVar11 + 1;
  pFVar10 = pFVar2->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x1b;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x38);
  if (iVar11 == *piVar4) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar12,piVar4);
  }
  *(int *)((longlong)this + 0x38) = iVar11 + 1;
  pFVar10 = pFVar12->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x1c;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x41800000;
  iVar11 = *(int *)((longlong)this + 0x38);
  if (iVar11 == *piVar4) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar12,piVar4);
  }
  *(int *)((longlong)this + 0x38) = iVar11 + 1;
  pFVar10 = pFVar12->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x1d;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x41600000;
  iVar11 = *(int *)((longlong)this + 0x38);
  if (iVar11 == *piVar4) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar12,piVar4);
  }
  *(int *)((longlong)this + 0x38) = iVar11 + 1;
  pFVar10 = pFVar12->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x1e;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x48);
  if (iVar11 == *(int *)((longlong)this + 0x4c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar3,(int *)((longlong)this + 0x4c));
  }
  *(int *)((longlong)this + 0x48) = iVar11 + 1;
  pFVar10 = pFVar3->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x1f;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x358637bd;
  iVar11 = *(int *)((longlong)this + 0x48);
  if (iVar11 == *(int *)((longlong)this + 0x4c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar3,(int *)((longlong)this + 0x4c));
  }
  *(int *)((longlong)this + 0x48) = iVar11 + 1;
  pFVar10 = pFVar3->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x20;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x48);
  if (iVar11 == *(int *)((longlong)this + 0x4c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar3,(int *)((longlong)this + 0x4c));
  }
  *(int *)((longlong)this + 0x48) = iVar11 + 1;
  pFVar10 = pFVar3->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x21;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x358637bd;
  iVar11 = *(int *)((longlong)this + 0x48);
  if (iVar11 == *(int *)((longlong)this + 0x4c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar3,(int *)((longlong)this + 0x4c));
  }
  *(int *)((longlong)this + 0x48) = iVar11 + 1;
  pFVar10 = pFVar3->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x22;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x58);
  if (iVar11 == *(int *)((longlong)this + 0x5c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar5,(int *)((longlong)this + 0x5c));
  }
  *(int *)((longlong)this + 0x58) = iVar11 + 1;
  pFVar10 = pFVar5->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x2c;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x58);
  if (iVar11 == *(int *)((longlong)this + 0x5c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar5,(int *)((longlong)this + 0x5c));
  }
  *(int *)((longlong)this + 0x58) = iVar11 + 1;
  pFVar10 = pFVar5->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x2d;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x58);
  if (iVar11 == *(int *)((longlong)this + 0x5c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar5,(int *)((longlong)this + 0x5c));
  }
  *(int *)((longlong)this + 0x58) = iVar11 + 1;
  pFVar10 = pFVar5->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x2e;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x58);
  if (iVar11 == *(int *)((longlong)this + 0x5c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar5,(int *)((longlong)this + 0x5c));
  }
  *(int *)((longlong)this + 0x58) = iVar11 + 1;
  pFVar10 = pFVar5->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x2f;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x68);
  if (iVar11 == *(int *)((longlong)this + 0x6c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar6,(int *)((longlong)this + 0x6c));
  }
  *(int *)((longlong)this + 0x68) = iVar11 + 1;
  pFVar10 = pFVar6->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x31;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x44800000;
  iVar11 = *(int *)((longlong)this + 0x68);
  if (iVar11 == *(int *)((longlong)this + 0x6c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar6,(int *)((longlong)this + 0x6c));
  }
  *(int *)((longlong)this + 0x68) = iVar11 + 1;
  pFVar10 = pFVar6->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x32;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x44800000;
  iVar11 = *(int *)((longlong)this + 0x68);
  if (iVar11 == *(int *)((longlong)this + 0x6c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar6,(int *)((longlong)this + 0x6c));
  }
  *(int *)((longlong)this + 0x68) = iVar11 + 1;
  pFVar10 = pFVar6->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x33;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x44800000;
  iVar11 = *(int *)((longlong)this + 0x68);
  if (iVar11 == *(int *)((longlong)this + 0x6c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar6,(int *)((longlong)this + 0x6c));
  }
  *(int *)((longlong)this + 0x68) = iVar11 + 1;
  pFVar10 = pFVar6->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x34;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x44800000;
  iVar11 = *(int *)((longlong)this + 0x68);
  if (iVar11 == *(int *)((longlong)this + 0x6c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar6,(int *)((longlong)this + 0x6c));
  }
  *(int *)((longlong)this + 0x68) = iVar11 + 1;
  pFVar10 = pFVar6->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x35;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x3d;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x3e;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x3f;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x42700000;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x40;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x42700000;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x41;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x41c00000;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x42;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x41f37ea3;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x43;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x41400000;
  iVar11 = *(int *)((longlong)this + 0x78);
  if (iVar11 == *(int *)((longlong)this + 0x7c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar7,(int *)((longlong)this + 0x7c));
  }
  *(int *)((longlong)this + 0x78) = iVar11 + 1;
  pFVar10 = pFVar7->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x44;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  iVar11 = *(int *)((longlong)this + 0x88);
  if (iVar11 == *(int *)((longlong)this + 0x8c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar8,(int *)((longlong)this + 0x8c));
  }
  *(int *)((longlong)this + 0x88) = iVar11 + 1;
  pFVar10 = pFVar8->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x48;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x88);
  if (iVar11 == *(int *)((longlong)this + 0x8c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar8,(int *)((longlong)this + 0x8c));
  }
  *(int *)((longlong)this + 0x88) = iVar11 + 1;
  pFVar10 = pFVar8->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x49;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x88);
  if (iVar11 == *(int *)((longlong)this + 0x8c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar8,(int *)((longlong)this + 0x8c));
  }
  *(int *)((longlong)this + 0x88) = iVar11 + 1;
  pFVar10 = pFVar8->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x4a;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0x447a0000;
  iVar11 = *(int *)((longlong)this + 0x88);
  if (iVar11 == *(int *)((longlong)this + 0x8c)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,pFVar8,(int *)((longlong)this + 0x8c));
  }
  *(int *)((longlong)this + 0x88) = iVar11 + 1;
  pFVar10 = pFVar8->Data;
  pFVar10[(longlong)iVar11 * 8] = (FScriptContainerElement)0x4b;
  *(undefined4 *)(pFVar10 + (longlong)iVar11 * 8 + 4) = 0;
  return this;
}

