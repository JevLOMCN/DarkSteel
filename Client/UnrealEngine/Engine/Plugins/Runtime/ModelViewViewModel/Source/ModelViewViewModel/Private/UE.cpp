// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 205

// Construct<FMVVMViewModelContextInstance> @ 14a7357f0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewModelContextInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMVVMViewModelContextInstance> @ 14a735810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewModelContextInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMVVMViewModelContextInstance> @ 14a735840

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewModelContextInstance>(void *param_1)

{
  return;
}

// Copy<FMVVMViewModelContextInstance> @ 14a735850

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewModelContextInstance>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_CompiledEvent> @ 14a735c90

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_CompiledEvent>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FMVVMViewClass_CompiledEvent> @ 14a735cb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_CompiledEvent>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Construct<FMVVMViewClass_Condition> @ 14a735cd0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_Condition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMVVMViewClass_CompiledEvent> @ 14a735cf0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_CompiledEvent>(void *param_1)

{
  return;
}

// ConstructForTests<FMVVMViewClass_Condition> @ 14a735d00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Condition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMVVMViewClass_Condition> @ 14a735d20

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_Condition>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_CompiledEvent> @ 14a735d30

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_CompiledEvent>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMVVMViewClass_Condition> @ 14a735d70

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_Condition>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMCompiledBindingLibrary> @ 14a735eb0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMCompiledBindingLibrary>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FMVVMCompiledBindingLibrary> @ 14a735ee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMCompiledBindingLibrary>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FMVVMCompiledBindingLibrary> @ 14a735f10

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMCompiledBindingLibrary>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
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

// Copy<FMVVMCompiledBindingLibrary> @ 14a735fb0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMCompiledBindingLibrary>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FMVVMVCompiledFields *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar8 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar8 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar8->Data,pFVar6,(longlong)iVar4 << 3);
          }
        }
      }
      pFVar2 = pFVar8 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar8[3].Data + 4);
        pFVar6 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar6,(longlong)iVar4 * 0x14);
          }
        }
      }
      pFVar2 = pFVar8 + 4;
      if (pFVar2 != pFVar3 + 4) {
        iVar4 = *(int *)&pFVar3[5].Data;
        piVar1 = (int *)((longlong)&pFVar8[5].Data + 4);
        pFVar6 = pFVar3[4].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[5].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar6,(longlong)iVar4 << 2);
          }
        }
      }
      pFVar2 = pFVar8 + 6;
      if (pFVar2 != pFVar3 + 6) {
        iVar4 = *(int *)&pFVar3[7].Data;
        piVar1 = (int *)((longlong)&pFVar8[7].Data + 4);
        pFVar7 = (FMVVMVCompiledFields *)pFVar3[6].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[7].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FMVVMVCompiledFields,FMVVMVCompiledFields,int>(pFVar2->Data,pFVar7,iVar4);
        }
      }
      pFVar2 = pFVar8 + 8;
      if (pFVar2 != pFVar3 + 8) {
        iVar4 = *(int *)&pFVar3[9].Data;
        piVar1 = (int *)((longlong)&pFVar8[9].Data + 4);
        pFVar6 = pFVar3[8].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[9].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar6,(longlong)iVar4 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_CompiledBinding> @ 14a736210

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_CompiledBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)param_1 = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0xff;
  return;
}

// ConstructForTests<FMVVMViewClass_CompiledBinding> @ 14a736240

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_CompiledBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined2 *)param_1 = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0xff00;
  return;
}

// Destruct<FMVVMViewClass_CompiledBinding> @ 14a736270

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_CompiledBinding>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_CompiledBinding> @ 14a7362c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_CompiledBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMVCompiledBinding> @ 14a7366b0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMVCompiledBinding>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 10) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 8) = 0xffff;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FMVVMVCompiledBinding> @ 14a7366d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FMVVMVCompiledBinding> @ 14a7366f0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMVCompiledBinding>(void *param_1)

{
  return;
}

// Construct<FMVVMViewClass_Event> @ 14a736700

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_Event>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FMVVMVCompiledBinding> @ 14a736720

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMVCompiledBinding>(void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)param_1);
      uVar1 = *(undefined2 *)(lVar3 + 0xc + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar2;
      *(undefined2 *)((longlong)param_1 + 0xc) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xe);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FMVVMViewClass_Event> @ 14a736820

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Event>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMVVMViewClass_Event> @ 14a736840

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_Event>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_Event> @ 14a7368d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_Event>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_SourceCreator> @ 14a736910

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceCreator>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// ConstructForTests<FMVVMViewClass_SourceCreator> @ 14a736950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceCreator>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// Destruct<FMVVMViewClass_SourceCreator> @ 14a736980

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceCreator>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_SourceCreator> @ 14a736990

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceCreator>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      *(undefined8 *)((longlong)puVar2 + 0x24) = *(undefined8 *)((longlong)puVar1 + 0x24);
      *(undefined8 *)((longlong)puVar2 + 0x2c) = *(undefined8 *)((longlong)puVar1 + 0x2c);
      *(undefined1 *)((longlong)puVar2 + 0x34) = *(undefined1 *)((longlong)puVar1 + 0x34);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMCompiledLoadedPropertyOrFunctionIndex> @ 14a736ce0

void __cdecl
UE::CoreUObject::Private::Construct<FMVVMCompiledLoadedPropertyOrFunctionIndex>(void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) & 0xf8;
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FMVVMCompiledLoadedPropertyOrFunctionIndex> @ 14a736cf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMCompiledLoadedPropertyOrFunctionIndex>
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) & 0xf8;
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// Destruct<FMVVMCompiledLoadedPropertyOrFunctionIndex> @ 14a736d00

void __cdecl
UE::CoreUObject::Private::Destruct<FMVVMCompiledLoadedPropertyOrFunctionIndex>(void *param_1)

{
  return;
}

// Construct<FMVVMViewClass_Source> @ 14a736d60

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_Source>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x62) = 0;
  *(undefined2 *)((longlong)param_1 + 0x66) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Copy<FMVVMCompiledLoadedPropertyOrFunctionIndex> @ 14a736db0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMCompiledLoadedPropertyOrFunctionIndex>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FMVVMViewClass_Source> @ 14a736e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Source>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FMVVMViewClass_Source> @ 14a736e60

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_Source>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FMVVMViewClass_Source> @ 14a736ef0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_Source>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[1]);
      }
      puVar6[1] = puVar3[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[2]);
      }
      puVar6[2] = puVar3[2];
      pFVar1 = (ForAnyElementType *)(puVar6 + 6);
      puVar6[3] = puVar3[3];
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar3 + 4);
      *(undefined8 *)((longlong)puVar6 + 0x24) = *(undefined8 *)((longlong)puVar3 + 0x24);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 6)) {
        iVar4 = *(int *)(puVar3 + 7);
        piVar2 = (int *)((longlong)puVar6 + 0x3c);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 6))->Data;
        *(int *)(puVar6 + 7) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 * 0xc);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 8);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 8)) {
        iVar4 = *(int *)(puVar3 + 9);
        piVar2 = (int *)((longlong)puVar6 + 0x4c);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 8))->Data;
        *(int *)(puVar6 + 9) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 << 4);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 10);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 10)) {
        iVar4 = *(int *)(puVar3 + 0xb);
        piVar2 = (int *)((longlong)puVar6 + 0x5c);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 10))->Data;
        *(int *)(puVar6 + 0xb) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 * 0xc);
          }
        }
      }
      *(undefined2 *)(puVar6 + 0xc) = *(undefined2 *)(puVar3 + 0xc);
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 0xd;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewSource> @ 14a737130

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMVVMViewSource> @ 14a737150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMVVMViewSource> @ 14a737170

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewSource>(void *param_1)

{
  return;
}

// Copy<FMVVMViewSource> @ 14a7373c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewSource>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)((longlong)puVar1 + 0x14);
      *(undefined1 *)((longlong)puVar2 + 0x15) = *(undefined1 *)((longlong)puVar1 + 0x15);
      *(undefined1 *)((longlong)puVar2 + 0x16) = *(undefined1 *)((longlong)puVar1 + 0x16);
      *(undefined1 *)((longlong)puVar2 + 0x17) = *(undefined1 *)((longlong)puVar1 + 0x17);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMVCompiledFieldPath> @ 14a737700

void __cdecl UE::CoreUObject::Private::Construct<FMVVMVCompiledFieldPath>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMVCompiledFieldPath> @ 14a737710

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledFieldPath>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FMVVMVCompiledFieldPath> @ 14a737720

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMVCompiledFieldPath>(void *param_1)

{
  return;
}

// Construct<FMVVMViewClass_EvaluateSource> @ 14a737730

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_EvaluateSource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Copy<FMVVMVCompiledFieldPath> @ 14a737750

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMVCompiledFieldPath>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FMVVMViewClass_EvaluateSource> @ 14a737780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_EvaluateSource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMVVMViewClass_EvaluateSource> @ 14a7378a0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_EvaluateSource>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_EvaluateSource> @ 14a7379b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_EvaluateSource>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMVCompiledFieldId> @ 14a737aa0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMVCompiledFieldId>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FMVVMVCompiledFieldId> @ 14a737ab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledFieldId>(void *param_1)

{
  *(undefined2 *)param_1 = 0xffff;
  return;
}

// Destruct<FMVVMVCompiledFieldId> @ 14a737ac0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMVCompiledFieldId>(void *param_1)

{
  return;
}

// Copy<FMVVMVCompiledFieldId> @ 14a737b50

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMVCompiledFieldId>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMVCompiledFields> @ 14a7386e0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMVCompiledFields>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMVVMVCompiledFields> @ 14a7386f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMVCompiledFields>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FMVVMVCompiledFields> @ 14a738710

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMVCompiledFields>(void *param_1)

{
  return;
}

// Construct<FMVVMViewClass_Binding> @ 14a7387a0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_Binding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// Copy<FMVVMVCompiledFields> @ 14a7387c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMVCompiledFields>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((longlong)puVar2 + 10) = *(undefined2 *)((longlong)puVar1 + 10);
      *(undefined2 *)((longlong)puVar2 + 0xc) = *(undefined2 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FMVVMViewClass_Binding> @ 14a738860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_Binding>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMVVMViewClass_Binding> @ 14a738890

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_Binding>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_Binding> @ 14a7388e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_Binding>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_SourceCondition> @ 14a738e70

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceCondition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMVVMViewClass_SourceCondition> @ 14a738f90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceCondition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMVVMViewClass_SourceCondition> @ 14a738fb0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceCondition>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_SourceCondition> @ 14a738fc0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceCondition>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_SourceBinding> @ 14a7390d0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMViewClass_SourceBinding> @ 14a7390f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceBinding>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FMVVMViewClass_SourceBinding> @ 14a739110

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceBinding>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_SourceBinding> @ 14a739120

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMEventField> @ 14a739310

void __cdecl UE::CoreUObject::Private::Construct<FMVVMEventField>(void *param_1)

{
  return;
}

// ConstructForTests<FMVVMEventField> @ 14a739320

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMEventField>(void *param_1)

{
  return;
}

// Construct<FMVVMView_SourceKey> @ 14a739610

void __cdecl UE::CoreUObject::Private::Construct<FMVVMView_SourceKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMView_SourceKey> @ 14a739660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMView_SourceKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FMVVMView_SourceKey> @ 14a739670

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMView_SourceKey>(void *param_1)

{
  return;
}

// Construct<FMVVMView_Source> @ 14a739680

void __cdecl UE::CoreUObject::Private::Construct<FMVVMView_Source>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FMVVMView_Source> @ 14a7396a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMView_Source>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FMVVMView_Source> @ 14a7396d0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMView_Source>(void *param_1)

{
  return;
}

// Copy<FMVVMView_SourceKey> @ 14a739720

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMView_SourceKey>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMVVMView_Source> @ 14a739790

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMView_Source>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      *(undefined1 *)((longlong)puVar2 + 0x11) = *(undefined1 *)((longlong)puVar1 + 0x11);
      *(undefined1 *)((longlong)puVar2 + 0x12) = *(undefined1 *)((longlong)puVar1 + 0x12);
      *(undefined1 *)((longlong)puVar2 + 0x13) = *(undefined1 *)((longlong)puVar1 + 0x13);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_ConditionKey> @ 14a739ec0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_ConditionKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Construct<FMVVMBindingName> @ 14a739ed0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMBindingName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMVVMViewClass_ConditionKey> @ 14a739ee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_ConditionKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMBindingName> @ 14a739ef0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMBindingName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMVVMViewClass_ConditionKey> @ 14a739f00

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_ConditionKey>(void *param_1)

{
  return;
}

// Destruct<FMVVMBindingName> @ 14a739f10

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMBindingName>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_ConditionKey> @ 14a739f70

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_ConditionKey>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMVVMBindingName> @ 14a739fa0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMBindingName>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMVVMBindingName> @ 14a73a0c0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMVVMBindingName>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Construct<FMVVMViewClass_EventKey> @ 14a73a450

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_EventKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMViewClass_EventKey> @ 14a73a460

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_EventKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FMVVMViewClass_EventKey> @ 14a73a470

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_EventKey>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_EventKey> @ 14a73a480

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_EventKey>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMAvailableBinding> @ 14a73a6b0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMAvailableBinding>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMVVMAvailableBinding> @ 14a73a6d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMAvailableBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  return;
}

// Destruct<FMVVMAvailableBinding> @ 14a73a6f0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMAvailableBinding>(void *param_1)

{
  return;
}

// Copy<FMVVMAvailableBinding> @ 14a73a740

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMAvailableBinding>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_EvaluateBindingKey> @ 14a73a780

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_EvaluateBindingKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMViewClass_EvaluateBindingKey> @ 14a73a790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_EvaluateBindingKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FMVVMViewClass_EvaluateBindingKey> @ 14a73a7a0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_EvaluateBindingKey>(void *param_1)

{
  return;
}

// GetStructTypeHash<FMVVMAvailableBinding> @ 14a73a7b0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FMVVMAvailableBinding>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Copy<FMVVMViewClass_EvaluateBindingKey> @ 14a73a8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_EvaluateBindingKey>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewModelContext> @ 14a73a8d0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewModelContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMVVMViewModelContext> @ 14a73a8e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewModelContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMVVMViewModelContext> @ 14a73a8f0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewModelContext>(void *param_1)

{
  return;
}

// Copy<FMVVMViewModelContext> @ 14a73a940

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewModelContext>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_BindingKey> @ 14a73ab10

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_BindingKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMViewClass_BindingKey> @ 14a73ab20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_BindingKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FMVVMViewClass_BindingKey> @ 14a73ab30

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_BindingKey>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_BindingKey> @ 14a73ab40

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_BindingKey>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewModelCollection> @ 14a73ab70

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewModelCollection>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMVVMViewModelCollection> @ 14a73aba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewModelCollection>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMVVMViewModelCollection> @ 14a73abd0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewModelCollection>(void *param_1)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x10));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FMVVMViewModelCollection> @ 14a73ac20

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewModelCollection>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FMVVMViewModelContextInstance *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FMVVMViewModelContextInstance *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FMVVMViewModelContextInstance,FMVVMViewModelContextInstance,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      if ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pFVar2 + 2) !=
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pFVar6 + 2)) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pFVar6 + 2),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pFVar2 + 2));
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_SourceKey> @ 14a73af50

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_SourceKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FMVVMViewClass_SourceKey> @ 14a73af60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_SourceKey>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FMVVMViewClass_SourceKey> @ 14a73af70

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_SourceKey>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_SourceKey> @ 14a73af80

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_SourceKey>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMVVMViewClass_FieldId> @ 14a73b2b0

void __cdecl UE::CoreUObject::Private::Construct<FMVVMViewClass_FieldId>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMVVMViewClass_FieldId> @ 14a73b2d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMVVMViewClass_FieldId>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMVVMViewClass_FieldId> @ 14a73b2f0

void __cdecl UE::CoreUObject::Private::Destruct<FMVVMViewClass_FieldId>(void *param_1)

{
  return;
}

// Copy<FMVVMViewClass_FieldId> @ 14a73b300

bool __cdecl
UE::CoreUObject::Private::Copy<FMVVMViewClass_FieldId>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UUserWidget>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UUserWidget>_>,UUserWidget_*> @ 14a73c570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UUserWidget>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UUserWidget>_>,UUserWidget_*>
          (TObjectPtr<UUserWidget> *param_1)

{
  return (UUserWidget **)param_1;
}

// DereferenceIfNecessary<FModelViewViewModelModule,FModelViewViewModelModule_*_&> @ 14a73c5e0

FModelViewViewModelModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FModelViewViewModelModule,FModelViewViewModelModule_*_&>
          (FModelViewViewModelModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMVVMView,UMVVMView_*_&> @ 14a73c600

UMVVMView * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMVVMView,UMVVMView_*_&>(UMVVMView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMVVMViewListViewBaseClassExtension,UMVVMViewListViewBaseClassExtension_*_&> @ 14a73c620

UMVVMViewListViewBaseClassExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMVVMViewListViewBaseClassExtension,UMVVMViewListViewBaseClassExtension_*_&>
          (UMVVMViewListViewBaseClassExtension **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_> @ 14a73ebf0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_>
          (ushort param_1,ForElementType<FMVVMViewClass_BindingKey> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMVVMViewClass_BindingKey>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_ConditionKey>_> @ 14a73ecc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_ConditionKey>_>
          (ushort param_1,ForElementType<FMVVMViewClass_ConditionKey> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMVVMViewClass_ConditionKey>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>_> @ 14a73ed90

/* WARNING: Removing unreachable block (ram,0x00014a73edd7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>_>
          (ushort param_1,ForElementType<UMVVMView_const_*> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::MVVM::FMVVMConstFieldVariant>_> @ 14a73ee20

/* WARNING: Removing unreachable block (ram,0x00014a73ee67) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::MVVM::FMVVMConstFieldVariant>_>
          (ushort param_1,ForElementType<UE::MVVM::FMVVMConstFieldVariant> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::ForElementType<UE::MVVM::FMVVMConstFieldVariant>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_> @ 14a73eeb0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_>
          (uint param_1,uint param_2,ForElementType<FMVVMViewClass_BindingKey> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FMVVMViewClass_BindingKey>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>_> @ 14a73ef70

void __cdecl
UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UMVVMView_const_*> *param_4,
          int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// AddUserWidget @ 14a742530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::MVVM::Private::AddUserWidget(TSharedRef<FTokenizedMessage,1> *param_1,UUserWidget *param_2)

{
  FTokenizedMessage *this;
  FText *pFVar1;
  TSharedRef<FTextToken,1> *pTVar2;
  FName local_res10 [3];
  TSharedRef<IMessageToken,1> local_48;
  TSharedRef<FTokenizedMessage,1> local_38;
  TSharedRef<FTextToken,1> local_28;
  FText local_18;
  
  if (param_2 != (UUserWidget *)0x0) {
    local_res10[0] = (FName)param_2->_padding_;
    this = param_1->Object;
    pFVar1 = FText::FromName(&local_18,local_res10);
    pTVar2 = FTextToken::Create(&local_28,pFVar1,true);
    local_48.Object = (IMessageToken *)pTVar2->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this,&local_38,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ArePropertiesCompatible @ 14a742800

bool __cdecl UE::MVVM::BindingHelper::ArePropertiesCompatible(FProperty *param_1,FProperty *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1 == (FProperty *)0x0) {
    return false;
  }
  if (param_2 == (FProperty *)0x0) {
    return false;
  }
  cVar3 = (**(code **)(param_1->_padding_ + 0x1a0))();
  if (((cVar3 != '\0') || (bVar4 = Private::IsNumericConversionRequired(param_1,param_2), bVar4)) ||
     (bVar4 = Private::IsObjectPropertyCompatible(param_1,param_2), bVar4)) {
    return true;
  }
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0) {
    param_1 = (FProperty *)0x0;
  }
  if ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) == 0) {
    param_2 = (FProperty *)0x0;
  }
  if ((param_1 != (FProperty *)0x0) && (param_2 != (FProperty *)0x0)) {
    plVar6 = (longlong *)param_1[1]._padding_;
    lVar5 = param_2[1]._padding_;
    if ((plVar6 == (longlong *)0x0) || ((*(uint *)(plVar6[1] + 0x18) >> 0x1a & 1) == 0)) {
      plVar6 = (longlong *)0x0;
    }
    if ((lVar5 == 0) || ((*(uint *)(*(longlong *)(lVar5 + 8) + 0x18) >> 0x1a & 1) == 0)) {
      lVar5 = 0;
    }
    if ((((plVar6 != (longlong *)0x0) && (lVar5 != 0)) && (lVar1 = plVar6[0xe], lVar1 != 0)) &&
       (lVar2 = *(longlong *)(lVar5 + 0x70), lVar2 != 0)) {
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        if (plVar6[1] == *(longlong *)(lVar5 + 8)) {
          return true;
        }
        cVar3 = (**(code **)(*plVar6 + 0x220))(plVar6);
        if (cVar3 != '\0') {
          return true;
        }
        return false;
      }
    }
  }
  return false;
}

// ConvertNumeric @ 14a746000

void __cdecl
UE::MVVM::BindingHelper::Private::ConvertNumeric
          (FProperty *param_1,FProperty *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                       ,0x21b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Destination",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                       ,0x21c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                       ,0x21d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x18 & 1) == 0)) {
    param_1 = (FProperty *)0x0;
  }
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x18 & 1) == 0)) {
    param_2 = (FProperty *)0x0;
  }
  if ((param_1 != (FProperty *)0x0) && (param_2 != (FProperty *)0x0)) {
    cVar3 = (**(code **)(param_1->_padding_ + 0x1d0))(param_1);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(param_2->_padding_ + 0x1d0))(param_2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(param_1->_padding_ + 0x230))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014a74611f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2->_padding_ + 0x1f8))(param_2,param_3,uVar5);
        return;
      }
    }
    cVar3 = (**(code **)(param_1->_padding_ + 0x1d8))(param_1);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(param_2->_padding_ + 0x1d8))(param_2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(param_1->_padding_ + 0x210))(param_1,param_3);
        (**(code **)(param_2->_padding_ + 0x1e8))(param_2,param_3,uVar4);
      }
    }
  }
  return;
}

// EvaluateFieldPathObject @ 14a747bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

UObject * __cdecl
UE::MVVM::Private::EvaluateFieldPathObject
          (UObject *param_1,UFunction *param_2,FObjectPropertyBase *param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  undefined1 *_Dst;
  undefined1 *puVar9;
  undefined1 auStack_38 [31];
  undefined1 uStack_19;
  ulonglong local_18;
  undefined1 auStack_10 [8];
  
  puVar9 = auStack_38;
  local_18 = __security_cookie.value ^ (ulonglong)&local_18;
  uVar1 = param_2->ParmsSize;
  if (uVar1 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    sVar2 = *(short *)((longlong)&param_2->_padding_ + 4);
    if (sVar2 < 0x11) {
      uVar8 = (ulonglong)uVar1 + 0x1e;
      if (uVar8 <= (ulonglong)uVar1 + 0xf) {
        uVar8 = 0xffffffffffffff0;
      }
      puVar9 = auStack_38 + -(uVar8 & 0xfffffffffffffff0);
      _Dst = auStack_10 + -(uVar8 & 0xfffffffffffffff0);
    }
    else {
      uVar6 = (ulonglong)(int)((uVar1 - 1) + (int)sVar2);
      uVar8 = uVar6 + 0xf;
      if (uVar8 <= uVar6) {
        uVar8 = 0xffffffffffffff0;
      }
      puVar9 = auStack_38 + -(uVar8 & 0xfffffffffffffff0);
      _Dst = (undefined1 *)
             ((ulonglong)(&uStack_19 + (longlong)sVar2 + -(uVar8 & 0xfffffffffffffff0)) &
             (longlong)-(int)sVar2);
    }
  }
  if (((uint)param_3->_padding_ >> 9 & 1) == 0) {
    pcVar4 = *(code **)(param_3->_padding_ + 0x150);
    *(undefined8 *)(puVar9 + -8) = 0x14a747caf;
    (*pcVar4)(param_3,_Dst);
  }
  else {
    iVar3 = *(int *)((longlong)&param_3->_padding_ + 4);
    lVar5 = param_3->_padding_;
    *(undefined8 *)(puVar9 + -8) = 0x14a747c9e;
    memset(_Dst,0,(longlong)iVar3 * (longlong)(int)lVar5);
  }
  pcVar4 = *(code **)(*(longlong *)param_1 + 0x260);
  *(undefined8 *)(puVar9 + -8) = 0x14a747cc1;
  (*pcVar4)(param_1,param_2,_Dst);
  pcVar4 = *(code **)(param_3->_padding_ + 0x208);
  *(undefined8 *)(puVar9 + -8) = 0x14a747cd3;
  pUVar7 = (UObject *)(*pcVar4)(param_3,_Dst,0);
  if ((param_3->_padding_ & 0x1000000000U) == 0) {
    pcVar4 = *(code **)(param_3->_padding_ + 0x138);
    *(undefined8 *)(puVar9 + -8) = 0x14a747cf9;
    (*pcVar4)(param_3,_Dst);
  }
  *(undefined8 *)(puVar9 + -8) = 0x14a747d08;
  return pUVar7;
}

// EvaluateObjectProperty @ 14a747d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014a747d83) */
/* WARNING: Removing unreachable block (ram,0x00014a747da8) */

TValueOrError<UObject_*,void> * __cdecl
UE::MVVM::FieldPathHelper::EvaluateObjectProperty
          (TValueOrError<UObject_*,void> *__return_storage_ptr__,FFieldContext *param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FProperty *pFVar9;
  TValueOrError<UObject_*,void> *pTVar10;
  void *pvVar11;
  UObject *pUVar12;
  UFunction *pUVar13;
  UClass *pUVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 auStack_48 [31];
  undefined1 auStack_29 [9];
  ulonglong local_20;
  
  puVar17 = auStack_48;
  local_20 = __security_cookie.value ^ (ulonglong)(auStack_29 + 1);
  bVar8 = TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_1);
  if (!bVar8) {
    cVar1 = param_1->field_0x20;
    if (cVar1 == '\x02') {
      pFVar9 = *(FProperty **)&param_1->field_0x18;
    }
    else {
      if ((cVar1 != '\x01') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type == EVariantType::Function",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                             ,0x58,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TValueOrError<UObject_*,void> *)(*pcVar7)();
        return pTVar10;
      }
      pFVar9 = BindingHelper::GetReturnProperty(*(UFunction **)&param_1->field_0x18);
    }
    if (pFVar9 == (FProperty *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetterType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMFieldPathHelper.cpp"
                         ,0x1cf,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TValueOrError<UObject_*,void> *)(*pcVar7)();
        return pTVar10;
      }
    }
    else if ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x1a & 1) != 0) {
      if (cVar1 == '\x02') {
        pcVar7 = *(code **)(pFVar9->_padding_ + 0x208);
        pvVar11 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_1);
        pUVar12 = (UObject *)(*pcVar7)(pFVar9,pvVar11,0);
        (__return_storage_ptr__->Value).TypedValue = pUVar12;
        (__return_storage_ptr__->Value).bIsSet = true;
        goto LAB_14a74805c;
      }
      bVar8 = TObjectVariant<0>::IsUObject((TObjectVariant<0> *)param_1);
      if ((!bVar8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSource.GetObjectVariant().IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMFieldPathHelper.cpp"
                             ,0x1dd,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TValueOrError<UObject_*,void> *)(*pcVar7)();
        return pTVar10;
      }
      pUVar12 = TObjectVariant<0>::GetUObject((TObjectVariant<0> *)param_1);
      if ((pUVar12 == (UObject *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSource.GetObjectVariant().GetUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMFieldPathHelper.cpp"
                             ,0x1de,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TValueOrError<UObject_*,void> *)(*pcVar7)();
        return pTVar10;
      }
      pUVar13 = TMVVMFieldVariant<0>::GetFunction((TMVVMFieldVariant<0> *)&param_1->field_0x18);
      lVar6 = pUVar13->_padding_;
      if (lVar6 != 0) {
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        iVar4 = (int)pUVar14->_padding_;
        if ((iVar4 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar14->_padding_)) {
          pUVar12 = TObjectVariant<0>::GetUObject((TObjectVariant<0> *)param_1);
          if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            uVar2 = pUVar13->ParmsSize;
            if (uVar2 == 0) {
              pvVar11 = (void *)0x0;
              puVar17 = auStack_48;
            }
            else {
              sVar3 = *(short *)((longlong)&pUVar13->_padding_ + 4);
              if (sVar3 < 0x11) {
                uVar16 = (ulonglong)uVar2 + 0x1e;
                if (uVar16 <= (ulonglong)uVar2 + 0xf) {
                  uVar16 = 0xffffffffffffff0;
                }
                puVar17 = auStack_48 + -(uVar16 & 0xfffffffffffffff0);
                pvVar11 = (void *)((longlong)&local_20 + -(uVar16 & 0xfffffffffffffff0));
              }
              else {
                uVar15 = (ulonglong)(int)((uVar2 - 1) + (int)sVar3);
                uVar16 = uVar15 + 0xf;
                if (uVar16 <= uVar15) {
                  uVar16 = 0xffffffffffffff0;
                }
                puVar17 = auStack_48 + -(uVar16 & 0xfffffffffffffff0);
                pvVar11 = (void *)((ulonglong)
                                   (auStack_29 + (longlong)sVar3 + -(uVar16 & 0xfffffffffffffff0)) &
                                  (longlong)(int)~((int)sVar3 - 1U));
              }
            }
            if (((uint)(int)pFVar9->PropertyFlags >> 9 & 1) == 0) {
              pcVar7 = *(code **)(pFVar9->_padding_ + 0x150);
              *(undefined8 *)(puVar17 + -8) = 0x14a747ff2;
              (*pcVar7)(pFVar9,pvVar11);
            }
            else {
              iVar4 = pFVar9->ElementSize;
              iVar5 = pFVar9->ArrayDim;
              *(undefined8 *)(puVar17 + -8) = 0x14a747fe1;
              memset(pvVar11,0,(longlong)iVar4 * (longlong)iVar5);
            }
            *(undefined8 *)(puVar17 + -8) = 0x14a747ffa;
            pUVar12 = TObjectVariant<0>::GetUObject((TObjectVariant<0> *)param_1);
            pcVar7 = *(code **)(*(longlong *)pUVar12 + 0x260);
            *(undefined8 *)(puVar17 + -8) = 0x14a748010;
            (*pcVar7)(pUVar12,pUVar13,pvVar11);
            pcVar7 = *(code **)(pFVar9->_padding_ + 0x208);
            *(undefined8 *)(puVar17 + -8) = 0x14a748022;
            pUVar12 = (UObject *)(*pcVar7)(pFVar9,pvVar11,0);
            if ((~(byte)(pFVar9->PropertyFlags >> 0x24) & 1) != 0) {
              pcVar7 = *(code **)(pFVar9->_padding_ + 0x138);
              *(undefined8 *)(puVar17 + -8) = 0x14a748047;
              (*pcVar7)(pFVar9,pvVar11);
            }
            (__return_storage_ptr__->Value).TypedValue = pUVar12;
            (__return_storage_ptr__->Value).bIsSet = true;
            goto LAB_14a74805c;
          }
          goto LAB_14a748058;
        }
      }
      TObjectVariant<0>::GetUObject((TObjectVariant<0> *)param_1);
    }
  }
LAB_14a748058:
  (__return_storage_ptr__->Value).bIsSet = false;
  puVar17 = auStack_48;
LAB_14a74805c:
  *(undefined8 *)(puVar17 + -8) = 0x14a74806b;
  return __return_storage_ptr__;
}

// ExecuteBinding_NoCheck @ 14a749110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UE::MVVM::BindingHelper::ExecuteBinding_NoCheck(FFieldContext *param_1,FFieldContext *param_2)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  FProperty *this;
  FProperty *this_00;
  ulonglong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  FProperty *_Dst;
  undefined1 *puVar13;
  FProperty *pFVar14;
  FProperty *pFVar15;
  undefined4 uVar16;
  undefined1 auStack_68 [31];
  char acStack_49 [9];
  code *local_40;
  ulonglong local_38;
  
  puVar13 = auStack_68;
  local_38 = __security_cookie.value ^ (ulonglong)(acStack_49 + 1);
  bVar4 = TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_1);
  if (((bVar4) || (bVar4 = TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_2), bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Source.GetObjectVariant().IsNull() && !Destination.GetObjectVariant().IsNull()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2c2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((param_1->field_0x20 == '\0') || (*(longlong *)&param_1->field_0x18 == 0)) ||
      ((param_2->field_0x20 == '\0' || (*(longlong *)&param_2->field_0x18 == 0)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Source.GetFieldVariant().IsEmpty() && !Destination.GetFieldVariant().IsEmpty()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2c3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  acStack_49[1] = param_1->field_0x20;
  if (acStack_49[1] == '\x02') {
    this = *(FProperty **)&param_1->field_0x18;
  }
  else {
    if ((acStack_49[1] != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == EVariantType::Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                           ,0x58,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = Private::GetRuntimeReturnProperty(*(UFunction **)&param_1->field_0x18);
  }
  if ((this == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetterType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2c7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  acStack_49[2] = param_2->field_0x20;
  if (acStack_49[2] == '\x02') {
    this_00 = *(FProperty **)&param_2->field_0x18;
  }
  else {
    if ((acStack_49[2] != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == EVariantType::Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                           ,0x58,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = GetFirstArgumentProperty(*(UFunction **)&param_2->field_0x18);
  }
  if ((this_00 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetterType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2cb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = ArePropertiesCompatible(this,this_00);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArePropertiesCompatible(GetterType, SetterType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2cd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = this->ArrayDim * this->ElementSize;
  iVar12 = this_00->ElementSize * this_00->ArrayDim;
  if (iVar12 < iVar6) {
    iVar12 = iVar6;
  }
  iVar6 = (**(code **)(this_00->_padding_ + 0x168))(this_00);
  iVar7 = (**(code **)(this->_padding_ + 0x168))(this);
  if (iVar6 < iVar7) {
    iVar6 = iVar7;
  }
  pFVar15 = (FProperty *)0x0;
  _Dst = pFVar15;
  if (iVar12 != 0) {
    if (iVar6 < 0x11) {
      uVar8 = (longlong)(iVar12 + 0xf) + 0xf;
      if (uVar8 <= (ulonglong)(longlong)(iVar12 + 0xf)) {
        uVar8 = 0xffffffffffffff0;
      }
      puVar13 = auStack_68 + -(uVar8 & 0xfffffffffffffff0);
      _Dst = (FProperty *)((longlong)&stack0xffffffffffffffc0 + -(uVar8 & 0xfffffffffffffff0));
    }
    else {
      uVar11 = (ulonglong)(iVar12 + -1 + iVar6);
      uVar8 = uVar11 + 0xf;
      if (uVar8 <= uVar11) {
        uVar8 = 0xffffffffffffff0;
      }
      puVar13 = auStack_68 + -(uVar8 & 0xfffffffffffffff0);
      _Dst = (FProperty *)
             ((ulonglong)(acStack_49 + (longlong)iVar6 + -(uVar8 & 0xfffffffffffffff0)) &
             (longlong)-iVar6);
    }
  }
  if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
    pcVar3 = *(code **)(this->_padding_ + 0x150);
    *(undefined8 *)(puVar13 + -8) = 0x14a7493ca;
    (*pcVar3)(this,_Dst);
  }
  else {
    iVar12 = this->ArrayDim;
    iVar6 = this->ElementSize;
    *(undefined8 *)(puVar13 + -8) = 0x14a7493b9;
    memset(_Dst,0,(longlong)iVar12 * (longlong)iVar6);
  }
  if (acStack_49[1] == '\x02') {
    *(undefined8 *)(puVar13 + -8) = 0x14a7493df;
    pvVar9 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_1);
    *(undefined8 *)(puVar13 + -8) = 0x14a7493ed;
    FProperty::GetValue_InContainer(this,pvVar9,_Dst);
  }
  else {
    iVar12 = this->ArrayDim;
    iVar6 = this->ElementSize;
    if (param_1->field_0x20 != '\x01') {
      *(undefined8 *)(puVar13 + -8) = 0x14a749421;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EVariantType::Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                         ,0x58,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar12 * iVar6 != (uint)*(ushort *)(*(longlong *)&param_1->field_0x18 + 0xb6)) {
      *(undefined8 *)(puVar13 + -8) = 0x14a749457;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetterType->GetSize() == Source.GetFieldVariant().GetFunction()->ParmsSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2da,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar1 = param_1->field_0x10;
    if (2 < (ulonglong)bVar1) {
      *(undefined8 *)(puVar13 + -8) = 0x14a749488;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      *(undefined8 *)(puVar13 + -8) = 0x14a7494bb;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source.GetObjectVariant().IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2db,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_1->field_0x10 != '\x02') {
      *(undefined8 *)(puVar13 + -8) = 0x14a7494e7;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)param_1;
    local_40 = *(code **)(*plVar2 + 0x260);
    if (param_1->field_0x20 != '\x01') {
      *(undefined8 *)(puVar13 + -8) = 0x14a749524;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EVariantType::Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                         ,0x58,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pcVar3 = local_40;
    uVar10 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)(puVar13 + -8) = 0x14a749537;
    (*pcVar3)(plVar2,uVar10,_Dst);
  }
  if (_Dst == (FProperty *)0x0) {
    *(undefined8 *)(puVar13 + -8) = 0x14a749563;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                       ,0x21d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar14 = pFVar15;
  if ((*(uint *)(this->_padding_ + 0x18) >> 0x18 & 1) != 0) {
    pFVar14 = this;
  }
  if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x18 & 1) != 0) {
    pFVar15 = this_00;
  }
  if ((pFVar14 != (FProperty *)0x0) && (pFVar15 != (FProperty *)0x0)) {
    pcVar3 = *(code **)(pFVar14->_padding_ + 0x1d0);
    *(undefined8 *)(puVar13 + -8) = 0x14a7495aa;
    cVar5 = (*pcVar3)(pFVar14);
    if (cVar5 != '\0') {
      pcVar3 = *(code **)(pFVar15->_padding_ + 0x1d0);
      *(undefined8 *)(puVar13 + -8) = 0x14a7495bb;
      cVar5 = (*pcVar3)(pFVar15);
      if (cVar5 != '\0') {
        pcVar3 = *(code **)(pFVar14->_padding_ + 0x230);
        *(undefined8 *)(puVar13 + -8) = 0x14a7495ce;
        uVar16 = (*pcVar3)(pFVar14,_Dst);
        pcVar3 = *(code **)(pFVar15->_padding_ + 0x1f8);
        *(undefined8 *)(puVar13 + -8) = 0x14a7495e1;
        (*pcVar3)(pFVar15,_Dst,uVar16);
        goto LAB_14a74962a;
      }
    }
    pcVar3 = *(code **)(pFVar14->_padding_ + 0x1d8);
    *(undefined8 *)(puVar13 + -8) = 0x14a7495ef;
    cVar5 = (*pcVar3)(pFVar14);
    if (cVar5 != '\0') {
      pcVar3 = *(code **)(pFVar15->_padding_ + 0x1d8);
      *(undefined8 *)(puVar13 + -8) = 0x14a749600;
      cVar5 = (*pcVar3)(pFVar15);
      if (cVar5 != '\0') {
        pcVar3 = *(code **)(pFVar14->_padding_ + 0x210);
        *(undefined8 *)(puVar13 + -8) = 0x14a749613;
        uVar10 = (*pcVar3)(pFVar14,_Dst);
        pcVar3 = *(code **)(pFVar15->_padding_ + 0x1e8);
        *(undefined8 *)(puVar13 + -8) = 0x14a74962a;
        (*pcVar3)(pFVar15,_Dst,uVar10);
      }
    }
  }
LAB_14a74962a:
  if (acStack_49[2] == '\x02') {
    *(undefined8 *)(puVar13 + -8) = 0x14a749638;
    pvVar9 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_2);
    *(undefined8 *)(puVar13 + -8) = 0x14a749646;
    FProperty::SetValue_InContainer(this_00,pvVar9,_Dst);
  }
  else {
    iVar12 = this_00->ElementSize;
    iVar6 = this_00->ArrayDim;
    if (param_2->field_0x20 != '\x01') {
      *(undefined8 *)(puVar13 + -8) = 0x14a74967b;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EVariantType::Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                         ,0x58,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar12 * iVar6 != (uint)*(ushort *)(*(longlong *)&param_2->field_0x18 + 0xb6)) {
      *(undefined8 *)(puVar13 + -8) = 0x14a7496b0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SetterType->GetSize() == Destination.GetFieldVariant().GetFunction()->ParmsSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2e7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar1 = param_2->field_0x10;
    if (2 < (ulonglong)bVar1) {
      *(undefined8 *)(puVar13 + -8) = 0x14a7496e1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      *(undefined8 *)(puVar13 + -8) = 0x14a74970e;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Destination.GetObjectVariant().IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2e8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_2->field_0x10 != '\x02') {
      *(undefined8 *)(puVar13 + -8) = 0x14a74973b;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    plVar2 = *(longlong **)param_2;
    pcVar3 = *(code **)(*plVar2 + 0x260);
    if (param_2->field_0x20 != '\x01') {
      *(undefined8 *)(puVar13 + -8) = 0x14a749775;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EVariantType::Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                         ,0x58,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar10 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)(puVar13 + -8) = 0x14a749788;
    (*pcVar3)(plVar2,uVar10,_Dst);
  }
  if ((this->PropertyFlags & CPF_NoDestructor) == CPF_None) {
    pcVar3 = *(code **)(this->_padding_ + 0x138);
    *(undefined8 *)(puVar13 + -8) = 0x14a7497a7;
    (*pcVar3)(this,_Dst);
  }
  *(undefined8 *)(puVar13 + -8) = 0x14a7497b3;
  return;
}

// ExecuteBinding_NoCheck @ 14a7497e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UE::MVVM::BindingHelper::ExecuteBinding_NoCheck
          (FFieldContext *param_1,FFieldContext *param_2,FFunctionContext *param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  UStruct *pUVar4;
  EPropertyFlags EVar5;
  longlong *plVar6;
  UFunction *pUVar7;
  code *pcVar8;
  FField *pFVar9;
  FFunctionContext *pFVar10;
  FFieldContext *this;
  bool bVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  FProperty *pFVar16;
  void *pvVar17;
  FProperty *pFVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  int iVar24;
  void *pvVar25;
  FProperty *pFVar26;
  FProperty *pFVar27;
  FProperty *pFVar28;
  undefined4 uVar29;
  undefined1 auStack_d8 [47];
  undefined1 uStack_a9;
  TFieldIterator<FProperty> local_a8;
  TFieldIterator<FProperty> local_90;
  FFunctionContext *local_78;
  FProperty *local_70;
  TFieldIterator<FProperty> local_68;
  TFieldIterator<FProperty> local_50;
  FFieldContext *local_38;
  ulonglong local_30;
  
  puVar23 = auStack_d8;
  local_30 = __security_cookie.value ^ (ulonglong)&local_a8;
  local_78 = param_3;
  local_38 = param_2;
  bVar11 = TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_1);
  if (((bVar11) || (bVar11 = TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_2), bVar11)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Source.GetObjectVariant().IsNull() && !Destination.GetObjectVariant().IsNull()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x338,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((param_1->field_0x20 == '\0') || (*(longlong *)&param_1->field_0x18 == 0)) ||
      ((param_2->field_0x20 == '\0' || (*(longlong *)&param_2->field_0x18 == 0)))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Source.GetFieldVariant().IsEmpty() && !Destination.GetFieldVariant().IsEmpty()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x339,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((*(longlong *)&param_3->field_0x8 == 0) || (*(longlong *)param_3 == 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConversionFunction.GetFunction() && ConversionFunction.GetObject()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x33a,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_a8.Struct = *(UStruct **)&param_3->field_0x8;
  uVar21 = 0;
  uVar2 = *(ushort *)((longlong)&local_a8.Struct[1]._padding_ + 6);
  if (uVar2 != 0) {
    sVar3 = (local_a8.Struct)->MinAlignment;
    if (sVar3 < 0x11) {
      uVar21 = (ulonglong)uVar2 + 0x1e;
      if (uVar21 <= (ulonglong)uVar2 + 0xf) {
        uVar21 = 0xffffffffffffff0;
      }
      puVar23 = auStack_d8 + -(uVar21 & 0xfffffffffffffff0);
      uVar21 = (longlong)&local_a8 + -(uVar21 & 0xfffffffffffffff0) + 8;
    }
    else {
      uVar19 = (ulonglong)(int)((uint)uVar2 + sVar3 + -1);
      uVar21 = uVar19 + 0xf;
      if (uVar21 <= uVar19) {
        uVar21 = 0xffffffffffffff0;
      }
      puVar23 = auStack_d8 + -(uVar21 & 0xfffffffffffffff0);
      uVar21 = (ulonglong)(&uStack_a9 + (longlong)sVar3 + -(uVar21 & 0xfffffffffffffff0)) &
               (longlong)(int)~((int)sVar3 - 1U);
    }
  }
  if (local_a8.Struct == (UStruct *)0x0) {
    local_a8.Field = (FField *)0x0;
  }
  else {
    local_a8.Field = (local_a8.Struct)->ChildProperties;
  }
  local_a8.InterfaceIndex = -1;
  local_a8.bIncludeSuper = true;
  local_a8.bIncludeDeprecated = true;
  local_a8.bIncludeInterface = false;
  *(undefined8 *)(puVar23 + -8) = 0x14a74999f;
  TFieldIterator<FProperty>::IterateToNext(&local_a8);
  pFVar9 = local_a8.Field;
  while ((local_a8.Field = pFVar9, pFVar9 != (FField *)0x0 &&
         (param_3 = local_78, (char)pFVar9[1].ClassPrivate < '\0'))) {
    if (((ulonglong)pFVar9[1].ClassPrivate >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar9->_padding_ + 0x150);
      iVar24 = (int)pFVar9[1]._padding_;
      if (iVar24 < 1) {
        *(int *)(puVar23 + 0x28) = iVar24;
        *(undefined4 *)(puVar23 + 0x20) = 0;
        *(undefined8 *)(puVar23 + -8) = 0x14a749a89;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (uVar21 == 0) {
        *(undefined8 *)(puVar23 + -8) = 0x14a749ab8;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(undefined8 *)(puVar23 + -8) = 0x14a749ace;
      (*pcVar8)(pFVar9);
    }
    else {
      iVar24 = (int)pFVar9[1]._padding_;
      iVar14 = *(int *)((longlong)&pFVar9[1]._padding_ + 4);
      if (iVar24 < 1) {
        *(int *)(puVar23 + 0x28) = iVar24;
        *(undefined4 *)(puVar23 + 0x20) = 0;
        *(undefined8 *)(puVar23 + -8) = 0x14a749a03;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (uVar21 == 0) {
        *(undefined8 *)(puVar23 + -8) = 0x14a749a32;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar15 = *(int *)((longlong)&pFVar9[1].Owner.Container + 4);
      *(undefined8 *)(puVar23 + -8) = 0x14a749a4d;
      memset((void *)((longlong)iVar15 + uVar21),0,(longlong)iVar14 * (longlong)iVar24);
    }
    local_a8.Field = pFVar9->Next;
    *(undefined8 *)(puVar23 + -8) = 0x14a749adf;
    TFieldIterator<FProperty>::IterateToNext(&local_a8);
    param_3 = local_78;
    pFVar9 = local_a8.Field;
  }
  pUVar4 = *(UStruct **)&param_3->field_0x8;
  if (pUVar4 == (UStruct *)0x0) {
    *(undefined8 *)(puVar23 + -8) = 0x14a749b19;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InFunction",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x279,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (pUVar4 == (UStruct *)0x0) {
    local_68.Field = (FField *)0x0;
  }
  else {
    local_68.Field = pUVar4->ChildProperties;
  }
  local_68.InterfaceIndex = -1;
  local_68.bIncludeSuper = true;
  local_68.bIncludeDeprecated = true;
  local_68.bIncludeInterface = false;
  local_68.Struct = pUVar4;
  *(undefined8 *)(puVar23 + -8) = 0x14a749b50;
  TFieldIterator<FProperty>::IterateToNext(&local_68);
  pFVar18 = (FProperty *)local_68.Field;
  while (local_68.Field = (FField *)pFVar18, pFVar18 != (FProperty *)0x0) {
    EVar5 = pFVar18->PropertyFlags;
    if (-1 < (char)EVar5) break;
    if ((((char)EVar5 < '\0') &&
        ((EVar5 & (CPF_EditorOnly|CPF_Deprecated|CPF_ReturnParm)) == CPF_None)) &&
       (((EVar5 >> 8 & 1) == 0 || ((EVar5 & (CPF_ReferenceParm|CPF_ConstParm)) != CPF_None)))) {
      local_70 = pFVar18;
      if (pFVar18 == (FProperty *)0x0) goto LAB_14a749bcc;
      goto LAB_14a749bf2;
    }
    local_68.Field = (FField *)pFVar18->_padding_;
    *(undefined8 *)(puVar23 + -8) = 0x14a749b9f;
    TFieldIterator<FProperty>::IterateToNext(&local_68);
    pFVar18 = (FProperty *)local_68.Field;
  }
  local_70 = (FProperty *)0x0;
LAB_14a749bcc:
  pFVar18 = local_70;
  *(undefined8 *)(puVar23 + -8) = 0x14a749bec;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("ArgumentConversionProperty",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                      ,0x345,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14a749bf2:
  cVar12 = param_1->field_0x20;
  if (cVar12 == '\x02') {
    pFVar16 = *(FProperty **)&param_1->field_0x18;
  }
  else {
    if (cVar12 != '\x01') {
      *(undefined8 *)(puVar23 + -8) = 0x14a749c29;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pUVar7 = *(UFunction **)&param_1->field_0x18;
    *(undefined8 *)(puVar23 + -8) = 0x14a749c38;
    pFVar16 = Private::GetRuntimeReturnProperty(pUVar7);
  }
  if (pFVar16 == (FProperty *)0x0) {
    *(undefined8 *)(puVar23 + -8) = 0x14a749c60;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetterType",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x349,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(undefined8 *)(puVar23 + -8) = 0x14a749c71;
  bVar11 = ArePropertiesCompatible(pFVar16,pFVar18);
  if (!bVar11) {
    *(undefined8 *)(puVar23 + -8) = 0x14a749c95;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArePropertiesCompatible(GetterType, ArgumentConversionProperty)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x34a,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(undefined8 *)(puVar23 + -8) = 0x14a749ca6;
  bVar11 = Private::IsNumericConversionRequired(pFVar16,pFVar18);
  if (bVar11) {
    iVar14 = pFVar16->ArrayDim * pFVar16->ElementSize;
    iVar24 = pFVar18->ElementSize * pFVar18->ArrayDim;
    if (iVar24 < iVar14) {
      iVar24 = iVar14;
    }
    pcVar8 = *(code **)(pFVar18->_padding_ + 0x168);
    *(undefined8 *)(puVar23 + -8) = 0x14a749ccf;
    iVar14 = (*pcVar8)(pFVar18);
    pcVar8 = *(code **)(pFVar16->_padding_ + 0x168);
    *(undefined8 *)(puVar23 + -8) = 0x14a749ce1;
    iVar15 = (*pcVar8)(pFVar16);
    if (iVar14 < iVar15) {
      iVar14 = iVar15;
    }
    if (iVar24 == 0) {
      pvVar25 = (void *)0x0;
    }
    else if (iVar14 < 0x11) {
      uVar19 = (longlong)(iVar24 + 0xf) + 0xf;
      if (uVar19 <= (ulonglong)(longlong)(iVar24 + 0xf)) {
        uVar19 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar23 + -8) = 0x14a749d18;
      pvVar25 = (void *)((ulonglong)(puVar23 + -(uVar19 & 0xfffffffffffffff0) + 0x3f) &
                        0xfffffffffffffff0);
      puVar23 = puVar23 + -(uVar19 & 0xfffffffffffffff0);
    }
    else {
      uVar22 = (ulonglong)(iVar24 + -1 + iVar14);
      uVar19 = uVar22 + 0xf;
      if (uVar19 <= uVar22) {
        uVar19 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar23 + -8) = 0x14a749d4f;
      pvVar25 = (void *)((ulonglong)
                         (puVar23 + (longlong)iVar14 + -(uVar19 & 0xfffffffffffffff0) + 0x2f) &
                        (longlong)(int)~(iVar14 - 1U));
      puVar23 = puVar23 + -(uVar19 & 0xfffffffffffffff0);
    }
    if (((uint)(int)pFVar16->PropertyFlags >> 9 & 1) == 0) {
      pcVar8 = *(code **)(pFVar16->_padding_ + 0x150);
      *(undefined8 *)(puVar23 + -8) = 0x14a749d9c;
      (*pcVar8)(pFVar16,pvVar25);
    }
    else {
      iVar24 = pFVar16->ArrayDim;
      iVar14 = pFVar16->ElementSize;
      *(undefined8 *)(puVar23 + -8) = 0x14a749d8b;
      memset(pvVar25,0,(longlong)iVar24 * (longlong)iVar14);
    }
    if (cVar12 == '\x02') {
      *(undefined8 *)(puVar23 + -8) = 0x14a749daa;
      pvVar17 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_1);
      *(undefined8 *)(puVar23 + -8) = 0x14a749db8;
      FProperty::GetValue_InContainer(pFVar16,pvVar17,pvVar25);
    }
    else {
      iVar24 = pFVar16->ArrayDim;
      iVar14 = pFVar16->ElementSize;
      if (param_1->field_0x20 != '\x01') {
        *(undefined8 *)(puVar23 + -8) = 0x14a749ded;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iVar24 * iVar14 != (uint)*(ushort *)(*(longlong *)&param_1->field_0x18 + 0xb6)) {
        *(undefined8 *)(puVar23 + -8) = 0x14a749e23;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetterType->GetSize() == Source.GetFieldVariant().GetFunction()->ParmsSize"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x35a,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      bVar1 = param_1->field_0x10;
      if (2 < (ulonglong)bVar1) {
        *(undefined8 *)(puVar23 + -8) = 0x14a749e54;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x14a749e88;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Source.GetObjectVariant().IsUObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x35b,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (param_1->field_0x10 != '\x02') {
        *(undefined8 *)(puVar23 + -8) = 0x14a749eb5;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      plVar6 = *(longlong **)param_1;
      pcVar8 = *(code **)(*plVar6 + 0x260);
      if (param_1->field_0x20 != '\x01') {
        *(undefined8 *)(puVar23 + -8) = 0x14a749ef0;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar20 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)(puVar23 + -8) = 0x14a749f03;
      (*pcVar8)(plVar6,uVar20,pvVar25);
    }
    if (pvVar25 == (void *)0x0) {
      *(undefined8 *)(puVar23 + -8) = 0x14a749f28;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x21d,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar28 = local_70;
    pFVar26 = (FProperty *)0x0;
    if ((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x18 & 1) != 0) {
      pFVar26 = pFVar16;
    }
    pFVar27 = (FProperty *)0x0;
    if ((*(uint *)(local_70->_padding_ + 0x18) >> 0x18 & 1) != 0) {
      pFVar27 = local_70;
    }
    if ((pFVar26 != (FProperty *)0x0) && (pFVar27 != (FProperty *)0x0)) {
      pcVar8 = *(code **)(pFVar26->_padding_ + 0x1d0);
      *(undefined8 *)(puVar23 + -8) = 0x14a749f81;
      cVar12 = (*pcVar8)(pFVar26);
      if (cVar12 != '\0') {
        pcVar8 = *(code **)(pFVar27->_padding_ + 0x1d0);
        *(undefined8 *)(puVar23 + -8) = 0x14a749f91;
        cVar12 = (*pcVar8)(pFVar27);
        if (cVar12 != '\0') {
          pcVar8 = *(code **)(pFVar26->_padding_ + 0x230);
          *(undefined8 *)(puVar23 + -8) = 0x14a749fa5;
          uVar29 = (*pcVar8)(pFVar26,pvVar25);
          pcVar8 = *(code **)(pFVar27->_padding_ + 0x1f8);
          *(undefined8 *)(puVar23 + -8) = 0x14a749fb7;
          (*pcVar8)(pFVar27,pvVar25,uVar29);
          goto LAB_14a74a000;
        }
      }
      pcVar8 = *(code **)(pFVar26->_padding_ + 0x1d8);
      *(undefined8 *)(puVar23 + -8) = 0x14a749fc6;
      cVar12 = (*pcVar8)(pFVar26);
      if (cVar12 != '\0') {
        pcVar8 = *(code **)(pFVar27->_padding_ + 0x1d8);
        *(undefined8 *)(puVar23 + -8) = 0x14a749fd6;
        cVar12 = (*pcVar8)(pFVar27);
        if (cVar12 != '\0') {
          pcVar8 = *(code **)(pFVar26->_padding_ + 0x210);
          *(undefined8 *)(puVar23 + -8) = 0x14a749fea;
          uVar20 = (*pcVar8)(pFVar26,pvVar25);
          pcVar8 = *(code **)(pFVar27->_padding_ + 0x1e8);
          *(undefined8 *)(puVar23 + -8) = 0x14a74a000;
          (*pcVar8)(pFVar27,pvVar25,uVar20);
        }
      }
    }
LAB_14a74a000:
    if (pFVar18->ArrayDim < 1) {
      *(int *)(puVar23 + 0x28) = pFVar18->ArrayDim;
      *(undefined4 *)(puVar23 + 0x20) = 0;
      *(undefined8 *)(puVar23 + -8) = 0x14a74a033;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (uVar21 == 0) {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a05e;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pvVar17 = (void *)((longlong)pFVar28->Offset_Internal + uVar21);
    if (pvVar17 != pvVar25) {
      if (((uint)(int)pFVar28->PropertyFlags >> 0x1e & 1) == 0) {
        iVar24 = pFVar18->ArrayDim;
        pcVar8 = *(code **)(pFVar28->_padding_ + 0xf0);
        *(undefined8 *)(puVar23 + -8) = 0x14a74a0a8;
        (*pcVar8)(pFVar28,pvVar17,pvVar25,iVar24);
      }
      else {
        iVar24 = pFVar18->ArrayDim;
        iVar14 = pFVar28->ElementSize;
        *(undefined8 *)(puVar23 + -8) = 0x14a74a08f;
        memcpy(pvVar17,pvVar25,(longlong)iVar24 * (longlong)iVar14);
      }
    }
    if ((~(byte)(pFVar16->PropertyFlags >> 0x24) & 1) != 0) {
      pcVar8 = *(code **)(pFVar16->_padding_ + 0x138);
      *(undefined8 *)(puVar23 + -8) = 0x14a74a0c9;
      (*pcVar8)(pFVar16,pvVar25);
    }
  }
  else {
    if (pFVar18->ArrayDim < 1) {
      *(int *)(puVar23 + 0x28) = pFVar18->ArrayDim;
      *(undefined4 *)(puVar23 + 0x20) = 0;
      *(undefined8 *)(puVar23 + -8) = 0x14a74a101;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (uVar21 == 0) {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a12c;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pvVar25 = (void *)((longlong)pFVar18->Offset_Internal + uVar21);
    if (cVar12 == '\x02') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a147;
      pvVar17 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_1);
      *(undefined8 *)(puVar23 + -8) = 0x14a74a155;
      FProperty::GetValue_InContainer(pFVar16,pvVar17,pvVar25);
    }
    else {
      if (param_1->field_0x20 != '\x01') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a181;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (pFVar16->ElementSize * pFVar16->ArrayDim !=
          (uint)*(ushort *)(*(longlong *)&param_1->field_0x18 + 0xb6)) {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a1bd;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetterType->GetSize() == Source.GetFieldVariant().GetFunction()->ParmsSize"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x36f,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      bVar1 = param_1->field_0x10;
      if (2 < (ulonglong)bVar1) {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a1ee;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a221;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Source.GetObjectVariant().IsUObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x370,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (param_1->field_0x10 != '\x02') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a24e;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      plVar6 = *(longlong **)param_1;
      pcVar8 = *(code **)(*plVar6 + 0x260);
      if (param_1->field_0x20 != '\x01') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a288;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar20 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)(puVar23 + -8) = 0x14a74a29a;
      (*pcVar8)(plVar6,uVar20,pvVar25);
    }
  }
  pFVar10 = local_78;
  plVar6 = *(longlong **)local_78;
  uVar20 = *(undefined8 *)&local_78->field_0x8;
  pcVar8 = *(code **)(*plVar6 + 0x260);
  *(undefined8 *)(puVar23 + -8) = 0x14a74a2b1;
  (*pcVar8)(plVar6,uVar20,uVar21);
  pUVar7 = *(UFunction **)&pFVar10->field_0x8;
  *(undefined8 *)(puVar23 + -8) = 0x14a74a2ba;
  pFVar18 = Private::GetRuntimeReturnProperty(pUVar7);
  if (pFVar18 == (FProperty *)0x0) {
    *(undefined8 *)(puVar23 + -8) = 0x14a74a2e2;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ReturnConversionProperty",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x37a,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this = local_38;
  cVar12 = local_38->field_0x20;
  if (cVar12 == '\x02') {
    pFVar16 = *(FProperty **)&local_38->field_0x18;
  }
  else {
    if (cVar12 != '\x01') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a326;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pUVar4 = *(UStruct **)&this->field_0x18;
    if (pUVar4 == (UStruct *)0x0) {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a355;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFunction",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x279,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (pUVar4 == (UStruct *)0x0) {
      local_50.Field = (FField *)0x0;
    }
    else {
      local_50.Field = pUVar4->ChildProperties;
    }
    local_50.InterfaceIndex = -1;
    local_50.bIncludeSuper = true;
    local_50.bIncludeDeprecated = true;
    local_50.bIncludeInterface = false;
    local_50.Struct = pUVar4;
    *(undefined8 *)(puVar23 + -8) = 0x14a74a390;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    while ((FProperty *)local_50.Field != (FProperty *)0x0) {
      EVar5 = ((FProperty *)local_50.Field)->PropertyFlags;
      if (-1 < (char)EVar5) break;
      if ((((char)EVar5 < '\0') &&
          ((EVar5 & (CPF_EditorOnly|CPF_Deprecated|CPF_ReturnParm)) == CPF_None)) &&
         ((pFVar16 = (FProperty *)local_50.Field, (EVar5 >> 8 & 1) == 0 ||
          ((EVar5 & (CPF_ReferenceParm|CPF_ConstParm)) != CPF_None)))) goto LAB_14a74a3ea;
      local_50.Field = (FField *)((FProperty *)local_50.Field)->_padding_;
      *(undefined8 *)(puVar23 + -8) = 0x14a74a3df;
      TFieldIterator<FProperty>::IterateToNext(&local_50);
    }
    pFVar16 = (FProperty *)0x0;
  }
LAB_14a74a3ea:
  if (pFVar16 == (FProperty *)0x0) {
    *(undefined8 *)(puVar23 + -8) = 0x14a74a40f;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SetterType",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x37e,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(undefined8 *)(puVar23 + -8) = 0x14a74a420;
  bVar11 = ArePropertiesCompatible(pFVar18,pFVar16);
  if (!bVar11) {
    *(undefined8 *)(puVar23 + -8) = 0x14a74a444;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArePropertiesCompatible(ReturnConversionProperty, SetterType)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x37f,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(undefined8 *)(puVar23 + -8) = 0x14a74a455;
  bVar11 = Private::IsNumericConversionRequired(pFVar18,pFVar16);
  if (!bVar11) {
    if (pFVar18->ArrayDim < 1) {
      *(int *)(puVar23 + 0x28) = pFVar18->ArrayDim;
      *(undefined4 *)(puVar23 + 0x20) = 0;
      *(undefined8 *)(puVar23 + -8) = 0x14a74a8a2;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (uVar21 == 0) {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a8cd;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pvVar25 = (void *)((longlong)pFVar18->Offset_Internal + uVar21);
    if (cVar12 == '\x02') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a8e8;
      pvVar17 = TObjectVariant<0>::GetData((TObjectVariant<0> *)this);
      *(undefined8 *)(puVar23 + -8) = 0x14a74a8f6;
      FProperty::SetValue_InContainer(pFVar16,pvVar17,pvVar25);
    }
    else {
      if (this->field_0x20 != '\x01') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a922;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (pFVar16->ElementSize * pFVar16->ArrayDim !=
          (uint)*(ushort *)(*(longlong *)&this->field_0x18 + 0xb6)) {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a95e;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("SetterType->GetSize() == Destination.GetFieldVariant().GetFunction()->ParmsSize"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x3a3,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      bVar1 = this->field_0x10;
      if (2 < (ulonglong)bVar1) {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a98f;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a9c2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Destination.GetObjectVariant().IsUObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x3a4,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (this->field_0x10 != '\x02') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74a9ef;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      plVar6 = *(longlong **)this;
      pcVar8 = *(code **)(*plVar6 + 0x260);
      if (this->field_0x20 != '\x01') {
        *(undefined8 *)(puVar23 + -8) = 0x14a74aa2a;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar20 = *(undefined8 *)&this->field_0x18;
      *(undefined8 *)(puVar23 + -8) = 0x14a74aa3c;
      (*pcVar8)(plVar6,uVar20,pvVar25);
    }
    goto LAB_14a74aa3c;
  }
  iVar14 = pFVar16->ArrayDim * pFVar16->ElementSize;
  iVar24 = pFVar18->ElementSize * pFVar18->ArrayDim;
  if (iVar24 < iVar14) {
    iVar24 = iVar14;
  }
  pcVar8 = *(code **)(pFVar18->_padding_ + 0x168);
  *(undefined8 *)(puVar23 + -8) = 0x14a74a47c;
  iVar14 = (*pcVar8)(pFVar18);
  pcVar8 = *(code **)(pFVar16->_padding_ + 0x168);
  *(undefined8 *)(puVar23 + -8) = 0x14a74a48e;
  iVar15 = (*pcVar8)(pFVar16);
  if (iVar14 < iVar15) {
    iVar14 = iVar15;
  }
  if (iVar24 == 0) {
    pvVar25 = (void *)0x0;
  }
  else if (iVar14 < 0x11) {
    uVar19 = (longlong)(iVar24 + 0xf) + 0xf;
    if (uVar19 <= (ulonglong)(longlong)(iVar24 + 0xf)) {
      uVar19 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar23 + -8) = 0x14a74a4c5;
    pvVar25 = (void *)((ulonglong)(puVar23 + -(uVar19 & 0xfffffffffffffff0) + 0x3f) &
                      0xfffffffffffffff0);
    puVar23 = puVar23 + -(uVar19 & 0xfffffffffffffff0);
  }
  else {
    uVar22 = (ulonglong)(iVar24 + -1 + iVar14);
    uVar19 = uVar22 + 0xf;
    if (uVar19 <= uVar22) {
      uVar19 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar23 + -8) = 0x14a74a4fc;
    pvVar25 = (void *)((ulonglong)
                       (puVar23 + (longlong)iVar14 + -(uVar19 & 0xfffffffffffffff0) + 0x2f) &
                      (longlong)(int)~(iVar14 - 1U));
    puVar23 = puVar23 + -(uVar19 & 0xfffffffffffffff0);
  }
  if (((uint)(int)pFVar16->PropertyFlags >> 9 & 1) == 0) {
    pcVar8 = *(code **)(pFVar16->_padding_ + 0x150);
    *(undefined8 *)(puVar23 + -8) = 0x14a74a549;
    (*pcVar8)(pFVar16,pvVar25);
  }
  else {
    iVar24 = pFVar16->ArrayDim;
    iVar14 = pFVar16->ElementSize;
    *(undefined8 *)(puVar23 + -8) = 0x14a74a538;
    memset(pvVar25,0,(longlong)iVar24 * (longlong)iVar14);
  }
  if (pFVar18->ArrayDim < 1) {
    *(int *)(puVar23 + 0x28) = pFVar18->ArrayDim;
    *(undefined4 *)(puVar23 + 0x20) = 0;
    *(undefined8 *)(puVar23 + -8) = 0x14a74a57c;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                        ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (uVar21 == 0) {
    *(undefined8 *)(puVar23 + -8) = 0x14a74a5a7;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ContainerPtr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                        ,0x2de,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pvVar17 = (void *)((longlong)pFVar18->Offset_Internal + uVar21);
  if (pvVar25 != pvVar17) {
    if (((uint)(int)pFVar18->PropertyFlags >> 0x1e & 1) == 0) {
      iVar24 = pFVar18->ArrayDim;
      pcVar8 = *(code **)(pFVar18->_padding_ + 0xf0);
      *(undefined8 *)(puVar23 + -8) = 0x14a74a5f2;
      (*pcVar8)(pFVar18,pvVar25,pvVar17,iVar24);
    }
    else {
      iVar24 = pFVar18->ElementSize;
      iVar14 = pFVar18->ArrayDim;
      *(undefined8 *)(puVar23 + -8) = 0x14a74a5da;
      memcpy(pvVar25,pvVar17,(longlong)iVar24 * (longlong)iVar14);
    }
  }
  if (pvVar25 == (void *)0x0) {
    *(undefined8 *)(puVar23 + -8) = 0x14a74a617;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Data",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x21d,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar28 = (FProperty *)0x0;
  if ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x18 & 1) != 0) {
    pFVar28 = pFVar18;
  }
  pFVar18 = (FProperty *)0x0;
  if ((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x18 & 1) != 0) {
    pFVar18 = pFVar16;
  }
  if ((pFVar28 != (FProperty *)0x0) && (pFVar18 != (FProperty *)0x0)) {
    pcVar8 = *(code **)(pFVar28->_padding_ + 0x1d0);
    *(undefined8 *)(puVar23 + -8) = 0x14a74a66a;
    cVar13 = (*pcVar8)(pFVar28);
    if (cVar13 != '\0') {
      pcVar8 = *(code **)(pFVar18->_padding_ + 0x1d0);
      *(undefined8 *)(puVar23 + -8) = 0x14a74a67a;
      cVar13 = (*pcVar8)(pFVar18);
      if (cVar13 != '\0') {
        pcVar8 = *(code **)(pFVar28->_padding_ + 0x230);
        *(undefined8 *)(puVar23 + -8) = 0x14a74a68d;
        uVar29 = (*pcVar8)(pFVar28,pvVar25);
        pcVar8 = *(code **)(pFVar18->_padding_ + 0x1f8);
        *(undefined8 *)(puVar23 + -8) = 0x14a74a69f;
        (*pcVar8)(pFVar18,pvVar25,uVar29);
        goto LAB_14a74a6e6;
      }
    }
    pcVar8 = *(code **)(pFVar28->_padding_ + 0x1d8);
    *(undefined8 *)(puVar23 + -8) = 0x14a74a6ad;
    cVar13 = (*pcVar8)(pFVar28);
    if (cVar13 != '\0') {
      pcVar8 = *(code **)(pFVar18->_padding_ + 0x1d8);
      *(undefined8 *)(puVar23 + -8) = 0x14a74a6bd;
      cVar13 = (*pcVar8)(pFVar18);
      if (cVar13 != '\0') {
        pcVar8 = *(code **)(pFVar28->_padding_ + 0x210);
        *(undefined8 *)(puVar23 + -8) = 0x14a74a6d0;
        uVar20 = (*pcVar8)(pFVar28,pvVar25);
        pcVar8 = *(code **)(pFVar18->_padding_ + 0x1e8);
        *(undefined8 *)(puVar23 + -8) = 0x14a74a6e6;
        (*pcVar8)(pFVar18,pvVar25,uVar20);
      }
    }
  }
LAB_14a74a6e6:
  if (cVar12 == '\x02') {
    *(undefined8 *)(puVar23 + -8) = 0x14a74a6f4;
    pvVar17 = TObjectVariant<0>::GetData((TObjectVariant<0> *)this);
    *(undefined8 *)(puVar23 + -8) = 0x14a74a702;
    FProperty::SetValue_InContainer(pFVar16,pvVar17,pvVar25);
  }
  else {
    iVar24 = pFVar16->ArrayDim;
    iVar14 = pFVar16->ElementSize;
    if (this->field_0x20 != '\x01') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a735;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iVar24 * iVar14 != (uint)*(ushort *)(*(longlong *)&this->field_0x18 + 0xb6)) {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a76a;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SetterType->GetSize() == Destination.GetFieldVariant().GetFunction()->ParmsSize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x392,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    bVar1 = this->field_0x10;
    if (2 < (ulonglong)bVar1) {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a79b;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a7ce;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Destination.GetObjectVariant().IsUObject()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x393,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (this->field_0x10 != '\x02') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a7fb;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    plVar6 = *(longlong **)this;
    pcVar8 = *(code **)(*plVar6 + 0x260);
    if (this->field_0x20 != '\x01') {
      *(undefined8 *)(puVar23 + -8) = 0x14a74a836;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar20 = *(undefined8 *)&this->field_0x18;
    *(undefined8 *)(puVar23 + -8) = 0x14a74a849;
    (*pcVar8)(plVar6,uVar20,pvVar25);
  }
  if ((~(byte)(pFVar16->PropertyFlags >> 0x24) & 1) != 0) {
    pcVar8 = *(code **)(pFVar16->_padding_ + 0x138);
    *(undefined8 *)(puVar23 + -8) = 0x14a74a86a;
    (*pcVar8)(pFVar16,pvVar25);
  }
LAB_14a74aa3c:
  local_90.Struct = *(UStruct **)&local_78->field_0x8;
  if (local_90.Struct == (UStruct *)0x0) {
    local_90.Field = (FField *)0x0;
  }
  else {
    local_90.Field = (local_90.Struct)->ChildProperties;
  }
  local_90.InterfaceIndex = -1;
  local_90.bIncludeSuper = true;
  local_90.bIncludeDeprecated = true;
  local_90.bIncludeInterface = false;
  *(undefined8 *)(puVar23 + -8) = 0x14a74aa78;
  TFieldIterator<FProperty>::IterateToNext(&local_90);
  pFVar9 = local_90.Field;
  while ((pFVar9 != (FField *)0x0 && ((char)pFVar9[1].ClassPrivate < '\0'))) {
    if ((~(byte)((ulonglong)pFVar9[1].ClassPrivate >> 0x24) & 1) != 0) {
      pcVar8 = *(code **)(pFVar9->_padding_ + 0x138);
      iVar24 = (int)pFVar9[1]._padding_;
      local_90.Field = pFVar9;
      if (iVar24 < 1) {
        *(int *)(puVar23 + 0x28) = iVar24;
        *(undefined4 *)(puVar23 + 0x20) = 0;
        *(undefined8 *)(puVar23 + -8) = 0x14a74aae7;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (uVar21 == 0) {
        *(undefined8 *)(puVar23 + -8) = 0x14a74ab16;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar24 = *(int *)((longlong)&pFVar9[1].Owner.Container + 4);
      *(undefined8 *)(puVar23 + -8) = 0x14a74ab2c;
      (*pcVar8)(pFVar9,(longlong)iVar24 + uVar21);
    }
    local_90.Field = pFVar9->Next;
    *(undefined8 *)(puVar23 + -8) = 0x14a74ab3d;
    TFieldIterator<FProperty>::IterateToNext(&local_90);
    pFVar9 = local_90.Field;
  }
  *(undefined8 *)(puVar23 + -8) = 0x14a74ab56;
  return;
}

// ExecuteBinding_NoCheck @ 14a74ab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UE::MVVM::BindingHelper::ExecuteBinding_NoCheck(FFieldContext *param_1,FFunctionContext *param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  longlong *plVar5;
  UFunction *pUVar6;
  UStruct *pUVar7;
  EPropertyFlags EVar8;
  code *pcVar9;
  longlong lVar10;
  FField *pFVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  FProperty *pFVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  void *pvVar19;
  ulonglong uVar20;
  FProperty *this;
  undefined1 *puVar21;
  FProperty *pFVar22;
  int iVar23;
  void *pvVar24;
  FProperty *pFVar25;
  undefined4 uVar26;
  undefined1 auStack_b8 [47];
  undefined1 uStack_89;
  TFieldIterator<FProperty> local_88;
  TFieldIterator<FProperty> local_70;
  TFieldIterator<FProperty> local_58;
  FFunctionContext *local_40;
  ulonglong local_38;
  
  puVar21 = auStack_b8;
  local_38 = __security_cookie.value ^ (ulonglong)&local_88;
  local_40 = param_2;
  bVar12 = TObjectVariant<0>::IsNull((TObjectVariant<0> *)param_1);
  if ((bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Destination.GetObjectVariant().IsNull()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x2f2,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((param_1->field_0x20 == '\0') || (*(longlong *)&param_1->field_0x18 == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Destination.GetFieldVariant().IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x2f3,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((*(longlong *)&param_2->field_0x8 == 0) || (*(longlong *)param_2 == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConversionFunction.GetFunction() && ConversionFunction.GetObject()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x2f4,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_88.Struct = *(UStruct **)&param_2->field_0x8;
  pFVar25 = (FProperty *)0x0;
  uVar3 = *(ushort *)((longlong)&local_88.Struct[1]._padding_ + 6);
  pFVar22 = pFVar25;
  if (uVar3 != 0) {
    sVar4 = (local_88.Struct)->MinAlignment;
    if (sVar4 < 0x11) {
      uVar17 = (ulonglong)uVar3 + 0x1e;
      if (uVar17 <= (ulonglong)uVar3 + 0xf) {
        uVar17 = 0xffffffffffffff0;
      }
      puVar21 = auStack_b8 + -(uVar17 & 0xfffffffffffffff0);
      pFVar22 = (FProperty *)((longlong)&local_88 + -(uVar17 & 0xfffffffffffffff0) + 8);
    }
    else {
      uVar20 = (ulonglong)(int)((uint)uVar3 + sVar4 + -1);
      uVar17 = uVar20 + 0xf;
      if (uVar17 <= uVar20) {
        uVar17 = 0xffffffffffffff0;
      }
      puVar21 = auStack_b8 + -(uVar17 & 0xfffffffffffffff0);
      pFVar22 = (FProperty *)
                ((ulonglong)(&uStack_89 + (longlong)sVar4 + -(uVar17 & 0xfffffffffffffff0)) &
                (longlong)(int)~((int)sVar4 - 1U));
    }
  }
  if (local_88.Struct == (UStruct *)0x0) {
    local_88.Field = (FField *)0x0;
  }
  else {
    local_88.Field = (local_88.Struct)->ChildProperties;
  }
  local_88.InterfaceIndex = -1;
  local_88.bIncludeSuper = true;
  local_88.bIncludeDeprecated = true;
  local_88.bIncludeInterface = false;
  *(undefined8 *)(puVar21 + -8) = 0x14a74ad31;
  TFieldIterator<FProperty>::IterateToNext(&local_88);
  pFVar11 = local_88.Field;
  while ((local_88.Field = pFVar11, pFVar11 != (FField *)0x0 &&
         (param_2 = local_40, (char)pFVar11[1].ClassPrivate < '\0'))) {
    if (((ulonglong)pFVar11[1].ClassPrivate >> 9 & 1) == 0) {
      pcVar9 = *(code **)(pFVar11->_padding_ + 0x150);
      iVar23 = (int)pFVar11[1]._padding_;
      if (iVar23 < 1) {
        *(int *)(puVar21 + 0x28) = iVar23;
        *(undefined4 *)(puVar21 + 0x20) = 0;
        *(undefined8 *)(puVar21 + -8) = 0x14a74ae1c;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (pFVar22 == (FProperty *)0x0) {
        *(undefined8 *)(puVar21 + -8) = 0x14a74ae4b;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(undefined8 *)(puVar21 + -8) = 0x14a74ae62;
      (*pcVar9)(pFVar11);
    }
    else {
      iVar23 = (int)pFVar11[1]._padding_;
      iVar14 = *(int *)((longlong)&pFVar11[1]._padding_ + 4);
      if (iVar23 < 1) {
        *(int *)(puVar21 + 0x28) = iVar23;
        *(undefined4 *)(puVar21 + 0x20) = 0;
        *(undefined8 *)(puVar21 + -8) = 0x14a74ad93;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (pFVar22 == (FProperty *)0x0) {
        *(undefined8 *)(puVar21 + -8) = 0x14a74adc2;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar15 = *(int *)((longlong)&pFVar11[1].Owner.Container + 4);
      *(undefined8 *)(puVar21 + -8) = 0x14a74addd;
      memset((void *)((longlong)&pFVar22->_padding_ + (longlong)iVar15),0,
             (longlong)iVar14 * (longlong)iVar23);
    }
    local_88.Field = pFVar11->Next;
    *(undefined8 *)(puVar21 + -8) = 0x14a74ae73;
    TFieldIterator<FProperty>::IterateToNext(&local_88);
    param_2 = local_40;
    pFVar11 = local_88.Field;
  }
  plVar5 = *(longlong **)param_2;
  uVar18 = *(undefined8 *)&param_2->field_0x8;
  pcVar9 = *(code **)(*plVar5 + 0x260);
  *(undefined8 *)(puVar21 + -8) = 0x14a74ae97;
  (*pcVar9)(plVar5,uVar18,pFVar22);
  pUVar6 = *(UFunction **)&param_2->field_0x8;
  *(undefined8 *)(puVar21 + -8) = 0x14a74aea0;
  pFVar16 = Private::GetRuntimeReturnProperty(pUVar6);
  if (pFVar16 == (FProperty *)0x0) goto LAB_14a74b43b;
  cVar1 = param_1->field_0x20;
  if (cVar1 == '\x02') {
    this = *(FProperty **)&param_1->field_0x18;
  }
  else {
    if (cVar1 != '\x01') {
      *(undefined8 *)(puVar21 + -8) = 0x14a74aee8;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pUVar7 = *(UStruct **)&param_1->field_0x18;
    if (pUVar7 == (UStruct *)0x0) {
      *(undefined8 *)(puVar21 + -8) = 0x14a74af18;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFunction",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x279,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (pUVar7 == (UStruct *)0x0) {
      local_58.Field = (FField *)0x0;
    }
    else {
      local_58.Field = pUVar7->ChildProperties;
    }
    local_58.InterfaceIndex = -1;
    local_58.bIncludeSuper = true;
    local_58.bIncludeDeprecated = true;
    local_58.bIncludeInterface = false;
    local_58.Struct = pUVar7;
    *(undefined8 *)(puVar21 + -8) = 0x14a74af4f;
    TFieldIterator<FProperty>::IterateToNext(&local_58);
    while (this = pFVar25, (FProperty *)local_58.Field != (FProperty *)0x0) {
      EVar8 = ((FProperty *)local_58.Field)->PropertyFlags;
      if ((-1 < (char)EVar8) ||
         ((((char)EVar8 < '\0' &&
           ((EVar8 & (CPF_EditorOnly|CPF_Deprecated|CPF_ReturnParm)) == CPF_None)) &&
          ((this = (FProperty *)local_58.Field, (EVar8 >> 8 & 1) == 0 ||
           ((EVar8 & (CPF_ReferenceParm|CPF_ConstParm)) != CPF_None)))))) break;
      local_58.Field = (FField *)((FProperty *)local_58.Field)->_padding_;
      *(undefined8 *)(puVar21 + -8) = 0x14a74af9e;
      TFieldIterator<FProperty>::IterateToNext(&local_58);
    }
  }
  if (this == (FProperty *)0x0) {
    *(undefined8 *)(puVar21 + -8) = 0x14a74afcf;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("SetterType",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x303,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  *(undefined8 *)(puVar21 + -8) = 0x14a74afe0;
  bVar12 = ArePropertiesCompatible(pFVar16,this);
  if (!bVar12) {
    *(undefined8 *)(puVar21 + -8) = 0x14a74b004;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArePropertiesCompatible(ReturnConversionProperty, SetterType)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x304,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  *(undefined8 *)(puVar21 + -8) = 0x14a74b015;
  bVar12 = Private::IsNumericConversionRequired(pFVar16,this);
  if (!bVar12) {
    if (pFVar16->ArrayDim < 1) {
      *(int *)(puVar21 + 0x28) = pFVar16->ArrayDim;
      *(undefined4 *)(puVar21 + 0x20) = 0;
      *(undefined8 *)(puVar21 + -8) = 0x14a74b48e;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (pFVar22 == (FProperty *)0x0) {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b4b9;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pvVar24 = (void *)((longlong)&pFVar22->_padding_ + (longlong)pFVar16->Offset_Internal);
    if (cVar1 == '\x02') {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b4d4;
      pvVar19 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_1);
      *(undefined8 *)(puVar21 + -8) = 0x14a74b4e2;
      FProperty::SetValue_InContainer(this,pvVar19,pvVar24);
    }
    else {
      iVar23 = this->ElementSize;
      iVar14 = this->ArrayDim;
      if (param_1->field_0x20 != '\x01') {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b516;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iVar23 * iVar14 != (uint)*(ushort *)(*(longlong *)&param_1->field_0x18 + 0xb6)) {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b54c;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SetterType->GetSize() == Destination.GetFieldVariant().GetFunction()->ParmsSize"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x328,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      bVar2 = param_1->field_0x10;
      if (2 < (ulonglong)bVar2) {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b57e;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar2) == '\0') {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b5b1;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Destination.GetObjectVariant().IsUObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                            ,0x329,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (param_1->field_0x10 != '\x02') {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b5df;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      plVar5 = *(longlong **)param_1;
      pcVar9 = *(code **)(*plVar5 + 0x260);
      if (param_1->field_0x20 != '\x01') {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b61b;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EVariantType::Function",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                            ,0x58,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar18 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)(puVar21 + -8) = 0x14a74b62e;
      (*pcVar9)(plVar5,uVar18,pvVar24);
    }
    goto LAB_14a74b43b;
  }
  iVar14 = this->ArrayDim * this->ElementSize;
  iVar23 = pFVar16->ArrayDim * pFVar16->ElementSize;
  if (iVar23 < iVar14) {
    iVar23 = iVar14;
  }
  pcVar9 = *(code **)(pFVar16->_padding_ + 0x168);
  *(undefined8 *)(puVar21 + -8) = 0x14a74b03e;
  iVar14 = (*pcVar9)(pFVar16);
  pcVar9 = *(code **)(this->_padding_ + 0x168);
  *(undefined8 *)(puVar21 + -8) = 0x14a74b050;
  iVar15 = (*pcVar9)(this);
  if (iVar14 < iVar15) {
    iVar14 = iVar15;
  }
  if (iVar23 == 0) {
    pvVar24 = (void *)0x0;
  }
  else {
    if (iVar14 < 0x11) {
      uVar17 = (longlong)(iVar23 + 0xf) + 0xf;
      if (uVar17 <= (ulonglong)(longlong)(iVar23 + 0xf)) {
        uVar17 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar21 + -8) = 0x14a74b08e;
      lVar10 = -(uVar17 & 0xfffffffffffffff0);
      pvVar24 = (void *)((ulonglong)(puVar21 + lVar10 + 0x3f) & 0xfffffffffffffff0);
    }
    else {
      uVar20 = (ulonglong)(iVar23 + -1 + iVar14);
      uVar17 = uVar20 + 0xf;
      if (uVar17 <= uVar20) {
        uVar17 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar21 + -8) = 0x14a74b0c5;
      lVar10 = -(uVar17 & 0xfffffffffffffff0);
      pvVar24 = (void *)((ulonglong)(puVar21 + (longlong)iVar14 + lVar10 + 0x2f) &
                        (longlong)(int)~(iVar14 - 1U));
    }
    puVar21 = puVar21 + lVar10;
  }
  if (((uint)(int)this->PropertyFlags >> 9 & 1) == 0) {
    pcVar9 = *(code **)(this->_padding_ + 0x150);
    *(undefined8 *)(puVar21 + -8) = 0x14a74b115;
    (*pcVar9)(this,pvVar24);
  }
  else {
    iVar23 = this->ElementSize;
    iVar14 = this->ArrayDim;
    *(undefined8 *)(puVar21 + -8) = 0x14a74b104;
    memset(pvVar24,0,(longlong)iVar23 * (longlong)iVar14);
  }
  if (pFVar16->ArrayDim < 1) {
    *(int *)(puVar21 + 0x28) = pFVar16->ArrayDim;
    *(undefined4 *)(puVar21 + 0x20) = 0;
    *(undefined8 *)(puVar21 + -8) = 0x14a74b146;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                        ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (pFVar22 == (FProperty *)0x0) {
    *(undefined8 *)(puVar21 + -8) = 0x14a74b171;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("ContainerPtr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                        ,0x2de,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pvVar19 = (void *)((longlong)&pFVar22->_padding_ + (longlong)pFVar16->Offset_Internal);
  if (pvVar24 != pvVar19) {
    if (((uint)(int)pFVar16->PropertyFlags >> 0x1e & 1) == 0) {
      iVar23 = pFVar16->ArrayDim;
      pcVar9 = *(code **)(pFVar16->_padding_ + 0xf0);
      *(undefined8 *)(puVar21 + -8) = 0x14a74b1bd;
      (*pcVar9)(pFVar16,pvVar24,pvVar19,iVar23);
    }
    else {
      iVar23 = pFVar16->ElementSize;
      iVar14 = pFVar16->ArrayDim;
      *(undefined8 *)(puVar21 + -8) = 0x14a74b1a5;
      memcpy(pvVar24,pvVar19,(longlong)iVar23 * (longlong)iVar14);
    }
  }
  if (pvVar24 == (void *)0x0) {
    *(undefined8 *)(puVar21 + -8) = 0x14a74b1e2;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Data",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                        ,0x21d,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar25 = (FProperty *)0x0;
  if ((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x18 & 1) != 0) {
    pFVar25 = pFVar16;
  }
  pFVar16 = this;
  if ((*(uint *)(this->_padding_ + 0x18) >> 0x18 & 1) == 0) {
    pFVar16 = (FProperty *)0x0;
  }
  if ((pFVar25 != (FProperty *)0x0) && (pFVar16 != (FProperty *)0x0)) {
    pcVar9 = *(code **)(pFVar25->_padding_ + 0x1d0);
    *(undefined8 *)(puVar21 + -8) = 0x14a74b232;
    cVar13 = (*pcVar9)(pFVar25);
    if (cVar13 != '\0') {
      pcVar9 = *(code **)(pFVar16->_padding_ + 0x1d0);
      *(undefined8 *)(puVar21 + -8) = 0x14a74b242;
      cVar13 = (*pcVar9)(pFVar16);
      if (cVar13 != '\0') {
        pcVar9 = *(code **)(pFVar25->_padding_ + 0x230);
        *(undefined8 *)(puVar21 + -8) = 0x14a74b255;
        uVar26 = (*pcVar9)(pFVar25,pvVar24);
        pcVar9 = *(code **)(pFVar16->_padding_ + 0x1f8);
        *(undefined8 *)(puVar21 + -8) = 0x14a74b267;
        (*pcVar9)(pFVar16,pvVar24,uVar26);
        goto LAB_14a74b2ae;
      }
    }
    pcVar9 = *(code **)(pFVar25->_padding_ + 0x1d8);
    *(undefined8 *)(puVar21 + -8) = 0x14a74b275;
    cVar13 = (*pcVar9)(pFVar25);
    if (cVar13 != '\0') {
      pcVar9 = *(code **)(pFVar16->_padding_ + 0x1d8);
      *(undefined8 *)(puVar21 + -8) = 0x14a74b285;
      cVar13 = (*pcVar9)(pFVar16);
      if (cVar13 != '\0') {
        pcVar9 = *(code **)(pFVar25->_padding_ + 0x210);
        *(undefined8 *)(puVar21 + -8) = 0x14a74b298;
        uVar18 = (*pcVar9)(pFVar25,pvVar24);
        pcVar9 = *(code **)(pFVar16->_padding_ + 0x1e8);
        *(undefined8 *)(puVar21 + -8) = 0x14a74b2ae;
        (*pcVar9)(pFVar16,pvVar24,uVar18);
      }
    }
  }
LAB_14a74b2ae:
  if (cVar1 == '\x02') {
    *(undefined8 *)(puVar21 + -8) = 0x14a74b2bc;
    pvVar19 = TObjectVariant<0>::GetData((TObjectVariant<0> *)param_1);
    *(undefined8 *)(puVar21 + -8) = 0x14a74b2ca;
    FProperty::SetValue_InContainer(this,pvVar19,pvVar24);
  }
  else {
    iVar23 = this->ElementSize;
    iVar14 = this->ArrayDim;
    if (param_1->field_0x20 != '\x01') {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b300;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iVar23 * iVar14 != (uint)*(ushort *)(*(longlong *)&param_1->field_0x18 + 0xb6)) {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b337;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SetterType->GetSize() == Destination.GetFieldVariant().GetFunction()->ParmsSize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x317,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    bVar2 = param_1->field_0x10;
    if (2 < (ulonglong)bVar2) {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b369;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar2) == '\0') {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b39d;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Destination.GetObjectVariant().IsUObject()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                          ,0x318,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (param_1->field_0x10 != '\x02') {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b3cb;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    plVar5 = *(longlong **)param_1;
    pcVar9 = *(code **)(*plVar5 + 0x260);
    if (param_1->field_0x20 != '\x01') {
      *(undefined8 *)(puVar21 + -8) = 0x14a74b407;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type == EVariantType::Function",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                          ,0x58,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar18 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)(puVar21 + -8) = 0x14a74b41b;
    (*pcVar9)(plVar5,uVar18,pvVar24);
  }
  if ((~(byte)(this->PropertyFlags >> 0x24) & 1) != 0) {
    pcVar9 = *(code **)(this->_padding_ + 0x138);
    *(undefined8 *)(puVar21 + -8) = 0x14a74b438;
    (*pcVar9)(this,pvVar24);
  }
LAB_14a74b43b:
  local_70.Struct = *(UStruct **)&local_40->field_0x8;
  if (local_70.Struct == (UStruct *)0x0) {
    local_70.Field = (FField *)0x0;
  }
  else {
    local_70.Field = (local_70.Struct)->ChildProperties;
  }
  local_70.InterfaceIndex = -1;
  local_70.bIncludeSuper = true;
  local_70.bIncludeDeprecated = true;
  local_70.bIncludeInterface = false;
  *(undefined8 *)(puVar21 + -8) = 0x14a74b651;
  TFieldIterator<FProperty>::IterateToNext(&local_70);
  pFVar11 = local_70.Field;
  while ((pFVar11 != (FField *)0x0 && ((char)pFVar11[1].ClassPrivate < '\0'))) {
    if ((~(byte)((ulonglong)pFVar11[1].ClassPrivate >> 0x24) & 1) != 0) {
      pcVar9 = *(code **)(pFVar11->_padding_ + 0x138);
      iVar23 = (int)pFVar11[1]._padding_;
      local_70.Field = pFVar11;
      if (iVar23 < 1) {
        *(int *)(puVar21 + 0x28) = iVar23;
        *(undefined4 *)(puVar21 + 0x20) = 0;
        *(undefined8 *)(puVar21 + -8) = 0x14a74b6b7;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (pFVar22 == (FProperty *)0x0) {
        *(undefined8 *)(puVar21 + -8) = 0x14a74b6e6;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L"");
        if (bVar12) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar23 = *(int *)((longlong)&pFVar11[1].Owner.Container + 4);
      *(undefined8 *)(puVar21 + -8) = 0x14a74b6fd;
      (*pcVar9)(pFVar11,(longlong)&pFVar22->_padding_ + (longlong)iVar23);
    }
    local_70.Field = pFVar11->Next;
    *(undefined8 *)(puVar21 + -8) = 0x14a74b70e;
    TFieldIterator<FProperty>::IterateToNext(&local_70);
    pFVar11 = local_70.Field;
  }
  *(undefined8 *)(puVar21 + -8) = 0x14a74b727;
  return;
}

// ExecuteFunction_NoReturnValue @ 14a74bce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
UE::MVVM::BindingHelper::ExecuteFunction_NoReturnValue(UFunction *param_1,UObject *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  FField *pFVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  void *_Dst;
  ulonglong _Size;
  undefined1 auStack_98 [47];
  undefined1 uStack_69;
  TFieldIterator<FProperty> local_68;
  TFieldIterator<FProperty> local_50;
  ulonglong local_38;
  
  puVar11 = auStack_98;
  local_38 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_1->ParmsSize;
  _Size = (ulonglong)uVar1;
  _Dst = (void *)0x0;
  if (uVar1 != 0) {
    sVar2 = *(short *)((longlong)&param_1->_padding_ + 4);
    if (sVar2 < 0x11) {
      uVar10 = _Size + 0x1e;
      if (uVar10 <= _Size + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      puVar11 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
      _Dst = (void *)((longlong)&local_68 + -(uVar10 & 0xfffffffffffffff0) + 8);
    }
    else {
      uVar9 = (ulonglong)(int)((uVar1 - 1) + (int)sVar2);
      uVar10 = uVar9 + 0xf;
      if (uVar10 <= uVar9) {
        uVar10 = 0xffffffffffffff0;
      }
      puVar11 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
      _Dst = (void *)((ulonglong)(&uStack_69 + (longlong)sVar2 + -(uVar10 & 0xfffffffffffffff0)) &
                     (longlong)(int)~((int)sVar2 - 1U));
    }
    *(undefined8 *)(puVar11 + -8) = 0x14a74bdbb;
    memset(_Dst,0,_Size);
  }
  local_68.Field = (FField *)param_1->_padding_;
  local_68.InterfaceIndex = -1;
  local_68.bIncludeSuper = true;
  local_68.bIncludeDeprecated = true;
  local_68.bIncludeInterface = false;
  local_68.Struct = (UStruct *)param_1;
  *(undefined8 *)(puVar11 + -8) = 0x14a74bde1;
  TFieldIterator<FProperty>::IterateToNext(&local_68);
  pFVar7 = local_68.Field;
  while ((local_68.Field = pFVar7, pFVar7 != (FField *)0x0 && ((char)pFVar7[1].ClassPrivate < '\0'))
        ) {
    if (((ulonglong)pFVar7[1].ClassPrivate >> 9 & 1) == 0) {
      pcVar6 = *(code **)(pFVar7->_padding_ + 0x150);
      iVar5 = (int)pFVar7[1]._padding_;
      if (iVar5 < 1) {
        *(int *)(puVar11 + 0x28) = iVar5;
        *(undefined4 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + -8) = 0x14a74becc;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (_Dst == (void *)0x0) {
        *(undefined8 *)(puVar11 + -8) = 0x14a74befb;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)(puVar11 + -8) = 0x14a74bf12;
      (*pcVar6)(pFVar7);
    }
    else {
      iVar5 = (int)pFVar7[1]._padding_;
      iVar3 = *(int *)((longlong)&pFVar7[1]._padding_ + 4);
      if (iVar5 < 1) {
        *(int *)(puVar11 + 0x28) = iVar5;
        *(undefined4 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + -8) = 0x14a74be43;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (_Dst == (void *)0x0) {
        *(undefined8 *)(puVar11 + -8) = 0x14a74be72;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar4 = *(int *)((longlong)&pFVar7[1].Owner.Container + 4);
      *(undefined8 *)(puVar11 + -8) = 0x14a74be8d;
      memset((void *)((longlong)iVar4 + (longlong)_Dst),0,(longlong)iVar3 * (longlong)iVar5);
    }
    local_68.Field = pFVar7->Next;
    *(undefined8 *)(puVar11 + -8) = 0x14a74bf23;
    TFieldIterator<FProperty>::IterateToNext(&local_68);
    pFVar7 = local_68.Field;
  }
  pcVar6 = *(code **)(*(longlong *)param_2 + 0x260);
  *(undefined8 *)(puVar11 + -8) = 0x14a74bf43;
  (*pcVar6)(param_2,param_1,_Dst);
  local_50.Field = (FField *)param_1->_padding_;
  local_50.InterfaceIndex = -1;
  local_50.bIncludeSuper = true;
  local_50.bIncludeDeprecated = true;
  local_50.bIncludeInterface = false;
  local_50.Struct = (UStruct *)param_1;
  *(undefined8 *)(puVar11 + -8) = 0x14a74bf69;
  TFieldIterator<FProperty>::IterateToNext(&local_50);
  pFVar7 = local_50.Field;
  while ((pFVar7 != (FField *)0x0 && ((char)pFVar7[1].ClassPrivate < '\0'))) {
    if ((~(byte)((ulonglong)pFVar7[1].ClassPrivate >> 0x24) & 1) != 0) {
      pcVar6 = *(code **)(pFVar7->_padding_ + 0x138);
      iVar5 = (int)pFVar7[1]._padding_;
      local_50.Field = pFVar7;
      if (iVar5 < 1) {
        *(int *)(puVar11 + 0x28) = iVar5;
        *(undefined4 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + -8) = 0x14a74bfd7;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (_Dst == (void *)0x0) {
        *(undefined8 *)(puVar11 + -8) = 0x14a74c006;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar5 = *(int *)((longlong)&pFVar7[1].Owner.Container + 4);
      *(undefined8 *)(puVar11 + -8) = 0x14a74c01d;
      (*pcVar6)(pFVar7,(longlong)iVar5 + (longlong)_Dst);
    }
    local_50.Field = pFVar7->Next;
    *(undefined8 *)(puVar11 + -8) = 0x14a74c02e;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    pFVar7 = local_50.Field;
  }
  *(undefined8 *)(puVar11 + -8) = 0x14a74c047;
  return;
}

// FindContainer @ 14a74dde0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<UStruct_*,FText> * __cdecl
UE::MVVM::FieldPathHelper::Private::FindContainer
          (TValueOrError<UStruct_*,FText> *__return_storage_ptr__,FProperty *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FProperty *pFVar6;
  FProperty *pFVar7;
  FString local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar6 = (FProperty *)0x0;
  if ((((param_1 != (FProperty *)0x0) &&
       (pFVar7 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x1a & 1) != 0)) ||
      (pFVar7 = pFVar6, param_1 != (FProperty *)0x0)) &&
     ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pFVar6 = param_1;
  }
  if (pFVar7 == (FProperty *)0x0) {
    if (pFVar6 == (FProperty *)0x0) {
      ::FName::ToString((FName *)param_1->_padding_,&local_68);
      pFVar2 = FText::FromString(&local_38,&local_68);
      bVar1 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar1) {
        ::FName::ToString((FName *)&param_1->_padding_,&local_78);
      }
      else {
        ::FString::FString(&local_78,L"None");
      }
      pFVar3 = FText::FromString(&local_28,&local_78);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"MVVMFieldPathHelper",L"InvalidPropertyTypeInSourcePath",
                          L"Only object or struct properties can be used as source paths. \'{0}\' is a \'{1}\'."
                         );
      pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
      pFVar2 = FText::Format<FText,FText>(&local_58,pFVar5,pFVar3,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ = pFVar6[1]._padding_;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
    }
  }
  else {
    (__return_storage_ptr__->Variant)._padding_ = pFVar7[1]._padding_;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  return __return_storage_ptr__;
}

// FindFieldByName @ 14a74df80

FMVVMFieldVariant * __cdecl
UE::MVVM::BindingHelper::FindFieldByName
          (FMVVMFieldVariant *__return_storage_ptr__,UStruct *param_1,FMVVMBindingName param_2)

{
  int iVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  FProperty *pFVar4;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar3 = UClass::FindFunctionByName((UClass *)param_1,param_2.BindingName,IncludeSuper);
      if (pUVar3 != (UFunction *)0x0) {
        *(UFunction **)__return_storage_ptr__ = pUVar3;
        __return_storage_ptr__->field_0x8 = 1;
        return __return_storage_ptr__;
      }
    }
    pFVar4 = ::PropertyAccessUtil::FindPropertyByName(param_2.BindingName,param_1);
    if (pFVar4 != (FProperty *)0x0) {
      *(FProperty **)__return_storage_ptr__ = pFVar4;
      __return_storage_ptr__->field_0x8 = 2;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// FindProperty @ 14a74e0f0

FProperty * __cdecl
UE::MVVM::FieldPathHelper::Private::FindProperty(FMVVMConstFieldVariant *param_1)

{
  UFunction *pUVar1;
  FProperty *pFVar2;
  
  if (param_1->field_0x8 == '\x02') {
    return *(FProperty **)param_1;
  }
  if ((param_1->field_0x8 == '\x01') && (*(longlong *)param_1 != 0)) {
    pUVar1 = TMVVMFieldVariant<1>::GetFunction((TMVVMFieldVariant<1> *)param_1);
    pFVar2 = BindingHelper::GetReturnProperty(pUVar1);
    return pFVar2;
  }
  return (FProperty *)0x0;
}

// GenerateFieldPathList @ 14a74e2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText> * __cdecl
UE::MVVM::FieldPathHelper::GenerateFieldPathList
          (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
           *__return_storage_ptr__,UClass *param_1,TStringView<wchar_t> *param_2,bool param_3)

{
  wchar_t *pwVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FText *pFVar8;
  TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText> *pTVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  FName *pFVar12;
  UClass *pUVar13;
  UFunction *pUVar14;
  FProperty *pFVar15;
  FMVVMFieldVariant *pFVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  char cVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_328 [32];
  UFunction **local_308;
  FMVVMConstFieldVariant *local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  ForElementType<UE::MVVM::FMVVMConstFieldVariant> local_2d8;
  int local_2d0;
  int iStack_2cc;
  FMemMark local_2c8;
  undefined1 local_2a0 [8];
  FMVVMConstFieldVariant local_298;
  FMVVMConstFieldVariant local_288;
  UFunction *local_278;
  undefined8 uStack_270;
  FName local_268;
  FName local_260;
  TStringView<wchar_t> local_258;
  FString local_248;
  FString local_238;
  FMVVMConstFieldVariant *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  code *local_218;
  undefined1 *local_210;
  wchar_t *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FText local_1f8;
  FText local_1e8;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FText local_1c0;
  FText local_1b0;
  FText local_1a0;
  FText local_190;
  FText local_180;
  FText local_170;
  TStringView<wchar_t> local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FMVVMFieldVariant local_c8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  TValueOrError<UStruct_*,FText> local_78;
  TValueOrError<UStruct_*,FText> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_268 = (FName)((ulonglong)local_268 & 0xffffffff00000000);
  if (param_1 == (UClass *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1c0,L"MVVMFieldPathHelper",L"SourceClassInvalid",
                        L"The source class is invalid.");
    FText::FText((FText *)__return_storage_ptr__,pFVar8);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_1c0.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  iVar6 = param_2->Size;
  if (iVar6 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1b0,L"MVVMFieldPathHelper",L"FieldPathEmpty",
                        L"The field path is empty.");
    FText::FText((FText *)__return_storage_ptr__,pFVar8);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_1b0.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  iVar5 = iVar6 + -1;
  if ((iVar5 < 0) || (iVar6 <= iVar5)) {
    local_300 = (FMVVMConstFieldVariant *)CONCAT44(local_300._4_4_,iVar6);
    local_308 = (UFunction **)CONCAT44(local_308._4_4_,iVar5);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                *)(*pcVar3)();
      return pTVar9;
    }
  }
  if (param_2->DataPtr[(longlong)iVar6 + -1] == L'.') {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_f8,L"MVVMFieldPathHelper",L"FieldPathEndsInPeriod",
                        L"The field path cannot end with a \'.\' character.");
    FText::FText((FText *)__return_storage_ptr__,pFVar8);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_f8.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  puVar10 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_210 = local_2a0;
  local_218 = Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_218,puVar10);
  local_258.DataPtr = param_2->DataPtr;
  local_258.Size = param_2->Size;
  local_258._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_2d8.Data = (FMVVMConstFieldVariant *)0x0;
  local_2d0 = 0;
  iStack_2cc = 0;
  local_2c8.Mem = (FMemStackBase *)(pFVar11 + 2);
  local_2c8.Top = (local_2c8.Mem)->Top;
  local_2c8.SavedChunk = *(FTaggedMemory **)(pFVar11 + 4);
  local_2c8.bPopped = false;
  local_2c8.NextTopmostMark = *(FMemMark **)(pFVar11 + 5);
  pFVar11[5] = (FTlsAutoCleanup)&local_2c8;
  *(int *)(pFVar11 + 6) = *(int *)(pFVar11 + 6) + 1;
  iVar6 = String::FindFirstChar(&local_258,L'.',CaseSensitive);
  while (iVar6 != -1) {
    pwVar1 = param_2->DataPtr;
    pFVar12 = ::FName::FName(&local_1d8,iVar6,pwVar1,FNAME_Add);
    FVar2 = *pFVar12;
    if (param_1 == (UClass *)0x0) {
LAB_14a74e554:
      pUVar14 = (UFunction *)0x0;
      uStack_270 = 0;
      cVar20 = '\0';
    }
    else {
      pUVar13 = Z_Construct_UClass_UClass_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((*(int *)(param_1->_padding_ + 0x38) < iVar5) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
           &pUVar13->_padding_)) ||
         (pUVar14 = UClass::FindFunctionByName(param_1,FVar2,IncludeSuper),
         pUVar14 == (UFunction *)0x0)) {
        pUVar14 = (UFunction *)::PropertyAccessUtil::FindPropertyByName(FVar2,(UStruct *)param_1);
        if (pUVar14 == (UFunction *)0x0) goto LAB_14a74e554;
        cVar20 = '\x02';
      }
      else {
        cVar20 = '\x01';
      }
    }
    uStack_270 = CONCAT71(uStack_270._1_7_,cVar20);
    local_298._0_8_ = (UFunction *)0x0;
    local_298._8_1_ = '\0';
    local_278 = pUVar14;
    if (((cVar20 != '\x02') && (cVar20 != '\x01')) ||
       (local_298._0_8_ = pUVar14, local_298._8_1_ = cVar20, pUVar14 == (UFunction *)0x0)) {
      bVar4 = param_1 == (UClass *)0x0;
      if (bVar4) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_180,L"MVVMFieldPathHelper",L"None",L"<none>");
      }
      else {
        local_268 = (FName)param_1->_padding_;
        ::FName::ToString(&local_268,&local_248);
        pFVar8 = FText::FromString(&local_170,&local_248);
      }
      pFVar8 = FText::FText(&local_88,pFVar8);
      pFVar12 = ::FName::FName(&local_1d0,iVar6,pwVar1,FNAME_Add);
      pFVar17 = FText::FromName(&local_e8,pFVar12);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_190,L"MVVMFieldPathHelper",L"FieldDoesNotExistInStruct",
                           L"The field \'{0}\' does not exist in the struct \'{1}\'.");
      pFVar19 = FTextFormat::FTextFormat(&local_d8,pFVar18,Default);
      pFVar8 = FText::Format<FText,FText>(&local_1a0,pFVar19,pFVar17,pFVar8);
      FText::FText((FText *)__return_storage_ptr__,pFVar8);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_1a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
      }
      if (local_190.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
      }
      if ((bVar4) && (local_180.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
      }
      if ((!bVar4) && (local_170.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
      goto joined_r0x00014a74ec06;
    }
    if (cVar20 == '\x02') {
      Private::FindContainer(&local_78,(FProperty *)pUVar14);
      uVar22 = (ulonglong)local_78.Variant.TypeIndex;
      if ((2 < uVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,UStruct*___ptr64,TValueOrError<class_UStruct*___ptr64,class_FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar22) != '\0') {
        if ((local_78.Variant.TypeIndex != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                    *)(*pcVar3)();
          return pTVar9;
        }
        FText::FText(&local_1f8,(FText *)&local_78);
        if ((2 < (ulonglong)local_78.Variant.TypeIndex) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                    *)(*pcVar3)();
          return pTVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_78.Variant.TypeIndex])(&local_78);
        local_78.Variant.TypeIndex = 2;
        FText::FText((FText *)__return_storage_ptr__,&local_1f8);
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (local_1f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
        }
        uVar22 = (ulonglong)local_78.Variant.TypeIndex;
        if ((2 < uVar22) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                    *)(*pcVar3)();
          return pTVar9;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22] !=
            Core::Private::TDestructorCaller<TValueOrError<UStruct_*,FText>::FEmptyType>::Destruct)
        {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22])(&local_78);
        }
        goto LAB_14a74ef43;
      }
      if ((local_78.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      param_1 = (UClass *)local_78.Variant._padding_;
      uVar22 = (ulonglong)local_78.Variant.TypeIndex;
      if ((2 < uVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar22])(&local_78);
    }
    if (local_298._8_1_ == '\x01') {
      pFVar15 = BindingHelper::GetReturnProperty((UFunction *)local_298._0_8_);
      Private::FindContainer(&local_60,pFVar15);
      uVar22 = (ulonglong)local_60.Variant.TypeIndex;
      if ((2 < uVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,UStruct*___ptr64,TValueOrError<class_UStruct*___ptr64,class_FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar22) != '\0') {
        if ((local_60.Variant.TypeIndex != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                    *)(*pcVar3)();
          return pTVar9;
        }
        FText::FText(&local_1e8,(FText *)&local_60);
        if ((2 < (ulonglong)local_60.Variant.TypeIndex) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                    *)(*pcVar3)();
          return pTVar9;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
        local_60.Variant.TypeIndex = 2;
        FText::FText((FText *)__return_storage_ptr__,&local_1e8);
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (local_1e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
        }
        uVar22 = (ulonglong)local_60.Variant.TypeIndex;
        if ((2 < uVar22) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                    *)(*pcVar3)();
          return pTVar9;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22] !=
            Core::Private::TDestructorCaller<TValueOrError<UStruct_*,FText>::FEmptyType>::Destruct)
        {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22])(&local_60);
        }
        goto LAB_14a74ef43;
      }
      if ((local_60.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      param_1 = (UClass *)local_60.Variant._padding_;
      uVar22 = (ulonglong)local_60.Variant.TypeIndex;
      if ((2 < uVar22) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar22])(&local_60);
    }
    iVar5 = param_2->Size;
    iVar7 = (iVar5 - iVar6) + -1;
    iVar6 = iVar5;
    if (iVar7 < iVar5) {
      iVar6 = iVar7;
    }
    iStack_200 = 0;
    if (0 < iVar6) {
      iStack_200 = iVar6;
    }
    local_208 = param_2->DataPtr + ((longlong)iVar5 - (longlong)iStack_200);
    param_2->DataPtr = local_208;
    *(ulonglong *)&param_2->Size = CONCAT44(uStack_1fc,iStack_200);
    if ((local_2d8.Data <= &local_298) && (&local_298 < local_2d8.Data + iStack_2cc)) {
      local_2f0 = (longlong)local_2d0;
      local_2e8 = 0x10;
      local_308 = (UFunction **)&local_298;
      local_300 = local_2d8.Data;
      local_2f8 = (longlong)iStack_2cc;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
    }
    if (local_2d0 == iStack_2cc) {
      local_2d0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::MVVM::FMVVMConstFieldVariant>_>
                            (0x810,&local_2d8,&iStack_2cc);
    }
    lVar21 = (longlong)local_2d0;
    local_258.DataPtr = param_2->DataPtr;
    local_258.Size = param_2->Size;
    local_258._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_2d0 = local_2d0 + 1;
    *(undefined8 *)(local_2d8.Data + lVar21) = local_298._0_8_;
    *(ulonglong *)&local_2d8.Data[lVar21].field_0x8 = CONCAT71(local_298._9_7_,local_298._8_1_);
    iVar6 = String::FindFirstChar(&local_258,L'.',CaseSensitive);
  }
  if (param_2->Size < 1) {
LAB_14a74ece4:
    iVar6 = local_2d0;
    local_228 = local_2d8.Data;
    if ((local_2d0 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                *)(*pcVar3)();
      return pTVar9;
    }
    iStack_220 = iVar6;
    local_108._12_4_ = uStack_21c;
    local_108.ArrayNum = iVar6;
    local_108.DataPtr = local_228;
    GenerateFieldPathList(__return_storage_ptr__,&local_108,param_3);
    if (local_2c8.bPopped == false) {
      if (((local_2c8.Mem)->TopMark != &local_2c8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      local_2c8.bPopped = true;
      (local_2c8.Mem)->NumMarks = (local_2c8.Mem)->NumMarks + -1;
      if (local_2c8.SavedChunk != (local_2c8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_2c8.Mem,local_2c8.SavedChunk);
      }
      (local_2c8.Mem)->Top = local_2c8.Top;
      (local_2c8.Mem)->TopMark = local_2c8.NextTopmostMark;
    }
  }
  else {
    pFVar12 = ::FName::FName(&local_1c8,param_2->DataPtr);
    pFVar16 = BindingHelper::FindFieldByName
                        (&local_c8,(UStruct *)param_1,(FMVVMBindingName)*pFVar12);
    local_288._0_8_ = (UFunction *)0x0;
    cVar20 = pFVar16->field_0x8;
    if (cVar20 == '\x02') {
      local_288._0_8_ = *(undefined8 *)pFVar16;
LAB_14a74ec24:
      local_288._8_1_ = cVar20;
      if ((UFunction *)local_288._0_8_ != (UFunction *)0x0) {
        if ((local_2d8.Data <= &local_288) && (&local_288 < local_2d8.Data + iStack_2cc)) {
          local_2f0 = (longlong)local_2d0;
          local_2e8 = 0x10;
          local_308 = (UFunction **)&local_288;
          local_300 = local_2d8.Data;
          local_2f8 = (longlong)iStack_2cc;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                      *)(*pcVar3)();
            return pTVar9;
          }
        }
        if (local_2d0 == iStack_2cc) {
          local_2d0 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::MVVM::FMVVMConstFieldVariant>_>
                                (0x810,&local_2d8,&iStack_2cc);
        }
        lVar21 = (longlong)local_2d0;
        local_2d0 = local_2d0 + 1;
        *(undefined8 *)(local_2d8.Data + lVar21) = local_288._0_8_;
        *(ulonglong *)&local_2d8.Data[lVar21].field_0x8 = CONCAT71(local_288._9_7_,local_288._8_1_);
        goto LAB_14a74ece4;
      }
    }
    else if (cVar20 == '\x01') {
      local_288._0_8_ = *(undefined8 *)pFVar16;
      goto LAB_14a74ec24;
    }
    bVar4 = param_1 == (UClass *)0x0;
    if (bVar4) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_128,L"MVVMFieldPathHelper",L"None",L"<none>");
    }
    else {
      local_260 = (FName)param_1->_padding_;
      ::FName::ToString(&local_260,&local_238);
      pFVar8 = FText::FromString(&local_118,&local_238);
    }
    pFVar8 = FText::FText(&local_b8,pFVar8);
    local_158.DataPtr = param_2->DataPtr;
    local_158.Size = param_2->Size;
    local_158._12_4_ = *(undefined4 *)&param_2->field_0xc;
    pFVar17 = FText::FromStringView(&local_a8,&local_158);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_138,L"MVVMFieldPathHelper",L"FieldDoesNotExistInStruct",
                         L"The field \'{0}\' does not exist in the struct \'{1}\'.");
    pFVar19 = FTextFormat::FTextFormat(&local_98,pFVar18,Default);
    pFVar8 = FText::Format<FText,FText>(&local_148,pFVar19,pFVar17,pFVar8);
    FText::FText((FText *)__return_storage_ptr__,pFVar8);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    if ((bVar4) && (local_128.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    local_248.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
    if ((!bVar4) && (local_118.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      local_248.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
    }
joined_r0x00014a74ec06:
    if ((param_1 != (UClass *)0x0) &&
       (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
LAB_14a74ef43:
    if (local_2c8.bPopped == false) {
      if (((local_2c8.Mem)->TopMark != &local_2c8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                  *)(*pcVar3)();
        return pTVar9;
      }
      local_2c8.bPopped = true;
      (local_2c8.Mem)->NumMarks = (local_2c8.Mem)->NumMarks + -1;
      if (local_2c8.SavedChunk != (local_2c8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_2c8.Mem,local_2c8.SavedChunk);
      }
      (local_2c8.Mem)->Top = local_2c8.Top;
      (local_2c8.Mem)->TopMark = local_2c8.NextTopmostMark;
    }
  }
  return __return_storage_ptr__;
}

// GenerateFieldPathList @ 14a74efd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText> * __cdecl
UE::MVVM::FieldPathHelper::GenerateFieldPathList
          (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
           *__return_storage_ptr__,TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> *param_1,
          bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  FText *pFVar12;
  FMVVMConstFieldVariant *pFVar13;
  FName FVar14;
  TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText> *pTVar15
  ;
  UClass *pUVar16;
  FProperty *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  char cVar21;
  ulonglong uVar22;
  FNameEntryId FVar23;
  uint uVar24;
  FName FVar25;
  FName FVar26;
  UFunction *pUVar27;
  undefined1 auStackY_278 [32];
  UFunction *local_228;
  uint uStack_220;
  undefined4 uStack_21c;
  ForAnyElementType local_218;
  int local_210;
  int iStack_20c;
  uint local_208;
  FName local_204;
  FName local_1fc;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  UFunction *local_1c8;
  char cStack_1c0;
  undefined4 uStack_1bf;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> *local_1b8;
  FName local_1b0;
  undefined1 local_1a8 [16];
  FString local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FTextFormat local_a8;
  TValueOrError<UStruct_*,FText> local_98;
  TValueOrError<UStruct_*,FText> local_80;
  UFunction *local_68;
  undefined8 uStack_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar11 = param_1->ArrayNum;
  local_1b8 = param_1;
  if (uVar11 == 0) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"MVVMFieldPathHelper",L"FieldPathEmpty",
                         L"The field path is empty.");
    FText::FText((FText *)__return_storage_ptr__,pFVar12);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
  }
  else {
    FVar26.ComparisonIndex.Value = 0;
    FVar26.Number = 0;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210 = 0;
    iStack_20c = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar11,&local_218,0,&iStack_20c);
    }
    pFVar13 = TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int>::operator[](param_1,0);
    FVar14 = FVar26;
    if (pFVar13->field_0x8 == '\x02') {
      if (*(FField **)pFVar13 != (FField *)0x0) {
        FVar14 = (FName)FField::GetOwnerStruct(*(FField **)pFVar13);
      }
    }
    else if ((pFVar13->field_0x8 == '\x01') && (*(UField **)pFVar13 != (UField *)0x0)) {
      FVar14 = (FName)UField::GetOwnerClass(*(UField **)pFVar13);
    }
    local_208 = 0;
    if (0 < (int)uVar11) {
      local_1f0 = 0;
      FVar25 = FVar26;
      do {
        lVar9 = local_1f0;
        iVar2 = param_1->ArrayNum;
        FVar23 = FVar25.ComparisonIndex.Value;
        uVar11 = 0;
        if ((int)FVar23.Value < iVar2) {
          uVar11 = ~FVar23.Value >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                     *)(*pcVar5)();
          return pTVar15;
        }
        puVar1 = (undefined8 *)(&param_1->DataPtr->field_0x0 + lVar9);
        pUVar27 = (UFunction *)*puVar1;
        uVar6 = puVar1[1];
        uStack_220 = (uint)uVar6;
        uStack_21c = (undefined4)((ulonglong)uVar6 >> 0x20);
        cVar21 = (char)uVar6;
        local_228 = pUVar27;
        if ((cVar21 == '\0') || (pUVar27 == (UFunction *)0x0)) {
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_108,L"MVVMFieldPathHelper",L"FieldIsEmpty",
                               L"The field at index \'{0}\' is empty.");
          pFVar20 = FTextFormat::FTextFormat(&local_a8,pFVar12,Default);
          pFVar12 = FText::Format<int>(&local_118,pFVar20,FVar23.Value);
          FText::FText((FText *)__return_storage_ptr__,pFVar12);
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_118.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          }
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
          }
LAB_14a74faf7:
          if (local_218.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_218.Data);
          return __return_storage_ptr__;
        }
        if (FVar14 == (FName)0x0) {
          if (cVar21 == '\x02') {
            bVar10 = IsThisNotNull(pUVar27,"FField::GetFName");
            if (bVar10) {
              local_1fc = *(FName *)&pUVar27->_padding_;
            }
            else {
              local_1d8 = 0;
              local_1fc.ComparisonIndex.Value = 0;
              local_1fc.Number = 0;
            }
          }
          else if (cVar21 == '\x01') {
            local_1fc = (FName)pUVar27->_padding_;
          }
          else {
            local_1fc.ComparisonIndex.Value = 0;
            local_1fc.Number = 0;
          }
          pFVar12 = FText::FromName(&local_c8,&local_1fc);
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_128,L"MVVMFieldPathHelper",L"FieldDoesNotExist",
                               L"The field \'{0}\' does not exist.");
          pFVar20 = FTextFormat::FTextFormat(&local_b8,pFVar18,Default);
          pFVar12 = FText::Format<FText>(&local_138,pFVar20,pFVar12);
          FText::FText((FText *)__return_storage_ptr__,pFVar12);
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_138.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
          }
          if (local_128.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
          }
          goto LAB_14a74faf7;
        }
        if (cVar21 == '\x02') {
          pUVar16 = (UClass *)FField::GetOwnerStruct((FField *)pUVar27);
          cVar21 = (char)uStack_220;
        }
        else if (cVar21 == '\x01') {
          pUVar16 = UField::GetOwnerClass((UField *)pUVar27);
          cVar21 = (char)uStack_220;
        }
        else {
          pUVar16 = (UClass *)0x0;
        }
        uVar8 = uStack_21c;
        uVar11 = uStack_220;
        pUVar27 = local_228;
        iVar3 = *(int *)((longlong)FVar14 + 0x38);
        iVar4 = (int)pUVar16->_padding_;
        if ((iVar4 < iVar3) ||
           (*(longlong **)(pUVar16->_padding_ + (longlong)iVar3 * 8) !=
            (longlong *)((longlong)FVar14 + 0x30))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (((pUVar16 == (UClass *)0x0) || (iVar3 < iVar4)) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar14 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar16->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((!bVar10) && (!bVar7)) {
          local_1b0 = *(FName *)((longlong)FVar14 + 0x18);
          ::FName::ToString(&local_1b0,&local_198);
          pFVar12 = FText::FromString(&local_f8,&local_198);
          pUVar27 = local_228;
          if ((char)uStack_220 == '\x02') {
            if (local_228 == (UFunction *)0x0) {
              local_1e0 = 0;
              local_204.ComparisonIndex.Value = 0;
              local_204.Number = 0;
            }
            else {
              bVar10 = IsThisNotNull(local_228,"FField::GetFName");
              if (bVar10) {
                local_204 = *(FName *)&pUVar27->_padding_;
              }
              else {
                local_1e8 = 0;
                local_204.ComparisonIndex.Value = 0;
                local_204.Number = 0;
              }
            }
          }
          else {
            local_204 = FVar26;
            if (((char)uStack_220 == '\x01') && (local_228 != (UFunction *)0x0)) {
              local_204 = (FName)local_228->_padding_;
            }
          }
          pFVar18 = FText::FromName(&local_e8,&local_204);
          pFVar19 = FText::AsLocalizable_Advanced_LocText
                              (&local_148,L"MVVMFieldPathHelper",L"FieldDoesNotExistInStruct",
                               L"The field \'{0}\' does not exist in the struct \'{1}\'.");
          pFVar20 = FTextFormat::FTextFormat(&local_d8,pFVar19,Default);
          pFVar12 = FText::Format<FText,FText>(&local_158,pFVar20,pFVar18,pFVar12);
          FText::FText((FText *)__return_storage_ptr__,pFVar12);
          (__return_storage_ptr__->Variant).TypeIndex = '\x01';
          if (local_158.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
          }
          if (local_148.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          goto LAB_14a74faf7;
        }
        uVar24 = local_208;
        if (cVar21 == '\x02') {
          local_1a8._8_4_ = uStack_220;
          local_1a8._0_8_ = local_228;
          local_1a8._12_4_ = uStack_21c;
          if (local_228 != (UFunction *)0x0) {
            FField::GetOwnerStruct((FField *)local_228);
          }
          uStack_1bf = local_1a8._9_4_;
          uStack_1bb = local_1a8._13_2_;
          uStack_1b9 = (undefined1)((uint)uVar8 >> 0x18);
          cStack_1c0 = (char)uVar11;
          uStack_60 = CONCAT17(uStack_1b9,
                               CONCAT25(local_1a8._13_2_,CONCAT41(local_1a8._9_4_,cStack_1c0)));
          uStack_220 = (uint)CONCAT41(local_1a8._9_4_,cStack_1c0);
          uStack_21c = (undefined4)((ulonglong)uStack_60 >> 0x20);
          local_58 = 2;
          local_228 = pUVar27;
          local_1c8 = pUVar27;
          local_68 = pUVar27;
          if (((cStack_1c0 == '\0') || (pUVar27 == (UFunction *)0x0)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Field.IsEmpty()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMFieldPathHelper.cpp"
                                  ,0x10a,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                       *)(*pcVar5)();
            return pTVar15;
          }
          uVar24 = local_208;
          uVar11 = uStack_220;
          if ((local_208 == iVar2 - 1U) || (uVar11 = uStack_220 & 0xff, (char)uStack_220 != '\x02'))
          {
            cVar21 = (char)uVar11;
          }
          else {
            Private::FindContainer(&local_98,(FProperty *)local_228);
            uVar22 = (ulonglong)local_98.Variant.TypeIndex;
            if ((2 < uVar22) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0x12f,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,UStruct*___ptr64,TValueOrError<class_UStruct*___ptr64,class_FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar22) != '\0') {
              if ((local_98.Variant.TypeIndex != 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index == TypeIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                      ,0x97,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                           *)(*pcVar5)();
                return pTVar15;
              }
              FText::FText(&local_188,(FText *)&local_98);
              if ((2 < local_98.Variant.TypeIndex) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                           *)(*pcVar5)();
                return pTVar15;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
              local_98.Variant.TypeIndex = 2;
              FText::FText((FText *)__return_storage_ptr__,&local_188);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_188.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
              }
              uVar22 = (ulonglong)local_98.Variant.TypeIndex;
              if ((2 < local_98.Variant.TypeIndex) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                           *)(*pcVar5)();
                return pTVar15;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar22] !=
                  Core::Private::TDestructorCaller<TValueOrError<UStruct_*,FText>::FEmptyType>::
                  Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar22])(&local_98);
              }
              uVar22 = (ulonglong)local_58;
              if ((2 < local_58) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                           *)(*pcVar5)();
                return pTVar15;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MVVM::FMVVMConstFieldVariant,TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText>::FWrapErrorType,TValueOrError<struct_UE::MVVM::FMVVMConstFieldVariant,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar22] !=
                  Core::Private::
                  TDestructorCaller<TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText>::FEmptyType>
                  ::Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MVVM::FMVVMConstFieldVariant,TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText>::FWrapErrorType,TValueOrError<struct_UE::MVVM::FMVVMConstFieldVariant,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar22])(&local_68);
              }
              goto LAB_14a74faf7;
            }
            if ((local_98.Variant.TypeIndex != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index == TypeIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                    ,0x97,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            FVar14 = (FName)local_98.Variant._padding_;
            uVar22 = (ulonglong)local_98.Variant.TypeIndex;
            if ((2 < local_98.Variant.TypeIndex) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22] !=
                Core::Private::TDestructorCaller<TValueOrError<UStruct_*,FText>::FEmptyType>::
                Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22])(&local_98);
            }
            cVar21 = (char)uStack_220;
          }
          uVar22 = (ulonglong)local_58;
          if (2 < local_58) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L"");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            cVar21 = (char)uStack_220;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MVVM::FMVVMConstFieldVariant,TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText>::FWrapErrorType,TValueOrError<struct_UE::MVVM::FMVVMConstFieldVariant,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar22] !=
              Core::Private::
              TDestructorCaller<TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText>::FEmptyType>::
              Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MVVM::FMVVMConstFieldVariant,TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText>::FWrapErrorType,TValueOrError<struct_UE::MVVM::FMVVMConstFieldVariant,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar22])(&local_68);
            cVar21 = (char)uStack_220;
          }
        }
        if ((uVar24 != iVar2 - 1U) && (cVar21 == '\x01')) {
          pFVar17 = BindingHelper::GetReturnProperty(local_228);
          Private::FindContainer(&local_80,pFVar17);
          uVar22 = (ulonglong)local_80.Variant.TypeIndex;
          if ((2 < uVar22) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x12f,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                       *)(*pcVar5)();
            return pTVar15;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,UStruct*___ptr64,TValueOrError<class_UStruct*___ptr64,class_FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar22) != '\0') {
            if ((local_80.Variant.TypeIndex != 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index == TypeIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                    ,0x97,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            FText::FText(&local_178,(FText *)&local_80);
            if ((2 < local_80.Variant.TypeIndex) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_80.Variant.TypeIndex])(&local_80);
            local_80.Variant.TypeIndex = 2;
            FText::FText((FText *)__return_storage_ptr__,&local_178);
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_178.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
            }
            uVar22 = (ulonglong)local_80.Variant.TypeIndex;
            if ((2 < local_80.Variant.TypeIndex) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar5)();
              return pTVar15;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22] !=
                Core::Private::TDestructorCaller<TValueOrError<UStruct_*,FText>::FEmptyType>::
                Destruct) {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar22])(&local_80);
            }
            goto LAB_14a74faf7;
          }
          if ((local_80.Variant.TypeIndex != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                       *)(*pcVar5)();
            return pTVar15;
          }
          FVar14 = (FName)local_80.Variant._padding_;
          uVar22 = (ulonglong)local_80.Variant.TypeIndex;
          if ((2 < local_80.Variant.TypeIndex) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                       *)(*pcVar5)();
            return pTVar15;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar22] !=
              Core::Private::TDestructorCaller<TValueOrError<UStruct_*,FText>::FEmptyType>::Destruct
             ) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar22])(&local_80);
          }
        }
        if (((local_218.Data <= (FScriptContainerElement *)&local_228) &&
            ((FScriptContainerElement *)&local_228 < local_218.Data + (longlong)iStack_20c * 0x10))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TValueOrError<TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_>,FText>
                     *)(*pcVar5)();
          return pTVar15;
        }
        if (local_210 == iStack_20c) {
          local_210 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_218,&iStack_20c);
        }
        iVar2 = local_210 + 1;
        FVar25.ComparisonIndex.Value = uVar24 + 1;
        FVar25.Number = 0;
        local_1f0 = local_1f0 + 0x10;
        *(UFunction **)(local_218.Data + (longlong)local_210 * 0x10) = local_228;
        *(ulonglong *)(local_218.Data + (longlong)local_210 * 0x10 + 8) =
             CONCAT44(uStack_21c,uStack_220);
        param_1 = local_1b8;
        local_208 = FVar25.ComparisonIndex.Value;
        local_210 = iVar2;
      } while ((int)FVar25.ComparisonIndex.Value < local_1b8->ArrayNum);
    }
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_218.Data;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_210;
    *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) = iStack_20c;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  return __return_storage_ptr__;
}

// GetAllArgumentProperties @ 14a74fb20

TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::MVVM::BindingHelper::GetAllArgumentProperties
          (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UFunction *param_1)

{
  FFieldClass *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FField *pFVar4;
  bool bVar5;
  int iVar6;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FField *local_28;
  TFieldIterator<FProperty> local_20;
  
  if ((param_1 == (UFunction *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x287,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  local_20.Field = (FField *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UFunction *)0x0) {
    local_20.Field = (FField *)param_1->_padding_;
  }
  local_20.InterfaceIndex = -1;
  local_20.bIncludeSuper = true;
  local_20.bIncludeDeprecated = true;
  local_20.bIncludeInterface = false;
  local_20.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_20);
  if (local_20.Field != (FField *)0x0) {
    do {
      pFVar4 = local_20.Field;
      pFVar1 = local_20.Field[1].ClassPrivate;
      if (-1 < (char)pFVar1) {
        return __return_storage_ptr__;
      }
      if ((((char)pFVar1 < '\0') && (((ulonglong)pFVar1 & 0x820000400) == 0)) &&
         ((((ulonglong)pFVar1 >> 8 & 1) == 0 || (((ulonglong)pFVar1 & 0x8000002) != 0)))) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_28 = local_20.Field;
        if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FField **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_28;
      }
      local_20.Field = pFVar4->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_20);
      if (local_20.Field == (FField *)0x0) {
        return __return_storage_ptr__;
      }
    } while( true );
  }
  return __return_storage_ptr__;
}

// GetAvailableBinding @ 14a74fd00

FMVVMAvailableBinding * __cdecl
UE::MVVM::Private::GetAvailableBinding
          (FMVVMAvailableBinding *__return_storage_ptr__,FProperty *param_1,bool param_2,
          bool param_3,bool param_4)

{
  bool bVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if ((((param_1 == (FProperty *)0x0) || (param_1->ArrayDim != 1)) ||
      ((param_1->PropertyFlags & (CPF_EditorOnly|CPF_Deprecated)) != CPF_None)) ||
     ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible)) == CPF_None)) {
    bVar4 = false;
    if ((param_1 != (FProperty *)0x0) && (param_1->ArrayDim == 1)) goto LAB_14a74fd4b;
LAB_14a74fd6b:
    bVar3 = false;
  }
  else {
    bVar4 = true;
LAB_14a74fd4b:
    if (((param_1->PropertyFlags & (CPF_EditorOnly|CPF_Deprecated|CPF_BlueprintReadOnly)) !=
         CPF_None) ||
       ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible)) == CPF_None))
    goto LAB_14a74fd6b;
    bVar3 = true;
  }
  if ((bVar4 == false) && (bVar3 == false)) {
    if (!param_2) {
      __return_storage_ptr__->bIsReadable = false;
      __return_storage_ptr__->bIsWritable = false;
      __return_storage_ptr__->bHasNotify = false;
      __return_storage_ptr__->field_0xb = 0;
      FVar2.ComparisonIndex.Value = 0;
      FVar2.Number = 0;
      goto LAB_14a74fdc6;
    }
LAB_14a74fd9c:
    bVar5 = false;
  }
  else {
    if ((!param_2) || (bVar4 == false)) goto LAB_14a74fd9c;
    bVar5 = true;
  }
  bVar1 = IsThisNotNull(param_1,"FField::GetFName");
  if (bVar1) {
    FVar2 = (FName)param_1->_padding_;
  }
  else {
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
  }
  __return_storage_ptr__->bIsReadable = bVar4;
  __return_storage_ptr__->bIsWritable = bVar3;
  __return_storage_ptr__->bHasNotify = bVar5;
LAB_14a74fdc6:
  (__return_storage_ptr__->BindingName).BindingName = FVar2;
  return __return_storage_ptr__;
}

// GetAvailableBinding @ 14a74fdf0

FMVVMAvailableBinding * __cdecl
UE::MVVM::Private::GetAvailableBinding
          (FMVVMAvailableBinding *__return_storage_ptr__,UFunction *param_1,bool param_2,
          bool param_3,bool param_4,bool param_5)

{
  EFunctionFlags EVar1;
  FProperty *pFVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_AllowPrivateAccess,L"AllowPrivateAccess");
    _Init_thread_footer(&::_TSS0);
  }
  if (((((param_1 == (UFunction *)0x0) ||
        (EVar1 = param_1->FunctionFlags,
        (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) != FUNC_None)) || ((EVar1 >> 0x1a & 1) == 0)
       ) || (((EVar1 >> 0x1e & 1) == 0 || (param_1->NumParms != '\x01')))) ||
     (pFVar2 = BindingHelper::GetReturnProperty(param_1), pFVar2 == (FProperty *)0x0)) {
    bVar6 = false;
    if (param_1 != (UFunction *)0x0) goto LAB_14a74fe86;
LAB_14a74feb7:
    bVar5 = false;
    if (param_1 != (UFunction *)0x0) goto LAB_14a74febe;
LAB_14a74fed9:
    bVar4 = false;
  }
  else {
    bVar6 = true;
LAB_14a74fe86:
    EVar1 = param_1->FunctionFlags;
    if ((((EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) != FUNC_None) ||
        ((EVar1 >> 0x1a & 1) == 0)) ||
       (((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) != FUNC_None ||
        ((param_1->NumParms != '\x01' ||
         (pFVar2 = BindingHelper::GetFirstArgumentProperty(param_1), pFVar2 == (FProperty *)0x0)))))
       ) goto LAB_14a74feb7;
    bVar5 = true;
LAB_14a74febe:
    EVar1 = param_1->FunctionFlags;
    if ((((EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) != FUNC_None) ||
        ((EVar1 >> 0x1a & 1) == 0)) || ((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) != FUNC_None))
    goto LAB_14a74fed9;
    bVar4 = true;
  }
  if (param_5) {
    if (!bVar4) {
LAB_14a74ff1a:
      __return_storage_ptr__->bIsReadable = false;
      __return_storage_ptr__->bIsWritable = false;
      __return_storage_ptr__->bHasNotify = false;
      __return_storage_ptr__->field_0xb = 0;
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
      goto LAB_14a74ff43;
    }
    if ((param_2) && (bVar6 != false)) {
      FVar3 = (FName)param_1->_padding_;
      bVar4 = true;
      __return_storage_ptr__->bIsWritable = true;
    }
    else {
      FVar3 = (FName)param_1->_padding_;
      bVar4 = false;
      __return_storage_ptr__->bIsWritable = true;
    }
  }
  else {
    if ((bVar6 == false) && (bVar5 == false)) {
      if (!param_2) goto LAB_14a74ff1a;
LAB_14a74ff33:
      bVar4 = false;
    }
    else {
      if ((!param_2) || (bVar6 == false)) goto LAB_14a74ff33;
      bVar4 = true;
    }
    FVar3 = (FName)param_1->_padding_;
    __return_storage_ptr__->bIsWritable = bVar5;
  }
  __return_storage_ptr__->bHasNotify = bVar4;
  __return_storage_ptr__->bIsReadable = bVar6;
LAB_14a74ff43:
  (__return_storage_ptr__->BindingName).BindingName = FVar3;
  return __return_storage_ptr__;
}

// GetAvailableBinding @ 14a74ffa0

FMVVMAvailableBinding * __cdecl
UE::MVVM::Private::GetAvailableBinding
          (FMVVMAvailableBinding *__return_storage_ptr__,FMVVMBindingName param_1,UClass *param_2,
          UClass *param_3,bool param_4)

{
  int iVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  char cVar4;
  UFunction *local_28;
  char cStack_20;
  undefined7 uStack_1f;
  UFunction *local_18 [2];
  
  if (param_1.BindingName == (FName)0x0) {
    __return_storage_ptr__->bIsReadable = false;
    __return_storage_ptr__->bIsWritable = false;
    __return_storage_ptr__->bHasNotify = false;
    __return_storage_ptr__->field_0xb = 0;
    (__return_storage_ptr__->BindingName).BindingName = (FName)0x0;
    return __return_storage_ptr__;
  }
  if (param_2 != (UClass *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (pUVar3 = UClass::FindFunctionByName(param_2,param_1.BindingName,IncludeSuper),
       pUVar3 != (UFunction *)0x0)) {
      cVar4 = '\x01';
      goto LAB_14a75002b;
    }
    pUVar3 = (UFunction *)
             ::PropertyAccessUtil::FindPropertyByName(param_1.BindingName,(UStruct *)param_2);
    if (pUVar3 != (UFunction *)0x0) {
      cVar4 = '\x02';
      goto LAB_14a75002b;
    }
  }
  pUVar3 = (UFunction *)0x0;
  cVar4 = '\0';
LAB_14a75002b:
  local_28 = (UFunction *)0x0;
  cStack_20 = '\0';
  if ((cVar4 == '\x02') || (cVar4 == '\x01')) {
    local_28 = pUVar3;
    cStack_20 = cVar4;
  }
  local_18[1]._1_7_ = uStack_1f;
  local_18[1]._0_1_ = cStack_20;
  local_18[0] = local_28;
  GetAvailableBinding(__return_storage_ptr__,(FMVVMConstFieldVariant *)local_18,param_3,param_4);
  return __return_storage_ptr__;
}

// GetAvailableBinding @ 14a7500a0

FMVVMAvailableBinding * __cdecl
UE::MVVM::Private::GetAvailableBinding
          (FMVVMAvailableBinding *__return_storage_ptr__,FMVVMConstFieldVariant *param_1,
          UClass *param_2,IClassDescriptor *param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  bool bVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong local_98 [3];
  longlong *local_80;
  undefined8 local_78;
  code *local_70;
  longlong **local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  uVar10 = 0;
  bVar4 = false;
  if (param_3 != (IClassDescriptor *)0x0) {
    cVar1 = param_1->field_0x8;
    if (cVar1 == '\x02') {
      pvVar3 = *(void **)param_1;
      if (pvVar3 == (void *)0x0) {
        uVar10 = 0;
      }
      else {
        bVar4 = IsThisNotNull(pvVar3,"FField::GetFName");
        uVar10 = 0;
        if (bVar4) {
          uVar10 = *(undefined8 *)((longlong)pvVar3 + 0x20);
        }
      }
      if (*(FField **)param_1 == (FField *)0x0) {
LAB_14a750160:
        pUVar5 = (UClass *)0x0;
      }
      else {
        pUVar5 = (UClass *)FField::GetOwnerStruct(*(FField **)param_1);
      }
    }
    else {
      if (cVar1 != '\x01') goto LAB_14a75030a;
      if (*(longlong *)param_1 != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)param_1 + 0x18);
      }
      if (*(UField **)param_1 == (UField *)0x0) goto LAB_14a750160;
      pUVar5 = UField::GetOwnerClass(*(UField **)param_1);
    }
    if (pUVar5 == (UClass *)0x0) {
LAB_14a75030a:
      pFVar7 = GetTypeName<UClass>(&local_40);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar9);
    }
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) {
      pFVar7 = GetTypeName<UClass>(&local_60);
      pwVar9 = L"";
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<UStruct>(&local_50,(UStruct *)pUVar5);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar11);
    }
    local_98[0] = 0;
    local_80 = local_98;
    local_68 = &local_80;
    local_70 = Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_78 = uVar10;
    (**(code **)*param_3)(param_3,pUVar5);
    bVar4 = local_98[0] != 0;
  }
  pUVar5 = (UClass *)0x0;
  cVar1 = param_1->field_0x8;
  if (cVar1 == '\x02') {
    if (*(FField **)param_1 != (FField *)0x0) {
      pUVar5 = (UClass *)FField::GetOwnerStruct(*(FField **)param_1);
    }
  }
  else if ((cVar1 == '\x01') && (*(UField **)param_1 != (UField *)0x0)) {
    pUVar5 = UField::GetOwnerClass(*(UField **)param_1);
  }
  pUVar6 = (UClass *)0x0;
  if (param_2 == (UClass *)0x0) {
    bVar8 = false;
    goto LAB_14a75028f;
  }
  if (cVar1 == '\x02') {
    if (*(FField **)param_1 != (FField *)0x0) {
      pUVar6 = (UClass *)FField::GetOwnerStruct(*(FField **)param_1);
    }
LAB_14a75025d:
    if (pUVar6 != (UClass *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= (int)param_2->_padding_) &&
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        bVar8 = true;
        goto LAB_14a75028f;
      }
    }
  }
  else if (cVar1 == '\x01') {
    if (*(UField **)param_1 != (UField *)0x0) {
      pUVar6 = UField::GetOwnerClass(*(UField **)param_1);
    }
    goto LAB_14a75025d;
  }
  bVar8 = false;
LAB_14a75028f:
  if (param_1->field_0x8 == '\x02') {
    GetAvailableBinding(__return_storage_ptr__,*(FProperty **)param_1,bVar4,pUVar5 == param_2,bVar8)
    ;
  }
  else if (param_1->field_0x8 == '\x01') {
    GetAvailableBinding(__return_storage_ptr__,*(UFunction **)param_1,bVar4,pUVar5 == param_2,bVar8,
                        param_4);
  }
  else {
    __return_storage_ptr__->bIsReadable = false;
    __return_storage_ptr__->bIsWritable = false;
    __return_storage_ptr__->bHasNotify = false;
    __return_storage_ptr__->field_0xb = 0;
    (__return_storage_ptr__->BindingName).BindingName = (FName)0x0;
  }
  return __return_storage_ptr__;
}

// GetAvailableBinding @ 14a750390

FMVVMAvailableBinding * __cdecl
UE::MVVM::Private::GetAvailableBinding
          (FMVVMAvailableBinding *__return_storage_ptr__,FMVVMConstFieldVariant *param_1,
          UClass *param_2,bool param_3)

{
  int iVar1;
  UObject *this;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  IClassDescriptor *pIVar6;
  FMVVMConstFieldVariant local_28;
  
  pUVar5 = (UClass *)0x0;
  pUVar3 = pUVar5;
  if (param_1->field_0x8 == '\x02') {
    if (*(FField **)param_1 != (FField *)0x0) {
      pUVar3 = (UClass *)FField::GetOwnerStruct(*(FField **)param_1);
    }
LAB_14a7503ee:
    if (pUVar3 != (UClass *)0x0) {
      pUVar4 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        bVar2 = UClass::ImplementsInterface(pUVar3,pUVar4);
        if (bVar2) {
          if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar3);
          }
          this = (pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
          if (this != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(this);
            }
            pUVar3 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
            pUVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
          }
          pIVar6 = (IClassDescriptor *)(**(code **)(pUVar5->_padding_ + 0x30))(pUVar5);
          goto LAB_14a750480;
        }
      }
    }
  }
  else if (param_1->field_0x8 == '\x01') {
    if (*(UField **)param_1 != (UField *)0x0) {
      pUVar3 = UField::GetOwnerClass(*(UField **)param_1);
    }
    goto LAB_14a7503ee;
  }
  pIVar6 = (IClassDescriptor *)0x0;
LAB_14a750480:
  local_28._0_8_ = *(undefined8 *)param_1;
  local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
  GetAvailableBinding(__return_storage_ptr__,&local_28,param_2,pIVar6,param_3);
  return __return_storage_ptr__;
}

// GetAvailableBindings @ 14a750580

TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> * __cdecl
UE::MVVM::Private::GetAvailableBindings
          (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,UClass *param_2,bool param_3)

{
  UObject *this;
  bool bVar1;
  UClass *pUVar2;
  longlong *plVar3;
  IClassDescriptor *pIVar4;
  
  if (param_1 != (UClass *)0x0) {
    pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    bVar1 = UClass::ImplementsInterface(param_1,pUVar2);
    if (bVar1) {
      if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(param_1);
      }
      this = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
      plVar3 = (longlong *)0x0;
      if (this != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(this);
        }
        pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
      }
      if (this == (UObject *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      pIVar4 = (IClassDescriptor *)(**(code **)(*plVar3 + 0x30))();
      GetAvailableBindings(__return_storage_ptr__,(UStruct *)param_1,param_2,pIVar4,param_3);
      return __return_storage_ptr__;
    }
  }
  GetAvailableBindings
            (__return_storage_ptr__,(UStruct *)param_1,param_2,(IClassDescriptor *)0x0,param_3);
  return __return_storage_ptr__;
}

// GetAvailableBindings @ 14a750680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> * __cdecl
UE::MVVM::Private::GetAvailableBindings
          (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UStruct *param_1,UClass *param_2,IClassDescriptor *param_3,bool param_4)

{
  code *pcVar1;
  longlong lVar2;
  FMVVMAvailableBinding *pFVar3;
  FScriptContainerElement *pFVar4;
  FName *pFVar5;
  UFunction *pUVar6;
  FField *pFVar7;
  FName FVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  UClass *pUVar13;
  TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *pTVar14;
  FString *pFVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  wchar_t *pwVar18;
  char cVar19;
  FNameEntryId FVar20;
  wchar_t *pwVar21;
  uint uVar22;
  int *piVar23;
  bool bVar24;
  undefined1 auStackY_1a8 [32];
  FName local_150;
  undefined4 local_148;
  FName local_140;
  FMVVMAvailableBinding local_138;
  TFieldIterator<FProperty_const_> local_128;
  TFieldIterator<UFunction_const_> local_110;
  FName local_f8;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_f0;
  UStruct *local_e8;
  code *local_e0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_98._44_4_ = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._8_4_ = 0;
  local_98._40_4_ = 0;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_e8 = param_1;
  if (param_3 != (IClassDescriptor *)0x0) {
    pcVar1 = *(code **)*param_3;
    local_f0 = &local_98;
    local_d8 = &local_f0;
    local_e0 = Core::Private::Function::
               TFunctionRefCaller<`UE::MVVM::Private::GetAvailableBindings'::__l5::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    if (param_1 == (UStruct *)0x0) {
      pFVar15 = GetTypeName<UClass>(&local_d0);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar21);
    }
    pUVar13 = Z_Construct_UClass_UClass_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar13->_padding_)) {
      pFVar15 = GetTypeName<UClass>(&local_c0);
      pwVar21 = L"";
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      pFVar15 = GetFullNameForCastLogError<UStruct_const_>(&local_b0,param_1);
      if ((pFVar15->Data).ArrayNum != 0) {
        pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar21,pwVar18);
    }
    (*pcVar1)(param_3,param_1,&local_e0);
  }
  uVar22 = local_98._8_4_ - local_98._52_4_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if (0 < (int)uVar22) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar22,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  bVar24 = (UClass *)param_1 == param_2;
  if ((param_2 != (UClass *)0x0) && (param_1 != (UStruct *)0x0)) {
    iVar11 = (int)param_1->_padding_;
    if ((iVar11 <= (int)param_2->_padding_) &&
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar11 * 8) ==
        &param_1->_padding_)) {
      bVar10 = true;
      goto LAB_14a7507cd;
    }
  }
  bVar10 = false;
LAB_14a7507cd:
  if (param_1 != (UStruct *)0x0) {
    pUVar13 = Z_Construct_UClass_UClass_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar13->_padding_)) {
      local_110.Field = (param_1->Children).field0_0x0.DebugPtr;
      local_110.InterfaceIndex = -1;
      local_110.bIncludeSuper = true;
      local_110.bIncludeDeprecated = true;
      local_110.bIncludeInterface = false;
      local_110.Struct = param_1;
      TFieldIterator<UFunction_const_>::IterateToNext(&local_110);
      pUVar6 = (UFunction *)local_110.Field;
      while (local_110.Field = (UField *)pUVar6, pUVar6 != (UFunction *)0x0) {
        if ((pUVar6 == (UFunction *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Function",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\MVVMSubsystem.cpp"
                               ,0xcb,L""), bVar9)) {
          pcVar1 = (code *)swi(3);
          pTVar14 = (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar14;
        }
        lVar2 = pUVar6->_padding_;
        uVar22 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        if (local_98._8_4_ != local_98._52_4_) {
          puVar16 = local_60;
          if (local_58 != (undefined1 *)0x0) {
            puVar16 = local_58;
          }
          for (iVar11 = *(int *)(puVar16 +
                                (ulonglong)
                                (local_50 - 1U & uVar22 + (int)((ulonglong)lVar2 >> 0x20)) * 4);
              iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + 8 + (longlong)iVar11 * 0x10)) {
            if (*(longlong *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == lVar2)
            goto LAB_14a7508de;
          }
        }
        iVar11 = -1;
LAB_14a7508de:
        GetAvailableBinding(&local_138,pUVar6,iVar11 != -1,bVar24,bVar10,param_4);
        if (local_138.BindingName.BindingName != (FName)0x0) {
          pFVar3 = (FMVVMAvailableBinding *)(__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= &local_138) && (&local_138 < pFVar3 + __return_storage_ptr__->ArrayMax))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar1 = (code *)swi(3);
            pTVar14 = (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar14;
          }
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(FName *)(pFVar4 + (longlong)iVar11 * 0xc) = local_138.BindingName.BindingName;
          *(undefined4 *)(pFVar4 + (longlong)iVar11 * 0xc + 8) = local_138._8_4_;
        }
        local_110.Field = (UField *)pUVar6->_padding_;
        TFieldIterator<UFunction_const_>::IterateToNext(&local_110);
        param_1 = local_e8;
        pUVar6 = (UFunction *)local_110.Field;
      }
    }
  }
  piVar23 = &__return_storage_ptr__->ArrayMax;
  if (param_1 == (UStruct *)0x0) {
    local_128.Field = (FField *)0x0;
  }
  else {
    local_128.Field = param_1->ChildProperties;
  }
  local_128.InterfaceIndex = -1;
  local_128.bIncludeSuper = true;
  local_128.bIncludeDeprecated = true;
  local_128.bIncludeInterface = false;
  local_128.Struct = param_1;
  TFieldIterator<FProperty_const_>::IterateToNext(&local_128);
  pFVar7 = local_128.Field;
  do {
    local_128.Field = pFVar7;
    if (pFVar7 == (FField *)0x0) {
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98);
      return __return_storage_ptr__;
    }
    uVar22 = 0;
    if ((pFVar7 == (FField *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Property",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\MVVMSubsystem.cpp"
                            ,0xde,L""), bVar24)) {
      pcVar1 = (code *)swi(3);
      pTVar14 = (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar14;
    }
    bVar24 = IsThisNotNull(pFVar7,"FField::GetFName");
    if (bVar24) {
      local_140 = pFVar7->NamePrivate;
      uVar22 = local_140.Number;
      FVar20.Value = local_140.ComparisonIndex.Value;
    }
    else {
      FVar20.Value = 0;
      local_140.ComparisonIndex.Value = 0;
      local_140.Number = 0;
    }
    FVar8 = local_140;
    uVar12 = ::GetTypeHash(FVar20);
    if (local_98._8_4_ != local_98._52_4_) {
      puVar16 = local_60;
      if (local_58 != (undefined1 *)0x0) {
        puVar16 = local_58;
      }
      for (iVar11 = *(int *)(puVar16 + (ulonglong)(local_50 - 1U & uVar22 + uVar12) * 4);
          iVar11 != -1; iVar11 = *(int *)(local_98._0_8_ + 8 + (longlong)iVar11 * 0x10)) {
        if (*(FName *)(local_98._0_8_ + (longlong)iVar11 * 0x10) == FVar8) goto LAB_14a750afa;
      }
    }
    iVar11 = -1;
LAB_14a750afa:
    if (((pFVar7 == (FField *)0x0) || ((int)pFVar7[1]._padding_ != 1)) ||
       ((((ulonglong)pFVar7[1].ClassPrivate & 0x820000000) != 0 ||
        (((ulonglong)pFVar7[1].ClassPrivate & 0x10000004) == 0)))) {
      bVar24 = false;
      if ((pFVar7 != (FField *)0x0) && ((int)pFVar7[1]._padding_ == 1)) goto LAB_14a750b29;
LAB_14a750b49:
      cVar19 = '\0';
    }
    else {
      bVar24 = true;
LAB_14a750b29:
      if ((((ulonglong)pFVar7[1].ClassPrivate & 0x820000010) != 0) ||
         (((ulonglong)pFVar7[1].ClassPrivate & 0x10000004) == 0)) goto LAB_14a750b49;
      cVar19 = '\x01';
    }
    if ((bVar24) || (cVar19 != '\0')) {
      if ((iVar11 == -1) || (bVar24 == false)) goto LAB_14a750b7c;
      uVar17 = 1;
LAB_14a750b7e:
      bVar10 = IsThisNotNull(pFVar7,"FField::GetFName");
      if (bVar10) {
        local_f8 = pFVar7->NamePrivate;
      }
      else {
        local_f8.ComparisonIndex.Value = 0;
        local_f8.Number = 0;
      }
      local_148._0_3_ = CONCAT12(uVar17,CONCAT11(cVar19,bVar24));
      local_150 = local_f8;
    }
    else {
      if (iVar11 != -1) {
LAB_14a750b7c:
        uVar17 = 0;
        goto LAB_14a750b7e;
      }
      local_148 = 0;
      local_150.ComparisonIndex.Value = 0;
      local_150.Number = 0;
    }
    if (local_150 != (FName)0x0) {
      pFVar5 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= &local_150) &&
          (&local_150 < (FName *)((longlong)pFVar5 + (longlong)*piVar23 * 0xc))) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar1 = (code *)swi(3);
        pTVar14 = (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar14;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == *piVar23) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&__return_storage_ptr__->AllocatorInstance,piVar23);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(FName *)(pFVar4 + (longlong)iVar11 * 0xc) = local_150;
      *(undefined4 *)(pFVar4 + (longlong)iVar11 * 0xc + 8) = local_148;
    }
    local_128.Field = pFVar7->Next;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_128);
    pFVar7 = local_128.Field;
  } while( true );
}

// GetComponentPropertyPathSource @ 14a750ed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetBlueprintGeneratedClass * __cdecl
UE::MVVM::FieldPathHelper::GetComponentPropertyPathSource
          (TArray<UE::MVVM::FMVVMConstFieldVariant,TSizedDefaultAllocator<32>_> *param_1,
          UWidgetBlueprintGeneratedClass *param_2)

{
  FScriptContainerElement *pFVar1;
  FField *this;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWidgetBlueprintGeneratedClass *pUVar6;
  UClass *pUVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  pUVar6 = param_2;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UWidgetBlueprintGeneratedClass *)(*pcVar3)();
        return pUVar6;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1[lVar10 + 8] == (FScriptContainerElement)0x2) &&
          (this = *(FField **)(pFVar1 + lVar10), this != (FField *)0x0)) &&
         (((uint)(int)this->ClassPrivate->CastFlags >> 0x1a & 1) != 0)) {
        uVar2 = this[2].Owner.Container.Unknown;
        pUVar7 = Z_Construct_UClass_UUIComponent_NoRegister();
        if (pUVar7 != (UClass *)0x0) {
          iVar8 = (int)pUVar7->_padding_;
          if ((*(int *)(uVar2 + 0x38) < iVar8) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(uVar2 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) &&
             (pUVar6 = (UWidgetBlueprintGeneratedClass *)FField::GetOwnerClass(this),
             pUVar6 != (UWidgetBlueprintGeneratedClass *)0x0)) {
            pUVar7 = Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister();
            iVar8 = (int)pUVar7->_padding_;
            if ((iVar8 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
                &pUVar7->_padding_)) break;
          }
        }
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
      pUVar6 = param_2;
    } while ((int)uVar9 < iVar8);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar6;
}

// GetDelegateSignatureName @ 14a751210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl UE::MVVM::BindingHelper::GetDelegateSignatureName(FName param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  FName local_res10;
  undefined1 auStack_488 [32];
  FString local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  local_458.Base = local_438;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_458.CurPos = local_438;
  local_458.End = (wchar_t *)local_38;
  pFVar3 = ::FName::ToString(&local_res10,&local_468);
  iVar1 = (pFVar3->Data).ArrayNum;
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  if (local_458.End < local_458.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,uVar5);
  }
  if (iVar6 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar2,uVar5 * 2);
    local_458.CurPos = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_458.End < local_458.CurPos + 0x13) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,0x13);
  }
  pvVar4 = FGenericPlatformString::Memcpy(local_458.CurPos,L"__DelegateSignature",0x26);
  local_458.CurPos = (wchar_t *)((longlong)pvVar4 + 0x26);
  if (local_458.End < (wchar_t *)((longlong)pvVar4 + 0x28U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
  }
  *local_458.CurPos = L'\0';
  ::FName::FName((FName *)param_1,local_458.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return param_1;
}

// GetFieldAsContainer @ 14a751570

TValueOrError<UStruct_const_*,void> * __cdecl
UE::MVVM::FieldPathHelper::GetFieldAsContainer
          (TValueOrError<UStruct_const_*,void> *__return_storage_ptr__,
          FMVVMConstFieldVariant *param_1)

{
  ulonglong uVar1;
  FProperty *pFVar2;
  
  if (param_1->field_0x8 == '\x02') {
    pFVar2 = *(FProperty **)param_1;
  }
  else {
    if (param_1->field_0x8 != '\x01') goto LAB_14a7515c1;
    pFVar2 = BindingHelper::GetReturnProperty(*(UFunction **)param_1);
  }
  if ((pFVar2 != (FProperty *)0x0) &&
     ((uVar1 = *(ulonglong *)(pFVar2->_padding_ + 0x18), (uVar1 >> 0x1a & 1) != 0 ||
      ((uVar1 >> 0x14 & 1) != 0)))) {
    (__return_storage_ptr__->Value).TypedValue = (UStruct *)pFVar2[1]._padding_;
    (__return_storage_ptr__->Value).bIsSet = true;
    return __return_storage_ptr__;
  }
LAB_14a7515c1:
  (__return_storage_ptr__->Value).bIsSet = false;
  return __return_storage_ptr__;
}

// GetFirstArgumentProperty @ 14a7518f0

FProperty * __cdecl UE::MVVM::BindingHelper::GetFirstArgumentProperty(UFunction *param_1)

{
  EPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  TFieldIterator<FProperty> local_28;
  
  if ((param_1 == (UFunction *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x279,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FProperty *)(*pcVar2)();
    return pFVar4;
  }
  if (param_1 == (UFunction *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (FField *)param_1->_padding_;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = (UStruct *)param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  while( true ) {
    if ((FProperty *)local_28.Field == (FProperty *)0x0) {
      return (FProperty *)0x0;
    }
    EVar1 = ((FProperty *)local_28.Field)->PropertyFlags;
    if (-1 < (char)EVar1) break;
    if ((((char)EVar1 < '\0') &&
        ((EVar1 & (CPF_EditorOnly|CPF_Deprecated|CPF_ReturnParm)) == CPF_None)) &&
       (((EVar1 >> 8 & 1) == 0 || ((EVar1 & (CPF_ReferenceParm|CPF_ConstParm)) != CPF_None)))) {
      return (FProperty *)local_28.Field;
    }
    local_28.Field = (FField *)((FProperty *)local_28.Field)->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
  }
  return (FProperty *)0x0;
}

// GetGlobalCollection @ 14a751ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMVVMViewModelCollectionObject * __cdecl
UE::MVVM::Private::GetGlobalCollection(UUserWidget *param_1)

{
  longlong lVar1;
  UMVVMGameSubsystem *pUVar2;
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x180))();
  if ((lVar1 != 0) && (*(UGameInstance **)(lVar1 + 0x230) != (UGameInstance *)0x0)) {
    pUVar2 = UGameInstance::GetSubsystem<UMVVMGameSubsystem>(*(UGameInstance **)(lVar1 + 0x230));
    return (pUVar2->ViewModelCollection).field0_0x0.DebugPtr;
  }
  return (UMVVMViewModelCollectionObject *)0x0;
}

// GetGlobalCollectionViewModel @ 14a751d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMVVMViewModelBase * __cdecl
UE::MVVM::Private::GetGlobalCollectionViewModel
          (UUserWidget *param_1,FMVVMViewModelContext *param_2,
          UMVVMViewModelCollectionObject **param_3)

{
  UMVVMViewModelCollectionObject *this;
  bool bVar1;
  longlong lVar2;
  UMVVMGameSubsystem *pUVar3;
  FMVVMViewModelContext *pFVar4;
  UMVVMViewModelBase *this_00;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  FMVVMViewModelContext local_18;
  
  *param_3 = (UMVVMViewModelCollectionObject *)0x0;
  bVar1 = FMVVMViewModelContext::IsValid(param_2);
  if (((bVar1) && (lVar2 = (**(code **)(param_1->_padding_ + 0x180))(param_1), lVar2 != 0)) &&
     (*(UGameInstance **)(lVar2 + 0x230) != (UGameInstance *)0x0)) {
    pUVar3 = UGameInstance::GetSubsystem<UMVVMGameSubsystem>(*(UGameInstance **)(lVar2 + 0x230));
    this = (pUVar3->ViewModelCollection).field0_0x0.DebugPtr;
    *param_3 = this;
    if (this != (UMVVMViewModelCollectionObject *)0x0) {
      pFVar4 = FMVVMViewModelContext::FMVVMViewModelContext(&local_18,param_2);
      this_00 = UMVVMViewModelCollectionObject::FindViewModelInstance(this,pFVar4);
      if (this_00 != (UMVVMViewModelBase *)0x0) {
        local_res18[0] = (TObjectPtr<UClass>_u_0)(param_2->ContextClass).Class.field0_0x0.DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18[0].DebugPtr != (UClass *)0x0)) {
          GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
        }
        bVar1 = UObjectBaseUtility::IsA<TSubclassOf<UMVVMViewModelBase>_>
                          ((UObjectBaseUtility *)this_00,
                           (TSubclassOf<UMVVMViewModelBase>)local_res18);
        if (!bVar1) {
          `UE::MVVM::Private::GetGlobalCollectionViewModel'::__l17::<lambda_1>::operator()
                    (local_res18);
        }
        return this_00;
      }
    }
  }
  return (UMVVMViewModelBase *)0x0;
}

// GetMostUpToDateStruct @ 14a751ea0

UStruct * __cdecl UE::MVVM::FieldPathHelper::Private::GetMostUpToDateStruct(UStruct *param_1)

{
  return param_1;
}

// GetNotifyBindingInfoFromFieldPath @ 14a751ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText> * __cdecl
UE::MVVM::FieldPathHelper::GetNotifyBindingInfoFromFieldPath
          (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
           *__return_storage_ptr__,UClass *param_1,
          TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FField *this;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FText *pFVar7;
  FMVVMConstFieldVariant *pFVar8;
  UClass *pUVar9;
  TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText> *pTVar10;
  UFunction *pUVar11;
  UClass *pUVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  char cVar19;
  undefined1 auStack_268 [32];
  char local_248;
  int local_244;
  FName local_240;
  FField *local_238;
  undefined8 uStack_230;
  UClass *local_228;
  FName FStack_220;
  longlong local_218;
  UClass *local_210;
  TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  FName local_1c8;
  FMVVMAvailableBinding local_1c0;
  FText local_1b0;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FField *local_168 [2];
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  UFunction *local_c8;
  undefined8 uStack_c0;
  FTextFormat local_b8;
  FTextFormat local_a8;
  FText local_98;
  FText local_88;
  FTextFormat local_78;
  FTextFormat local_68;
  TValueOrError<UStruct_*,FText> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_210 = param_1;
  local_208 = param_2;
  if (param_1 == (UClass *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_190,L"MVVMFieldPathHelper",L"AccessorClassNull",
                        L"The accessor class is null.");
    FText::FText((FText *)__return_storage_ptr__,pFVar7);
    local_118.TextData.Reference = local_190.TextData.Reference;
    goto LAB_14a75270c;
  }
  iVar16 = param_2->ArrayNum;
  if (iVar16 == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_180,L"MVVMFieldPathHelper",L"FieldPathEmpty",
                        L"The field path is empty.");
    FText::FText((FText *)__return_storage_ptr__,pFVar7);
    local_118.TextData.Reference = local_180.TextData.Reference;
    goto LAB_14a75270c;
  }
  pFVar8 = TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int>::operator[](param_2,0);
  pUVar9 = (UClass *)0x0;
  if (pFVar8->field_0x8 == '\x02') {
    if (*(FField **)pFVar8 != (FField *)0x0) {
      pUVar9 = (UClass *)FField::GetOwnerStruct(*(FField **)pFVar8);
    }
LAB_14a751fd3:
    if (pUVar9 != (UClass *)0x0) {
      iVar18 = (int)pUVar9->_padding_;
      if (((int)param_1->_padding_ < iVar18) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar18 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        iVar18 = iVar16 + -1;
        local_228 = (UClass *)0x0;
        FStack_220.ComparisonIndex.Value = 0;
        FStack_220.Number = 0;
        local_218 = CONCAT44(local_218._4_4_,0xffffffff);
        local_248 = '\0';
        if (-1 < iVar18) {
          iVar16 = iVar16 + -2;
          do {
            pUVar9 = (UClass *)0x0;
            local_244 = iVar16;
            pFVar8 = TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int>::operator[]
                               (param_2,iVar18);
            this = *(FField **)pFVar8;
            uStack_230 = *(undefined8 *)&pFVar8->field_0x8;
            cVar19 = (char)*(undefined4 *)&pFVar8->field_0x8;
            local_238 = this;
            if ((cVar19 == '\0') || (this == (FField *)0x0)) {
              pFVar7 = FText::AsLocalizable_Advanced_LocText
                                 (&local_118,L"MVVMFieldPathHelper",L"FieldIsEmpty",
                                  L"The field at index \'{0}\' is empty.");
              pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar7,Default);
              pFVar7 = FText::Format<int>(&local_128,pFVar15,iVar18);
              FText::FText((FText *)__return_storage_ptr__,pFVar7);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_128.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
              }
              goto LAB_14a752712;
            }
            if (cVar19 == '\x02') {
              pUVar9 = (UClass *)FField::GetOwnerStruct(this);
LAB_14a75207d:
              if (pUVar9 == (UClass *)0x0) goto LAB_14a752085;
            }
            else {
              if (cVar19 == '\x01') {
                pUVar9 = UField::GetOwnerClass((UField *)this);
                goto LAB_14a75207d;
              }
LAB_14a752085:
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldOwner",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMFieldPathHelper.cpp"
                                 ,0x14d,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                           *)(*pcVar3)();
                return pTVar10;
              }
            }
            if (iVar18 != 0) {
              pFVar8 = TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int>::operator[]
                                 (local_208,iVar16);
              pUVar11 = *(UFunction **)pFVar8;
              uStack_c0 = *(undefined8 *)&pFVar8->field_0x8;
              cVar6 = (char)*(undefined4 *)&pFVar8->field_0x8;
              local_c8 = pUVar11;
              if (cVar6 == '\x02') {
LAB_14a7520fe:
                if (pUVar11 != (UFunction *)0x0) {
                  Private::FindContainer(&local_58,(FProperty *)pUVar11);
                  uVar17 = (ulonglong)local_58.Variant.TypeIndex;
                  if ((2 < uVar17) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                         ,0x12f,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                               *)(*pcVar3)();
                    return pTVar10;
                  }
                  if (*(char *)((longlong)
                                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,UStruct*___ptr64,TValueOrError<class_UStruct*___ptr64,class_FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                                 ::__l2::bIsSameType + uVar17) != '\0') {
                    if ((local_58.Variant.TypeIndex != 1) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index == TypeIndex",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                           ,0x97,L""), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                                 *)(*pcVar3)();
                      return pTVar10;
                    }
                    FText::FText(&local_1b0,(FText *)&local_58);
                    if ((2 < (ulonglong)local_58.Variant.TypeIndex) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                           ,0xd4,L""), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                                 *)(*pcVar3)();
                      return pTVar10;
                    }
                    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
                    local_58.Variant.TypeIndex = 2;
                    FText::FText((FText *)__return_storage_ptr__,&local_1b0);
                    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
                    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
                    }
                    uVar17 = (ulonglong)local_58.Variant.TypeIndex;
                    if ((2 < uVar17) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                           ,0xd4,L""), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                                 *)(*pcVar3)();
                      return pTVar10;
                    }
                    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[uVar17])(&local_58);
                    return __return_storage_ptr__;
                  }
                  if ((local_58.Variant.TypeIndex != 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index == TypeIndex",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                         ,0x97,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                               *)(*pcVar3)();
                    return pTVar10;
                  }
                  param_1 = (UClass *)local_58.Variant._padding_;
                  uVar17 = (ulonglong)local_58.Variant.TypeIndex;
                  if ((2 < uVar17) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                         ,0xd4,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    pTVar10 = (TValueOrError<UE::MVVM::FieldPathHelper::FParsedNotifyBindingInfo,FText>
                               *)(*pcVar3)();
                    return pTVar10;
                  }
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UStruct*___ptr64,TValueOrError<UStruct*___ptr64,FText>::FWrapErrorType,TValueOrError<class_UStruct*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar17])(&local_58);
                  iVar16 = local_244;
                  if (param_1 != (UClass *)0x0) goto LAB_14a75220e;
                  pFVar7 = FText::AsLocalizable_Advanced_LocText
                                     (&local_148,L"MVVMFieldPathHelper",L"InvalidFieldParent",
                                      L"The field \'{0}\' is not a container.");
                  pFVar15 = FTextFormat::FTextFormat(&local_b8,pFVar7,Default);
                  pFVar7 = FText::Format<int>(&local_158,pFVar15,iVar18 + -1);
                  FText::FText((FText *)__return_storage_ptr__,pFVar7);
                  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
                  local_118.TextData.Reference = local_148.TextData.Reference;
                  if (local_158.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
                    local_118.TextData.Reference = local_148.TextData.Reference;
                  }
                  goto LAB_14a752712;
                }
              }
              else if ((cVar6 == '\x01') && (pUVar11 != (UFunction *)0x0)) {
                pUVar11 = (UFunction *)BindingHelper::GetReturnProperty(pUVar11);
                goto LAB_14a7520fe;
              }
              pFVar7 = FText::AsLocalizable_Advanced_LocText
                                 (&local_d8,L"MVVMFieldPathHelper",L"InvalidParentProperty",
                                  L"The field at index \'{0}\' has an invalid parent.");
              pFVar15 = FTextFormat::FTextFormat(&local_a8,pFVar7,Default);
              pFVar7 = FText::Format<int>(&local_f8,pFVar15,iVar18);
              FText::FText((FText *)__return_storage_ptr__,pFVar7);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              local_118.TextData.Reference = local_d8.TextData.Reference;
              if (local_f8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
                local_118.TextData.Reference = local_d8.TextData.Reference;
              }
              goto LAB_14a752712;
            }
LAB_14a75220e:
            iVar1 = (int)param_1->_padding_;
            iVar2 = (int)pUVar9->_padding_;
            if ((iVar2 < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
                &param_1->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (((pUVar9 == (UClass *)0x0) || (iVar1 < iVar2)) ||
               ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar9->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((!bVar5) && (!bVar4)) {
              local_1c8 = (FName)param_1->_padding_;
              ::FName::ToString(&local_1c8,&local_1a0);
              pFVar7 = FText::FromString(&local_98,&local_1a0);
              if (cVar19 == '\x02') {
                bVar5 = IsThisNotNull(this,"FField::GetFName");
                if (bVar5) {
                  local_240 = this->NamePrivate;
                }
                else {
                  local_200 = 0;
                  local_240.ComparisonIndex.Value = 0;
                  local_240.Number = 0;
                }
              }
              else if (cVar19 == '\x01') {
                local_240 = (FName)this->Next;
              }
              else {
                local_240.ComparisonIndex.Value = 0;
                local_240.Number = 0;
              }
              pFVar13 = FText::FromName(&local_88,&local_240);
              pFVar14 = FText::AsLocalizable_Advanced_LocText
                                  (&local_138,L"MVVMFieldPathHelper",L"FieldDoesNotExistInStruct",
                                   L"The field \'{0}\' does not exist in the struct \'{1}\'.");
              pFVar15 = FTextFormat::FTextFormat(&local_78,pFVar14,Default);
              pFVar7 = FText::Format<FText,FText>(&local_e8,pFVar15,pFVar13,pFVar7);
              FText::FText((FText *)__return_storage_ptr__,pFVar7);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_e8.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
              }
              if (local_138.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
              }
              if (local_1a0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
            if (pUVar9 == (UClass *)0x0) {
LAB_14a752346:
              param_1 = local_210;
              if (local_248 != '\0') {
                local_1e0 = 0;
                uStack_1d8 = 0;
                uStack_1cc = 0;
                local_1d0 = 0xffffffff;
                local_228 = (UClass *)0x0;
                FStack_220.ComparisonIndex.Value = 0;
                FStack_220.Number = 0;
                local_218 = 0xffffffff;
              }
            }
            else {
              pUVar12 = Z_Construct_UClass_UClass_NoRegister();
              iVar1 = (int)pUVar12->_padding_;
              if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar12->_padding_)) goto LAB_14a752346;
              pUVar12 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
              bVar5 = UClass::ImplementsInterface(pUVar9,pUVar12);
              param_1 = local_210;
              if (!bVar5) goto LAB_14a752346;
              local_168[0] = local_238;
              local_168[1] = (FField *)uStack_230;
              MVVM::Private::GetAvailableBinding
                        (&local_1c0,(FMVVMConstFieldVariant *)local_168,local_210,false);
              if ((local_1c0.BindingName.BindingName == (FName)0x0) ||
                 (local_1c0.bHasNotify == false)) {
                if ((local_248 != '\0') && (iVar18 != 0)) {
                  local_1e8 = 0xffffffff;
                  local_1f8 = 0;
                  uStack_1f0 = 0;
                  FStack_220.ComparisonIndex.Value = 0;
                  FStack_220.Number = 0;
                  uStack_1e4 = 0;
                  local_218 = 0xffffffff;
                  local_228 = (UClass *)0x0;
                }
              }
              else if (local_248 == '\0') {
                FStack_220 = local_1c0.BindingName.BindingName;
                local_218 = CONCAT44(local_218._4_4_,iVar16);
                local_248 = '\x01';
                local_228 = pUVar9;
              }
            }
            iVar16 = iVar16 + -1;
            iVar18 = iVar18 + -1;
            param_2 = local_208;
          } while (-1 < iVar18);
        }
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_228;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)FStack_220;
        (__return_storage_ptr__->Variant)._padding_ = local_218;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
    }
  }
  else if (pFVar8->field_0x8 == '\x01') {
    if (*(UField **)pFVar8 != (UField *)0x0) {
      pUVar9 = UField::GetOwnerClass(*(UField **)pFVar8);
    }
    goto LAB_14a751fd3;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_108,L"MVVMFieldPathHelper",L"FieldPathDoesntStartWithAccessor",
                      L"Field path that doesn\'t start with the accessor is not supported.");
  FText::FText((FText *)__return_storage_ptr__,pFVar7);
  local_118.TextData.Reference = local_108.TextData.Reference;
LAB_14a75270c:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
LAB_14a752712:
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetReturnProperty @ 14a7542f0

FProperty * __cdecl UE::MVVM::BindingHelper::GetReturnProperty(UFunction *param_1)

{
  EPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  TFieldIterator<FProperty> local_28;
  
  if ((param_1 == (UFunction *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x24b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FProperty *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = UFunction::GetReturnProperty(param_1);
  if ((param_1->FunctionFlags >> 0x16 & 1) != 0) {
    local_28.Field = (FField *)param_1->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    while (((FProperty *)local_28.Field != (FProperty *)0x0 &&
           (EVar1 = ((FProperty *)local_28.Field)->PropertyFlags, (char)EVar1 < '\0'))) {
      if (((EVar1 >> 8 & 1) != 0) && ((EVar1 & (CPF_ReferenceParm|CPF_ConstParm)) == CPF_None)) {
        if (pFVar4 == (FProperty *)0x0) {
          if ((EVar1 & (CPF_EditorOnly|CPF_Deprecated)) == CPF_None) {
            pFVar4 = (FProperty *)local_28.Field;
          }
        }
        else if (pFVar4 != (FProperty *)local_28.Field) {
          return (FProperty *)0x0;
        }
      }
      local_28.Field = (FField *)((FProperty *)local_28.Field)->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
    }
  }
  return pFVar4;
}

// GetRuntimeReturnProperty @ 14a754400

FProperty * __cdecl UE::MVVM::BindingHelper::Private::GetRuntimeReturnProperty(UFunction *param_1)

{
  EPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  TFieldIterator<FProperty> local_28;
  
  if ((param_1 == (UFunction *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                         ,0x2ad,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FProperty *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = UFunction::GetReturnProperty(param_1);
  if ((pFVar4 == (FProperty *)0x0) && ((param_1->FunctionFlags >> 0x16 & 1) != 0)) {
    local_28.Field = (FField *)param_1->_padding_;
    local_28.InterfaceIndex = -1;
    local_28.bIncludeSuper = true;
    local_28.bIncludeDeprecated = true;
    local_28.bIncludeInterface = false;
    local_28.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    while (((FProperty *)local_28.Field != (FProperty *)0x0 &&
           (EVar1 = ((FProperty *)local_28.Field)->PropertyFlags, (char)EVar1 < '\0'))) {
      if (((EVar1 >> 8 & 1) != 0) &&
         ((EVar1 & (CPF_EditorOnly|CPF_Deprecated|CPF_ReferenceParm|CPF_ConstParm)) == CPF_None)) {
        return (FProperty *)local_28.Field;
      }
      local_28.Field = (FField *)((FProperty *)local_28.Field)->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
    }
  }
  return pFVar4;
}

// GetTypeHash @ 14a754840

uint __cdecl UE::MVVM::Private::GetTypeHash(FViewAndBinding *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->View).ObjectKey.ObjectSerialNumber;
  uVar4 = (param_1->Binding).Index;
  uVar3 = (param_1->View).ObjectKey.ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar5 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar3 = ((uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar2 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar4 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar1 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 << 10;
  return (uVar2 - uVar4) - uVar1 ^ uVar4 >> 0xf;
}

// IsBackwardBinding @ 14a757a80

bool __cdecl UE::MVVM::IsBackwardBinding(EMVVMBindingMode param_1)

{
  return OneWayToDestination < param_1;
}

// IsForwardBinding @ 14a7599b0

bool __cdecl UE::MVVM::IsForwardBinding(EMVVMBindingMode param_1)

{
  return param_1 < OneTimeToSource;
}

// IsFunctionVirtual @ 14a7599c0

bool __cdecl UE::MVVM::Private::IsFunctionVirtual(UFunction *param_1)

{
  return (param_1->FunctionFlags & (FUNC_Static|FUNC_Final)) == FUNC_None;
}

// IsNumericConversionRequired @ 14a759b30

bool __cdecl
UE::MVVM::BindingHelper::Private::IsNumericConversionRequired(FProperty *param_1,FProperty *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  FProperty *pFVar7;
  FProperty *pFVar8;
  
  pFVar7 = (FProperty *)0x0;
  if ((param_1 == (FProperty *)0x0) ||
     (pFVar8 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x18 & 1) == 0)) {
    pFVar8 = pFVar7;
  }
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    pFVar7 = param_2;
  }
  if ((pFVar8 == (FProperty *)0x0) || (pFVar7 == (FProperty *)0x0)) {
    return false;
  }
  cVar4 = (**(code **)(param_2->_padding_ + 0x1a0))(param_2,param_1);
  cVar5 = (**(code **)(pFVar8->_padding_ + 0x1d0))(pFVar8);
  if (cVar5 == '\0') {
LAB_14a759bc9:
    bVar1 = false;
  }
  else {
    cVar5 = (**(code **)(pFVar7->_padding_ + 0x1d0))(pFVar7);
    if (cVar5 == '\0') goto LAB_14a759bc9;
    bVar1 = true;
  }
  cVar5 = (**(code **)(pFVar8->_padding_ + 0x1d8))(pFVar8);
  if (cVar5 == '\0') {
LAB_14a759bf6:
    bVar2 = false;
  }
  else {
    cVar5 = (**(code **)(pFVar7->_padding_ + 0x1d8))(pFVar7);
    if (cVar5 == '\0') goto LAB_14a759bf6;
    bVar2 = true;
  }
  lVar6 = (**(code **)(pFVar8->_padding_ + 0x1e0))(pFVar8);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(pFVar7->_padding_ + 0x1e0))(pFVar7);
    bVar3 = false;
    if (lVar6 == 0) goto LAB_14a759c1d;
  }
  bVar3 = true;
LAB_14a759c1d:
  if ((cVar4 == '\0') && ((bVar1 || ((bVar2 && (!bVar3)))))) {
    return true;
  }
  return false;
}

// IsObjectArrayPropertyCompatible @ 14a759c80

bool __cdecl
UE::MVVM::BindingHelper::Private::IsObjectArrayPropertyCompatible
          (FProperty *param_1,FProperty *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_1 = (FProperty *)0x0;
  }
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    param_2 = (FProperty *)0x0;
  }
  if ((param_1 != (FProperty *)0x0) && (param_2 != (FProperty *)0x0)) {
    plVar5 = (longlong *)param_1[1]._padding_;
    lVar4 = param_2[1]._padding_;
    if ((plVar5 == (longlong *)0x0) || ((*(uint *)(plVar5[1] + 0x18) >> 0x1a & 1) == 0)) {
      plVar5 = (longlong *)0x0;
    }
    if ((lVar4 == 0) || ((*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) >> 0x1a & 1) == 0)) {
      lVar4 = 0;
    }
    if ((((plVar5 != (longlong *)0x0) && (lVar4 != 0)) && (lVar1 = plVar5[0xe], lVar1 != 0)) &&
       (lVar2 = *(longlong *)(lVar4 + 0x70), lVar2 != 0)) {
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        if ((plVar5[1] != *(longlong *)(lVar4 + 8)) &&
           (cVar3 = (**(code **)(*plVar5 + 0x220))(plVar5), cVar3 == '\0')) {
          return false;
        }
        return true;
      }
    }
  }
  return false;
}

// IsObjectPropertyCompatible @ 14a759d60

bool __cdecl
UE::MVVM::BindingHelper::Private::IsObjectPropertyCompatible(FProperty *param_1,FProperty *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
    param_1 = (FProperty *)0x0;
  }
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
    param_2 = (FProperty *)0x0;
  }
  if ((((param_1 != (FProperty *)0x0) && (param_2 != (FProperty *)0x0)) &&
      (lVar1 = param_1[1]._padding_, lVar1 != 0)) && (lVar2 = param_2[1]._padding_, lVar2 != 0)) {
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if ((param_1->_padding_ != param_2->_padding_) &&
         (cVar3 = (**(code **)(param_1->_padding_ + 0x220))(param_1), cVar3 == '\0')) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// IsOneTimeBinding @ 14a759e00

bool __cdecl UE::MVVM::IsOneTimeBinding(EMVVMBindingMode param_1)

{
  if ((param_1 != OneTimeToDestination) && (param_1 != OneTimeToSource)) {
    return false;
  }
  return true;
}

// IsValidArgumentProperty @ 14a759f70

bool __cdecl UE::MVVM::BindingHelper::IsValidArgumentProperty(FProperty *param_1)

{
  EPropertyFlags EVar1;
  
  EVar1 = param_1->PropertyFlags;
  if ((((char)EVar1 < '\0') &&
      ((EVar1 & (CPF_EditorOnly|CPF_Deprecated|CPF_ReturnParm)) == CPF_None)) &&
     (((EVar1 >> 8 & 1) == 0 || ((EVar1 & (CPF_ReferenceParm|CPF_ConstParm)) != CPF_None)))) {
    return true;
  }
  return false;
}

// IsValidCommon @ 14a759fb0

bool __cdecl UE::MVVM::BindingHelper::Private::IsValidCommon(UFunction *param_1)

{
  if (((param_1 != (UFunction *)0x0) &&
      ((param_1->FunctionFlags & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None)) &&
     ((param_1->FunctionFlags >> 0x1a & 1) != 0)) {
    return true;
  }
  return false;
}

// IsValidForComplexRuntimeConversion @ 14a759fe0

bool __cdecl UE::MVVM::BindingHelper::IsValidForComplexRuntimeConversion(UFunction *param_1)

{
  EFunctionFlags EVar1;
  FProperty *pFVar2;
  FProperty *pFVar3;
  
  if (((((param_1 != (UFunction *)0x0) &&
        (EVar1 = param_1->FunctionFlags,
        (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None)) && ((EVar1 >> 0x1a & 1) != 0)
       ) && (((EVar1 >> 0xd & 1) != 0 ||
             ((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) == (FUNC_Const|FUNC_BlueprintPure))))) &&
     (param_1->NumParms < 2)) {
    pFVar2 = GetReturnProperty(param_1);
    pFVar3 = GetFirstArgumentProperty(param_1);
    if ((pFVar2 != (FProperty *)0x0) && (pFVar3 == (FProperty *)0x0)) {
      return true;
    }
  }
  return false;
}

// IsValidForDelegateSignatureBinding @ 14a75a060

bool __cdecl UE::MVVM::BindingHelper::IsValidForDelegateSignatureBinding(UFunction *param_1)

{
  EFunctionFlags EVar1;
  
  if ((((param_1 != (UFunction *)0x0) &&
       (EVar1 = param_1->FunctionFlags, (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None
       )) && ((EVar1 >> 0x1a & 1) != 0)) &&
     ((EVar1 & (FUNC_BlueprintEvent|FUNC_Delegate)) != FUNC_None)) {
    return true;
  }
  return false;
}

// IsValidForDestinationBinding @ 14a75a090

bool __cdecl UE::MVVM::BindingHelper::IsValidForDestinationBinding(FProperty *param_1)

{
  if ((((param_1 != (FProperty *)0x0) && (param_1->ArrayDim == 1)) &&
      ((param_1->PropertyFlags & (CPF_EditorOnly|CPF_Deprecated|CPF_BlueprintReadOnly)) == CPF_None)
      ) && ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible)) != CPF_None))
  {
    return true;
  }
  return false;
}

// IsValidForDestinationBinding @ 14a75a0d0

bool __cdecl UE::MVVM::BindingHelper::IsValidForDestinationBinding(UFunction *param_1)

{
  EFunctionFlags EVar1;
  FProperty *pFVar2;
  
  if ((((param_1 != (UFunction *)0x0) &&
       (EVar1 = param_1->FunctionFlags, (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None
       )) && ((EVar1 >> 0x1a & 1) != 0)) &&
     (((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) == FUNC_None && (param_1->NumParms == '\x01')))) {
    pFVar2 = GetFirstArgumentProperty(param_1);
    if (pFVar2 != (FProperty *)0x0) {
      return true;
    }
  }
  return false;
}

// IsValidForDestinationBinding @ 14a75a120

bool __cdecl UE::MVVM::BindingHelper::IsValidForDestinationBinding(FMVVMConstFieldVariant *param_1)

{
  EFunctionFlags EVar1;
  longlong lVar2;
  UFunction *pUVar3;
  FProperty *pFVar4;
  
  if (param_1->field_0x8 == '\x02') {
    lVar2 = *(longlong *)param_1;
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x30) == 1)) &&
       (((*(ulonglong *)(lVar2 + 0x38) & 0x820000010) == 0 &&
        ((*(ulonglong *)(lVar2 + 0x38) & 0x10000004) != 0)))) {
      return true;
    }
  }
  else if (((((param_1->field_0x8 == '\x01') &&
             (pUVar3 = *(UFunction **)param_1, pUVar3 != (UFunction *)0x0)) &&
            (EVar1 = pUVar3->FunctionFlags,
            (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None)) &&
           (((EVar1 >> 0x1a & 1) != 0 && ((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) == FUNC_None))))
          && (pUVar3->NumParms == '\x01')) {
    pFVar4 = GetFirstArgumentProperty(pUVar3);
    if (pFVar4 != (FProperty *)0x0) {
      return true;
    }
  }
  return false;
}

// IsValidForEventBinding @ 14a75a1b0

bool __cdecl UE::MVVM::BindingHelper::IsValidForEventBinding(UFunction *param_1)

{
  EFunctionFlags EVar1;
  
  if ((((param_1 != (UFunction *)0x0) &&
       (EVar1 = param_1->FunctionFlags, (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None
       )) && ((EVar1 >> 0x1a & 1) != 0)) && ((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) == FUNC_None)
     ) {
    return true;
  }
  return false;
}

// IsValidForEventBinding @ 14a75a1e0

bool __cdecl UE::MVVM::BindingHelper::IsValidForEventBinding(FMVVMConstFieldVariant *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1->field_0x8 == '\x02') {
    lVar2 = *(longlong *)param_1;
    if ((((lVar2 == 0) || (*(int *)(lVar2 + 0x30) != 1)) ||
        ((*(ulonglong *)(lVar2 + 0x38) & 0x820000010) != 0)) ||
       ((*(ulonglong *)(lVar2 + 0x38) & 0x10000004) == 0)) {
      return false;
    }
  }
  else {
    if (param_1->field_0x8 != '\x01') {
      return false;
    }
    if (*(longlong *)param_1 == 0) {
      return false;
    }
    uVar1 = *(uint *)(*(longlong *)param_1 + 0xb0);
    if ((uVar1 & 0x20000840) != 0) {
      return false;
    }
    if ((uVar1 >> 0x1a & 1) == 0) {
      return false;
    }
    if ((uVar1 & 0x50000000) != 0) {
      return false;
    }
  }
  return true;
}

// IsValidForSimpleRuntimeConversion @ 14a75a250

bool __cdecl UE::MVVM::BindingHelper::IsValidForSimpleRuntimeConversion(UFunction *param_1)

{
  EFunctionFlags EVar1;
  FProperty *pFVar2;
  FProperty *pFVar3;
  
  if (((((param_1 != (UFunction *)0x0) &&
        (EVar1 = param_1->FunctionFlags,
        (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None)) && ((EVar1 >> 0x1a & 1) != 0)
       ) && (((EVar1 >> 0xd & 1) != 0 ||
             ((EVar1 & (FUNC_Const|FUNC_BlueprintPure)) == (FUNC_Const|FUNC_BlueprintPure))))) &&
     (param_1->NumParms < 3)) {
    pFVar2 = GetReturnProperty(param_1);
    pFVar3 = GetFirstArgumentProperty(param_1);
    if (((pFVar2 != (FProperty *)0x0) && (pFVar3 != (FProperty *)0x0)) && (pFVar2 != pFVar3)) {
      return true;
    }
    return false;
  }
  return false;
}

// IsValidForSourceBinding @ 14a75a2e0

bool __cdecl UE::MVVM::BindingHelper::IsValidForSourceBinding(FProperty *param_1)

{
  if ((((param_1 != (FProperty *)0x0) && (param_1->ArrayDim == 1)) &&
      ((param_1->PropertyFlags & (CPF_EditorOnly|CPF_Deprecated)) == CPF_None)) &&
     ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible)) != CPF_None)) {
    return true;
  }
  return false;
}

// IsValidForSourceBinding @ 14a75a320

bool __cdecl UE::MVVM::BindingHelper::IsValidForSourceBinding(UFunction *param_1)

{
  EFunctionFlags EVar1;
  FProperty *pFVar2;
  
  if ((((param_1 != (UFunction *)0x0) &&
       (EVar1 = param_1->FunctionFlags, (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None
       )) && ((EVar1 >> 0x1a & 1) != 0)) &&
     (((EVar1 >> 0x1e & 1) != 0 && (param_1->NumParms == '\x01')))) {
    pFVar2 = GetReturnProperty(param_1);
    if (pFVar2 != (FProperty *)0x0) {
      return true;
    }
  }
  return false;
}

// IsValidForSourceBinding @ 14a75a370

bool __cdecl UE::MVVM::BindingHelper::IsValidForSourceBinding(FMVVMConstFieldVariant *param_1)

{
  EFunctionFlags EVar1;
  longlong lVar2;
  UFunction *pUVar3;
  FProperty *pFVar4;
  
  if (param_1->field_0x8 == '\x02') {
    lVar2 = *(longlong *)param_1;
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x30) == 1)) &&
       (((*(ulonglong *)(lVar2 + 0x38) & 0x820000000) == 0 &&
        ((*(ulonglong *)(lVar2 + 0x38) & 0x10000004) != 0)))) {
      return true;
    }
  }
  else if (((((param_1->field_0x8 == '\x01') &&
             (pUVar3 = *(UFunction **)param_1, pUVar3 != (UFunction *)0x0)) &&
            (EVar1 = pUVar3->FunctionFlags,
            (EVar1 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) == FUNC_None)) &&
           (((EVar1 >> 0x1a & 1) != 0 && ((EVar1 >> 0x1e & 1) != 0)))) &&
          (pUVar3->NumParms == '\x01')) {
    pFVar4 = GetReturnProperty(pUVar3);
    if (pFVar4 != (FProperty *)0x0) {
      return true;
    }
  }
  return false;
}

// OnMessageLogLinkActivated_Binding @ 14a75b8b0

void __cdecl
UE::MVVM::Private::OnMessageLogLinkActivated_Binding
          (TWeakObjectPtr<UUserWidget_const_,FWeakObjectPtr> param_1,FGuid *param_2)

{
  return;
}

// OnMessageLogLinkActivated_UObjectToken @ 14a75b8c0

void __cdecl
UE::MVVM::Private::OnMessageLogLinkActivated_UObjectToken(TSharedRef<IMessageToken,1> *param_1)

{
  return;
}

// ToString @ 14a763890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::MVVM::FieldPathHelper::ToString
          (FString *__return_storage_ptr__,
          TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> *param_1)

{
  int iVar1;
  FMVVMConstFieldVariant *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  longlong local_490;
  FName local_488;
  FName local_480;
  undefined8 local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_468.Base = local_448;
  iVar1 = param_1->ArrayNum;
  local_468.End = (wchar_t *)local_48;
  uVar9 = 0;
  local_468.CurPos = local_448;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  uVar10 = uVar9;
  if (0 < iVar1) {
    do {
      uVar8 = (uint)uVar9;
      if (uVar8 != 0) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L".",2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
      }
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_490 = (longlong)iVar1;
        local_498 = (longlong)(int)uVar8;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar2 = param_1->DataPtr;
      if ((&pFVar2->field_0x8)[uVar10] == '\x02') {
        pvVar6 = *(void **)(&pFVar2->field_0x0 + uVar10);
        if (pvVar6 == (void *)0x0) {
          local_478 = 0;
          local_488.ComparisonIndex.Value = 0;
          local_488.Number = 0;
        }
        else {
          bVar4 = IsThisNotNull(pvVar6,"FField::GetFName");
          if (bVar4) {
            local_488 = *(FName *)((longlong)pvVar6 + 0x20);
            local_480 = local_488;
          }
          else {
            local_480.ComparisonIndex.Value = 0;
            local_480.Number = 0;
            local_488.ComparisonIndex.Value = 0;
            local_488.Number = 0;
          }
        }
      }
      else if ((&pFVar2->field_0x8)[uVar10] == '\x01') {
        if (*(longlong *)(&pFVar2->field_0x0 + uVar10) == 0) {
          local_488.ComparisonIndex.Value = 0;
          local_488.Number = 0;
        }
        else {
          local_488 = *(FName *)(*(longlong *)(&pFVar2->field_0x0 + uVar10) + 0x18);
        }
      }
      else {
        local_488.ComparisonIndex.Value = 0;
        local_488.Number = 0;
      }
      ::FName::AppendString(&local_488,&local_468);
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < iVar1);
  }
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_468.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return __return_storage_ptr__;
}

// ToString @ 14a763ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::MVVM::FieldPathHelper::ToString
          (FString *__return_storage_ptr__,
          TArrayView<UE::MVVM::FMVVMFieldVariant_const_,int> *param_1)

{
  int iVar1;
  FMVVMFieldVariant *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  longlong local_490;
  FName local_488;
  FName local_480;
  undefined8 local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4b8;
  local_468.Base = local_448;
  iVar1 = param_1->ArrayNum;
  local_468.End = (wchar_t *)local_48;
  uVar9 = 0;
  local_468.CurPos = local_448;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  uVar10 = uVar9;
  if (0 < iVar1) {
    do {
      uVar8 = (uint)uVar9;
      if (uVar8 != 0) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_468.CurPos,L".",2);
        local_468.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
      }
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_490 = (longlong)iVar1;
        local_498 = (longlong)(int)uVar8;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar2 = param_1->DataPtr;
      if ((&pFVar2->field_0x8)[uVar10] == '\x02') {
        pvVar6 = *(void **)(&pFVar2->field_0x0 + uVar10);
        if (pvVar6 == (void *)0x0) {
          local_478 = 0;
          local_488.ComparisonIndex.Value = 0;
          local_488.Number = 0;
        }
        else {
          bVar4 = IsThisNotNull(pvVar6,"FField::GetFName");
          if (bVar4) {
            local_488 = *(FName *)((longlong)pvVar6 + 0x20);
            local_480 = local_488;
          }
          else {
            local_480.ComparisonIndex.Value = 0;
            local_480.Number = 0;
            local_488.ComparisonIndex.Value = 0;
            local_488.Number = 0;
          }
        }
      }
      else if ((&pFVar2->field_0x8)[uVar10] == '\x01') {
        if (*(longlong *)(&pFVar2->field_0x0 + uVar10) == 0) {
          local_488.ComparisonIndex.Value = 0;
          local_488.Number = 0;
        }
        else {
          local_488 = *(FName *)(*(longlong *)(&pFVar2->field_0x0 + uVar10) + 0x18);
        }
      }
      else {
        local_488.ComparisonIndex.Value = 0;
        local_488.Number = 0;
      }
      ::FName::AppendString(&local_488,&local_468);
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar8 + 1) < iVar1);
  }
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_468.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return __return_storage_ptr__;
}

// ToText @ 14a764820

FText * __cdecl
UE::MVVM::FieldPathHelper::ToText
          (FText *__return_storage_ptr__,
          TArrayView<UE::MVVM::FMVVMConstFieldVariant_const_,int> *param_1)

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FMVVMConstFieldVariant *pFVar7;
  FMVVMConstFieldVariant *pFVar8;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  FText local_38;
  
  uVar1 = param_1->ArrayNum;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
  pFVar7 = param_1->DataPtr;
  pFVar8 = pFVar7 + (int)uVar1;
  while( true ) {
    if (pFVar7 == pFVar8) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MVVMFieldPathHelper",L"PropertyPathDelim",L".");
      FText::Join(__return_storage_ptr__,pFVar6,&local_58);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      DestructItems<FText,int>((FText *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((FText *)local_58.AllocatorInstance.Data != (FText *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (pFVar7->field_0x8 == '\x02') {
      pvVar2 = *(void **)pFVar7;
      if (pvVar2 == (void *)0x0) {
        local_res20 = 0;
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        bVar4 = IsThisNotNull(pvVar2,"FField::GetFName");
        if (bVar4) {
          local_res10 = *(FName *)((longlong)pvVar2 + 0x20);
          local_res18 = local_res10;
        }
        else {
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
          local_res10.ComparisonIndex.Value = 0;
          local_res10.Number = 0;
        }
      }
    }
    else if (pFVar7->field_0x8 == '\x01') {
      if (*(longlong *)pFVar7 == 0) {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        local_res10 = *(FName *)(*(longlong *)pFVar7 + 0x18);
      }
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    pFVar6 = FText::FromName(&local_48,&local_res10);
    if (((local_58.AllocatorInstance.Data <= pFVar6) &&
        (pFVar6 < (FText *)(local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) break;
    iVar5 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar5 + 1;
    FText::FText((FText *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pFVar7 = pFVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FText *)(*pcVar3)();
  return pFVar6;
}

// ToText @ 14a764a50

FText * __cdecl
UE::MVVM::FieldPathHelper::ToText
          (FText *__return_storage_ptr__,TArrayView<UE::MVVM::FMVVMFieldVariant_const_,int> *param_1
          )

{
  uint uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FMVVMFieldVariant *pFVar7;
  FMVVMFieldVariant *pFVar8;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  TArray<FText,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  FText local_38;
  
  uVar1 = param_1->ArrayNum;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
  }
  pFVar7 = param_1->DataPtr;
  pFVar8 = pFVar7 + (int)uVar1;
  while( true ) {
    if (pFVar7 == pFVar8) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MVVMFieldPathHelper",L"PropertyPathDelim",L".");
      FText::Join(__return_storage_ptr__,pFVar6,&local_58);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      DestructItems<FText,int>((FText *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((FText *)local_58.AllocatorInstance.Data != (FText *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (pFVar7->field_0x8 == '\x02') {
      pvVar2 = *(void **)pFVar7;
      if (pvVar2 == (void *)0x0) {
        local_res20 = 0;
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        bVar4 = IsThisNotNull(pvVar2,"FField::GetFName");
        if (bVar4) {
          local_res10 = *(FName *)((longlong)pvVar2 + 0x20);
          local_res18 = local_res10;
        }
        else {
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
          local_res10.ComparisonIndex.Value = 0;
          local_res10.Number = 0;
        }
      }
    }
    else if (pFVar7->field_0x8 == '\x01') {
      if (*(longlong *)pFVar7 == 0) {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      else {
        local_res10 = *(FName *)(*(longlong *)pFVar7 + 0x18);
      }
    }
    else {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    pFVar6 = FText::FromName(&local_48,&local_res10);
    if (((local_58.AllocatorInstance.Data <= pFVar6) &&
        (pFVar6 < (FText *)(local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) break;
    iVar5 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar5 + 1;
    FText::FText((FText *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 0x10),pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pFVar7 = pFVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FText *)(*pcVar3)();
  return pFVar6;
}

// TransformWithAccessor @ 14a764c80

TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText> * __cdecl
UE::MVVM::FieldPathHelper::Private::TransformWithAccessor
          (TValueOrError<UE::MVVM::FMVVMConstFieldVariant,FText> *__return_storage_ptr__,
          UStruct *param_1,FMVVMConstFieldVariant *param_2,bool param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&param_2->field_0x8;
  (__return_storage_ptr__->Variant)._padding_ = *(longlong *)param_2;
  (__return_storage_ptr__->Variant)._padding_ = lVar1;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// TryGetArgumentsForConversionFunction @ 14a764ca0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetArgumentsForConversionFunction
          (TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText>
           *__return_storage_ptr__,UFunction *param_1)

{
  int *piVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  FField *pFVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FProperty *pFVar10;
  TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText> *pTVar11;
  longlong lVar12;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  FField *local_148;
  FText local_140;
  TFieldIterator<FProperty> local_130;
  FName local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FTextFormat local_70;
  FText local_60;
  FTextFormat local_50;
  FText local_40;
  FTextFormat local_30;
  
  Private::TryGetPropertyTypeCommon(&local_140,param_1);
  bVar5 = FText::IsEmpty(&local_140);
  if (bVar5) {
    if (((param_1->FunctionFlags >> 0xd & 1) == 0) &&
       ((param_1->FunctionFlags & (FUNC_Const|FUNC_BlueprintPure)) == FUNC_None)) {
      local_res18 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res18,&local_110);
      pFVar7 = FText::FromString(&local_80,&local_110);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_d0,L"MVVMBindingHelper",L"FunctionFlagsWrong",
                          L"The function \'{0}\' is not static or is not const and pure.");
      pFVar9 = FTextFormat::FTextFormat(&local_70,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_e0,pFVar9,pFVar7);
      FText::FText((FText *)__return_storage_ptr__,pFVar7);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    else if (param_1->NumParms < 2) {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,&local_100);
      pFVar7 = FText::FromString(&local_60,&local_100);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_b0,L"MVVMBindingHelper",L"FunctionWrongNumberOfArgs",
                          L"The function \'{0}\' does not have the correct number of arguments.");
      pFVar9 = FTextFormat::FTextFormat(&local_50,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_c0,pFVar9,pFVar7);
      FText::FText((FText *)__return_storage_ptr__,pFVar7);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar10 = GetReturnProperty(param_1);
      if (pFVar10 == (FProperty *)0x0) {
        local_118 = (FName)param_1->_padding_;
        ::FName::ToString(&local_118,&local_f0);
        pFVar7 = FText::FromString(&local_40,&local_f0);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_90,L"MVVMBindingHelper",L"FunctionReturnInvalid",
                            L"The return value for function \'{0}\' is invalid.");
        pFVar9 = FTextFormat::FTextFormat(&local_30,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_a0,pFVar9,pFVar7);
        FText::FText((FText *)__return_storage_ptr__,pFVar7);
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
        if (local_90.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_130.Field = (FField *)param_1->_padding_;
        local_158.Data = (FScriptContainerElement *)0x0;
        local_150 = 0;
        local_130.bIncludeInterface = false;
        local_130.InterfaceIndex = -1;
        local_130.bIncludeSuper = true;
        local_130.bIncludeDeprecated = true;
        local_130.Struct = (UStruct *)param_1;
        TFieldIterator<FProperty>::IterateToNext(&local_130);
        _Src.Data = local_158.Data;
        pFVar4 = local_130.Field;
        while (local_158.Data = _Src.Data, local_130.Field = pFVar4, pFVar4 != (FField *)0x0) {
          pFVar2 = pFVar4[1].ClassPrivate;
          if (-1 < (char)pFVar2) break;
          local_148 = pFVar4;
          if ((((char)pFVar2 < '\0') && (((ulonglong)pFVar2 & 0x820000400) == 0)) &&
             ((((ulonglong)pFVar2 >> 8 & 1) == 0 || (((ulonglong)pFVar2 & 0x8000002) != 0)))) {
            if (((_Src.Data <= (FScriptContainerElement *)&local_148) &&
                (local_150._4_4_ = (int)((ulonglong)local_150 >> 0x20),
                lVar12 = (longlong)local_150._4_4_,
                (FScriptContainerElement *)&local_148 < _Src.Data + lVar12 * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar11 = (TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText>
                         *)(*pcVar3)();
              return pTVar11;
            }
            iVar6 = (int)local_150;
            if ((int)local_150 == local_150._4_4_) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_158,(int *)((longlong)&local_150 + 4));
            }
            local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
            *(FField **)(local_158.Data + (longlong)iVar6 * 8) = local_148;
          }
          local_130.Field = pFVar4->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_130);
          _Src.Data = local_158.Data;
          pFVar4 = local_130.Field;
        }
        lVar12 = (longlong)(int)local_150;
        piVar1 = (int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4);
        (__return_storage_ptr__->Variant)._padding_ = 0;
        *(int *)&(__return_storage_ptr__->Variant)._padding_ = (int)local_150;
        if ((int)local_150 == 0) {
          *piVar1 = 0;
        }
        else {
          iVar6 = (int)local_150;
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,0,(ForAnyElementType *)__return_storage_ptr__,iVar6,piVar1);
          memcpy((void *)(__return_storage_ptr__->Variant)._padding_,_Src.Data,lVar12 << 3);
        }
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        if (local_158.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data);
        }
      }
    }
  }
  else {
    FText::FText((FText *)__return_storage_ptr__,&local_140);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  if (local_140.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeCommon @ 14a765310

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::MVVM::BindingHelper::Private::TryGetPropertyTypeCommon
          (FText *__return_storage_ptr__,FProperty *param_1)

{
  EPropertyFlags EVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FText *this;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if (param_1 == (FProperty *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MVVMBindingHelper",L"PropertyInvalid",
               L"The property is invalid.");
    return __return_storage_ptr__;
  }
  if (param_1->ArrayDim == 1) {
    EVar1 = param_1->PropertyFlags;
    if ((EVar1 >> 0x1d & 1) == 0) {
      if ((EVar1 >> 0x23 & 1) == 0) {
        if ((EVar1 & CPF_BlueprintVisible) != CPF_None) {
          FText::FText(__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        bVar2 = IsThisNotNull(param_1,"FField::GetName");
        if (bVar2) {
          ::FName::ToString((FName *)&param_1->_padding_,&local_48);
        }
        else {
          ::FString::FString(&local_48,L"None");
        }
        pFVar3 = FText::FromString(&local_18,&local_48);
        pwVar7 = L"The property \'{0}\' is not visible to the Blueprint script.";
        pwVar6 = L"PropertyNotBlueprintVisible";
      }
      else {
        bVar2 = IsThisNotNull(param_1,"FField::GetName");
        if (bVar2) {
          ::FName::ToString((FName *)&param_1->_padding_,&local_48);
        }
        else {
          ::FString::FString(&local_48,L"None");
        }
        pFVar3 = FText::FromString(&local_18,&local_48);
        pwVar7 = L"The property \'{0}\' is only available in the editor.";
        pwVar6 = L"PropertyEditorOnly";
      }
    }
    else {
      bVar2 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar2) {
        ::FName::ToString((FName *)&param_1->_padding_,&local_48);
      }
      else {
        ::FString::FString(&local_48,L"None");
      }
      pFVar3 = FText::FromString(&local_18,&local_48);
      pwVar7 = L"The property \'{0}\' is deprecated.";
      pwVar6 = L"PropertyDeprecated";
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_38,L"MVVMBindingHelper",pwVar6,pwVar7);
    this = &local_28;
  }
  else {
    bVar2 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_48);
    }
    else {
      ::FString::FString(&local_48,L"None");
    }
    pFVar3 = FText::FromString(&local_28,&local_48);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MVVMBindingHelper",L"PropertyStaticArray",
                        L"The property \'{0}\' is a static array.");
    this = &local_18;
  }
  pFVar5 = FTextFormat::FTextFormat((FTextFormat *)this,pFVar4,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar5,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_48.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// TryGetPropertyTypeCommon @ 14a765550

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::MVVM::BindingHelper::Private::TryGetPropertyTypeCommon
          (FText *__return_storage_ptr__,UFunction *param_1)

{
  EFunctionFlags EVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FText *this;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FName local_res10;
  FString local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if (param_1 == (UFunction *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"MVVMBindingHelper",L"FunctionInvalid",
               L"The function is invalid.");
    return __return_storage_ptr__;
  }
  EVar1 = param_1->FunctionFlags;
  if ((EVar1 >> 0x1a & 1) == 0) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    pFVar2 = FText::FromString(&local_28,&local_48);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MVVMBindingHelper",L"FunctionNotBlueprintCallable",
                        L"The function \'{0}\' is not BlueprintCallable.");
    this = &local_18;
  }
  else {
    if ((EVar1 & FUNC_Net) == FUNC_None) {
      if ((EVar1 >> 0xb & 1) == 0) {
        if ((EVar1 >> 0x1d & 1) == 0) {
          FText::FText(__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_48);
        pFVar2 = FText::FromString(&local_18,&local_48);
        pwVar6 = L"The function \'{0}\' is editor only";
        pwVar5 = L"FunctionEditorOnly";
      }
      else {
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_48);
        pFVar2 = FText::FromString(&local_18,&local_48);
        pwVar6 = L"The function \'{0}\' is an event.";
        pwVar5 = L"FunctionEvent";
      }
    }
    else {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      pFVar2 = FText::FromString(&local_18,&local_48);
      pwVar6 = L"The function \'{0}\' is networked.";
      pwVar5 = L"FunctionNetworked";
    }
    pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_38,L"MVVMBindingHelper",pwVar5,pwVar6);
    this = &local_28;
  }
  pFVar4 = FTextFormat::FTextFormat((FTextFormat *)this,pFVar3,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar4,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeForDestinationBinding @ 14a765710

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetPropertyTypeForDestinationBinding
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,
          FMVVMConstFieldVariant *param_1)

{
  char cVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TValueOrError<FProperty_const_*,FText> *pTVar8;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  cVar1 = param_1->field_0x8;
  if ((cVar1 == '\0') || (pFVar2 = *(FProperty **)param_1, pFVar2 == (FProperty *)0x0)) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MVVMBindingHelper",L"NoDestinationForBinding",
                        L"No destination was provided for the binding.");
    FText::FText((FText *)__return_storage_ptr__,pFVar5);
    local_78.TextData.Reference = local_38.TextData.Reference;
  }
  else {
    if (cVar1 != '\x02') {
      if ((cVar1 != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InField.IsFunction()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                             ,0x1a9,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FProperty_const_*,FText> *)(*pcVar3)();
        return pTVar8;
      }
      if ((param_1->field_0x8 != '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type == EVariantType::Function",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                             ,0x58,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TValueOrError<FProperty_const_*,FText> *)(*pcVar3)();
        return pTVar8;
      }
      TryGetPropertyTypeForDestinationBinding(__return_storage_ptr__,*(UFunction **)param_1);
      return __return_storage_ptr__;
    }
    Private::TryGetPropertyTypeCommon(&local_78,pFVar2);
    bVar4 = FText::IsEmpty(&local_78);
    if (bVar4) {
      if ((pFVar2->PropertyFlags & CPF_BlueprintReadOnly) == CPF_None) {
        (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar2;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
      }
      else {
        bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
        if (bVar4) {
          ::FName::ToString((FName *)&pFVar2->_padding_,&local_68);
        }
        else {
          ::FString::FString(&local_68,L"None");
        }
        pFVar5 = FText::FromString(&local_28,&local_68);
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_48,L"MVVMBindingHelper",L"PropertyReadOnly",
                            L"The property \'{0}\' is read only.");
        pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
        pFVar5 = FText::Format<FText>(&local_58,pFVar7,pFVar5);
        FText::FText((FText *)__return_storage_ptr__,pFVar5);
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14a7658fb;
    }
    FText::FText((FText *)__return_storage_ptr__,&local_78);
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
LAB_14a7658fb:
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeForDestinationBinding @ 14a765930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetPropertyTypeForDestinationBinding
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,FProperty *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FText local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  Private::TryGetPropertyTypeCommon(&local_68,param_1);
  bVar1 = FText::IsEmpty(&local_68);
  if (bVar1) {
    if ((param_1->PropertyFlags & CPF_BlueprintReadOnly) == CPF_None) {
      (__return_storage_ptr__->Variant)._padding_ = (longlong)param_1;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
    }
    else {
      bVar1 = IsThisNotNull(param_1,"FField::GetName");
      if (bVar1) {
        ::FName::ToString((FName *)&param_1->_padding_,&local_58);
      }
      else {
        ::FString::FString(&local_58,L"None");
      }
      pFVar2 = FText::FromString(&local_28,&local_58);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MVVMBindingHelper",L"PropertyReadOnly",
                          L"The property \'{0}\' is read only.");
      pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FText::FText((FText *)__return_storage_ptr__,&local_68);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeForDestinationBinding @ 14a765a80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetPropertyTypeForDestinationBinding
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,UFunction *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FProperty *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FName local_res18 [2];
  FText local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  Private::TryGetPropertyTypeCommon(&local_68,param_1);
  bVar1 = FText::IsEmpty(&local_68);
  if (bVar1) {
    if (param_1->NumParms == '\x01') {
      if ((param_1->FunctionFlags >> 0x1e & 1) == 0) {
        if ((param_1->FunctionFlags >> 0x1c & 1) == 0) {
          pFVar5 = GetReturnProperty(param_1);
          if (pFVar5 == (FProperty *)0x0) {
            pFVar5 = GetFirstArgumentProperty(param_1);
            if (pFVar5 != (FProperty *)0x0) {
              (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar5;
              (__return_storage_ptr__->Variant).TypeIndex = '\0';
              goto LAB_14a765cd6;
            }
            local_res18[0] = (FName)param_1->_padding_;
            ::FName::ToString(local_res18,&local_58);
            pFVar2 = FText::FromString(&local_18,&local_58);
            pwVar8 = L"The function \'{0}\' doesn\'t have a valid (single) argument.";
            pwVar7 = L"FunctionNoArgument";
          }
          else {
            local_res18[0] = (FName)param_1->_padding_;
            ::FName::ToString(local_res18,&local_58);
            pFVar2 = FText::FromString(&local_18,&local_58);
            pwVar8 = L"The function \'{0}\' has a return value.";
            pwVar7 = L"FunctionHasReturn";
          }
        }
        else {
          local_res18[0] = (FName)param_1->_padding_;
          ::FName::ToString(local_res18,&local_58);
          pFVar2 = FText::FromString(&local_18,&local_58);
          pwVar8 = L"The function \'{0}\' is pure.";
          pwVar7 = L"FunctionPure";
        }
      }
      else {
        local_res18[0] = (FName)param_1->_padding_;
        ::FName::ToString(local_res18,&local_58);
        pFVar2 = FText::FromString(&local_18,&local_58);
        pwVar8 = L"The function \'{0}\' is const.";
        pwVar7 = L"FunctionConst";
      }
      pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_48,L"MVVMBindingHelper",pwVar7,pwVar8);
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_38,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      TVar6.Reference = local_48.TextData.Reference;
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        TVar6.Reference = local_48.TextData.Reference;
      }
    }
    else {
      local_res18[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res18,&local_58);
      pFVar2 = FText::FromString(&local_28,&local_58);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MVVMBindingHelper",L"FunctionTooManyArguments",
                          L"The function \'{0}\' has more than one argument.");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      TVar6.Reference = local_38.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        TVar6.Reference = local_38.TextData.Reference;
      }
    }
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))();
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FText::FText((FText *)__return_storage_ptr__,&local_68);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
LAB_14a765cd6:
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeForSourceBinding @ 14a765d10

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetPropertyTypeForSourceBinding
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,
          FMVVMConstFieldVariant *param_1)

{
  char cVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  TValueOrError<FProperty_const_*,FText> *pTVar5;
  FText *pFVar6;
  FText local_28;
  FText local_18;
  
  cVar1 = param_1->field_0x8;
  if ((cVar1 == '\0') || (pFVar2 = *(FProperty **)param_1, pFVar2 == (FProperty *)0x0)) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"MVVMBindingHelper",L"NoSourceForBinding",
                        L"No source was provided for the binding.");
    FText::FText((FText *)__return_storage_ptr__,pFVar6);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InField.IsFunction()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                           ,0x161,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TValueOrError<FProperty_const_*,FText> *)(*pcVar3)();
          return pTVar5;
        }
      }
      if (param_1->field_0x8 != '\x01') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == EVariantType::Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                           ,0x58,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar5 = (TValueOrError<FProperty_const_*,FText> *)(*pcVar3)();
          return pTVar5;
        }
      }
      TryGetPropertyTypeForSourceBinding(__return_storage_ptr__,*(UFunction **)param_1);
      return __return_storage_ptr__;
    }
    Private::TryGetPropertyTypeCommon(&local_28,pFVar2);
    bVar4 = FText::IsEmpty(&local_28);
    if (bVar4) {
      (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar2;
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      goto LAB_14a765e2b;
    }
    FText::FText((FText *)__return_storage_ptr__,&local_28);
  }
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
LAB_14a765e2b:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeForSourceBinding @ 14a765e50

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetPropertyTypeForSourceBinding
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,FProperty *param_1)

{
  bool bVar1;
  FText local_18;
  
  Private::TryGetPropertyTypeCommon(&local_18,param_1);
  bVar1 = FText::IsEmpty(&local_18);
  if (bVar1) {
    (__return_storage_ptr__->Variant)._padding_ = (longlong)param_1;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  else {
    FText::FText((FText *)__return_storage_ptr__,&local_18);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetPropertyTypeForSourceBinding @ 14a765ec0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetPropertyTypeForSourceBinding
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,UFunction *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FProperty *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FName local_res18 [2];
  FText local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  Private::TryGetPropertyTypeCommon(&local_68,param_1);
  bVar1 = FText::IsEmpty(&local_68);
  if (bVar1) {
    if ((param_1->FunctionFlags & FUNC_Const) == FUNC_None) {
      local_res18[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res18,&local_58);
      pFVar2 = FText::FromString(&local_28,&local_58);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MVVMBindingHelper",L"FunctionNotConst",
                          L"The function \'{0}\' is not const.");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      TVar6.Reference = local_38.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        TVar6.Reference = local_38.TextData.Reference;
      }
    }
    else {
      if (param_1->NumParms == '\x01') {
        pFVar5 = GetReturnProperty(param_1);
        if (pFVar5 != (FProperty *)0x0) {
          (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar5;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          goto LAB_14a766099;
        }
        local_res18[0] = (FName)param_1->_padding_;
        ::FName::ToString(local_res18,&local_58);
        pFVar2 = FText::FromString(&local_18,&local_58);
        pwVar8 = L"The return value for function \'{0}\' is invalid.";
        pwVar7 = L"FunctionReturnInvalid";
      }
      else {
        local_res18[0] = (FName)param_1->_padding_;
        ::FName::ToString(local_res18,&local_58);
        pFVar2 = FText::FromString(&local_18,&local_58);
        pwVar8 = L"The function \'{0}\' doesn\'t have a return value.";
        pwVar7 = L"FunctionWithoutReturn";
      }
      pFVar3 = FText::AsLocalizable_Advanced_LocText(&local_48,L"MVVMBindingHelper",pwVar7,pwVar8);
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_38,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      TVar6.Reference = local_48.TextData.Reference;
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        TVar6.Reference = local_48.TextData.Reference;
      }
    }
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))();
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FText::FText((FText *)__return_storage_ptr__,&local_68);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
LAB_14a766099:
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryGetReturnTypeForConversionFunction @ 14a7660d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<FProperty_const_*,FText> * __cdecl
UE::MVVM::BindingHelper::TryGetReturnTypeForConversionFunction
          (TValueOrError<FProperty_const_*,FText> *__return_storage_ptr__,UFunction *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FProperty *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  FName local_res18 [2];
  FText local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  Private::TryGetPropertyTypeCommon(&local_68,param_1);
  bVar1 = FText::IsEmpty(&local_68);
  if (bVar1) {
    if (((param_1->FunctionFlags >> 0xd & 1) == 0) &&
       ((param_1->FunctionFlags & (FUNC_Const|FUNC_BlueprintPure)) !=
        (FUNC_Const|FUNC_BlueprintPure))) {
      local_res18[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res18,&local_58);
      pFVar2 = FText::FromString(&local_28,&local_58);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"MVVMBindingHelper",L"FunctionFlagsWrong",
                          L"The function \'{0}\' is not static or is not const and pure.");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      TVar6.Reference = local_38.TextData.Reference;
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        TVar6.Reference = local_38.TextData.Reference;
      }
    }
    else {
      pFVar5 = GetReturnProperty(param_1);
      if (pFVar5 != (FProperty *)0x0) {
        (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar5;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        goto LAB_14a76627b;
      }
      local_res18[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res18,&local_58);
      pFVar2 = FText::FromString(&local_18,&local_58);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"MVVMBindingHelper",L"FunctionReturnInvalid",
                          L"The return value for function \'{0}\' is invalid.");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_38,pFVar4,pFVar2);
      FText::FText((FText *)__return_storage_ptr__,pFVar2);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      TVar6.Reference = local_48.TextData.Reference;
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        TVar6.Reference = local_48.TextData.Reference;
      }
    }
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 0x10))();
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FText::FText((FText *)__return_storage_ptr__,&local_68);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
LAB_14a76627b:
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 150553c80

bool __thiscall
`UE::MVVM::Private::GetGlobalCollectionViewModel'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1675003697450450998>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1675003697450450998>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

