// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 2

// MultiFind<TSizedDefaultAllocator<32>_> @ 14d3ca050

void __thiscall
TMultiMap<unsigned_int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<unsigned_int,wchar_t_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,wchar_t_const_*,1>_>
           *this,uint param_1,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar10 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)param_1) * 4);
    iVar6 = iVar7;
    if (iVar7 != -1) {
      do {
        iVar7 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar6 * 0x18);
        if (*(uint *)(*(longlong *)this + (longlong)iVar6 * 0x18) == param_1) break;
        iVar6 = iVar7;
      } while (iVar7 != -1);
    }
    if (iVar6 != -1) {
      piVar2 = &param_2->ArrayMax;
      while( true ) {
        pFVar1 = (FScriptContainerElement *)(*(longlong *)this + ((longlong)iVar6 * 3 + 1) * 8);
        pFVar9 = (param_2->AllocatorInstance).Data;
        if (((pFVar9 <= pFVar1) && (pFVar1 < pFVar9 + (longlong)*piVar2 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar2);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             *(undefined8 *)pFVar1;
        if (iVar7 == -1) break;
        iVar6 = iVar7;
        while (iVar7 = *(int *)(*(longlong *)this + 0x10 + (longlong)iVar6 * 0x18),
              *(uint *)(*(longlong *)this + (longlong)iVar6 * 0x18) != param_1) {
          iVar6 = iVar7;
          if (iVar7 == -1) goto LAB_14d3ca202;
        }
      }
    }
  }
LAB_14d3ca202:
  if (param_3) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    iVar7 = param_2->ArrayNum / 2;
    if (0 < iVar7) {
      lVar8 = 0;
      pFVar9 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
      do {
        uVar3 = *(undefined8 *)(pFVar1 + lVar8 * 8);
        *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar9;
        lVar8 = lVar8 + 1;
        *(undefined8 *)pFVar9 = uVar3;
        pFVar9 = pFVar9 + -8;
      } while (lVar8 < iVar7);
    }
  }
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14d41c290

void __thiscall
TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
           *this,uint param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,bool param_3
          )

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar10 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)param_1) * 4);
    iVar6 = iVar7;
    if (iVar7 != -1) {
      do {
        iVar7 = *(int *)(*(longlong *)this + 8 + (longlong)iVar6 * 0x10);
        if (*(uint *)(*(longlong *)this + (longlong)iVar6 * 0x10) == param_1) break;
        iVar6 = iVar7;
      } while (iVar7 != -1);
    }
    if (iVar6 != -1) {
      piVar1 = &param_2->ArrayMax;
      while( true ) {
        pFVar9 = (FScriptContainerElement *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x10);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar9;
        if (iVar7 == -1) break;
        iVar6 = iVar7;
        while (iVar7 = *(int *)(*(longlong *)this + 8 + (longlong)iVar6 * 0x10),
              *(uint *)(*(longlong *)this + (longlong)iVar6 * 0x10) != param_1) {
          iVar6 = iVar7;
          if (iVar7 == -1) goto LAB_14d41c42f;
        }
      }
    }
  }
LAB_14d41c42f:
  if (param_3) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    iVar7 = param_2->ArrayNum / 2;
    if (0 < iVar7) {
      lVar8 = 0;
      pFVar9 = pFVar3 + (longlong)(param_2->ArrayNum + -1) * 4;
      do {
        uVar2 = *(undefined4 *)(pFVar3 + lVar8 * 4);
        *(undefined4 *)(pFVar3 + lVar8 * 4) = *(undefined4 *)pFVar9;
        lVar8 = lVar8 + 1;
        *(undefined4 *)pFVar9 = uVar2;
        pFVar9 = pFVar9 + -4;
      } while (lVar8 < iVar7);
    }
  }
  return;
}

