// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AddImplementer @ 1478b2a60

void __cdecl IPrimitiveComponent::AddImplementer(FComponentInterfaceImplementation *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  
  if (((Implementers.AllocatorInstance.Data <= param_1) &&
      (param_1 < (FComponentInterfaceImplementation *)
                 (Implementers.AllocatorInstance.Data + (longlong)Implementers.ArrayMax * 0x40))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (Implementers.ArrayNum == Implementers.ArrayMax) {
    Implementers.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1040,&Implementers.AllocatorInstance,&Implementers.ArrayMax);
  }
  pFVar4 = Implementers.AllocatorInstance.Data + (longlong)Implementers.ArrayNum * 0x40;
  Implementers.ArrayNum = Implementers.ArrayNum + 1;
  *(UClass **)pFVar4 = param_1->Class;
  *(undefined8 *)(pFVar4 + 0x10) = *(undefined8 *)&param_1->Resolver;
  *(undefined8 *)(pFVar4 + 0x38) = 0;
  if (*(longlong *)(pFVar4 + 0x10) == 0) {
    return;
  }
  puVar1 = *(undefined8 **)&(param_1->Resolver).field_0x28;
  puVar5 = (undefined8 *)&(param_1->Resolver).field_0x10;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478b2b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar5)();
  return;
}

// RemoveImplementer @ 1478eaae0

void __cdecl IPrimitiveComponent::RemoveImplementer(UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  
  uVar6 = 0;
  while( true ) {
    if ((int)uVar6 < 0) {
      return;
    }
    if (Implementers.ArrayNum <= (int)uVar6) break;
    uVar7 = ~uVar6 >> 0x1f;
    uVar3 = 0;
    if ((int)uVar6 < Implementers.ArrayNum) {
      uVar3 = uVar7;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(UClass **)(Implementers.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40) == param_1)
    {
      uVar3 = 0;
      if ((int)uVar6 < Implementers.ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Dst = Implementers.AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40;
      if (*(longlong *)(_Dst + 0x10) != 0) {
        pFVar5 = _Dst + 0x20;
        if (*(FScriptContainerElement **)(_Dst + 0x38) != (FScriptContainerElement *)0x0) {
          pFVar5 = *(FScriptContainerElement **)(_Dst + 0x38);
        }
        (**(code **)(*(longlong *)pFVar5 + 0x10))();
      }
      iVar4 = Implementers.ArrayNum + ~uVar6;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + 0x40,(longlong)iVar4 << 6);
      }
      Implementers.ArrayNum = Implementers.ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,&Implementers.AllocatorInstance,Implementers.ArrayNum,
                 &Implementers.ArrayMax);
      uVar6 = uVar6 - 1;
    }
    uVar6 = uVar6 + 1;
  }
  return;
}

