// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// TTuple<FOptimusInstancedPin,FOptimusInstancedPin> @ 14e14d3b0

TTuple<FOptimusInstancedPin,FOptimusInstancedPin> * __thiscall
TTuple<FOptimusInstancedPin,FOptimusInstancedPin>::TTuple<FOptimusInstancedPin,FOptimusInstancedPin>
          (TTuple<FOptimusInstancedPin,FOptimusInstancedPin> *this,
          TTuple<FOptimusInstancedPin,FOptimusInstancedPin> *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&this->field_0x8,
             (FOptimusPinTraversalContext *)&param_1->field_0x8);
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_1->field_0x48;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&this->field_0x50,
             (FOptimusPinTraversalContext *)&param_1->field_0x50);
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
  *(undefined8 *)&this->field_0x88 = *(undefined8 *)&param_1->field_0x88;
  return this;
}

// TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_> @ 14e14d430

TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_> * __thiscall
TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>::
TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>
          (TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>
           *this,TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FOptimusInstancedPin *pFVar3;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&this->field_0x8,
             (FOptimusPinTraversalContext *)&param_1->field_0x8);
  puVar1 = &this->field_0x48;
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&param_1->field_0x50;
  pFVar3 = *(FOptimusInstancedPin **)&param_1->field_0x48;
  *(int *)&this->field_0x50 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&this->field_0x54 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)&this->field_0x54);
    ConstructItems<FOptimusInstancedPin,FOptimusInstancedPin,int>(*(void **)puVar1,pFVar3,iVar2);
  }
  return this;
}

// ~TTuple<FOptimusInstancedPin,FOptimusInstancedPin> @ 14e160eb0

void __thiscall
TTuple<FOptimusInstancedPin,FOptimusInstancedPin>::
~TTuple<FOptimusInstancedPin,FOptimusInstancedPin>
          (TTuple<FOptimusInstancedPin,FOptimusInstancedPin> *this)

{
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
    return;
  }
  return;
}

