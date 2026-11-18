// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 4

// Construct<FFieldObjectCommands> @ 1463262b0

void __cdecl UE::CoreUObject::Private::Construct<FFieldObjectCommands>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FFieldObjectCommands> @ 1463262d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFieldObjectCommands>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FFieldObjectCommands> @ 1463262f0

void __cdecl UE::CoreUObject::Private::Destruct<FFieldObjectCommands>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FFieldObjectCommands> @ 146326380

bool __cdecl
UE::CoreUObject::Private::Copy<FFieldObjectCommands>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar4,iVar5,pFVar7,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar7->Data,pFVar6,(longlong)iVar4 << 3);
          }
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar6 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<TObjectPtr<UFieldNodeBase>,TObjectPtr<UFieldNodeBase>,int>
                    (pFVar2->Data,(TObjectPtr<UFieldNodeBase> *)pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar7 + 4;
      if (pFVar2 != pFVar3 + 4) {
        iVar4 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar7[5].Data + 4);
        pFVar6 = pFVar3[4].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[5].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<TObjectPtr<UFieldSystemMetaData>,TObjectPtr<UFieldSystemMetaData>,int>
                    (pFVar2->Data,(TObjectPtr<UFieldSystemMetaData> *)pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 6;
    } while (param_3 != 0);
  }
  return true;
}

