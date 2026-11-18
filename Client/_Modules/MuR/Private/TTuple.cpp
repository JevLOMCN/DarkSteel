// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet> @ 14a975a70

TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet> * __thiscall
TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>::
TTuple<enum_UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>
          (void *this,
          TTuple<UE::Mutable::Private::EMeshBufferType,UE::Mutable::Private::FMeshBufferSet>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FMeshBuffer *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)this + 8) = *(undefined4 *)&param_1->field_0x8;
  *(undefined4 *)((longlong)this + 0xc) = *(undefined4 *)&param_1->field_0xc;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)&param_1->field_0x18;
  pFVar3 = *(FMeshBuffer **)&param_1->field_0x10;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<UE::Mutable::Private::FMeshBuffer,UE::Mutable::Private::FMeshBuffer,int>
              (pFVar1->Data,pFVar3,iVar2);
  }
  return this;
}

