// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// MultiFind<TSizedDefaultAllocator<32>_> @ 1464d5c60

void __thiscall
TMultiMap<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,1>_>
           *this,ulong64 param_1,
          TArray<TTuple<Audio::FAudioRenderStepId,Audio::FAudioRenderStepId>,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 *puVar12;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar12 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar12 = &this->field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    ((longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1) &
                    (longlong)*(int *)&this->field_0x48 - 1U) * 4);
    iVar7 = iVar8;
    if (iVar8 != -1) {
      do {
        iVar8 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)this);
        if (*(ulong64 *)((longlong)iVar7 * 0x20 + *(longlong *)this) == param_1) break;
        iVar7 = iVar8;
      } while (iVar8 != -1);
    }
    if (iVar7 != -1) {
      piVar1 = &param_2->ArrayMax;
      while( true ) {
        pFVar10 = (FScriptContainerElement *)(*(longlong *)this + 8 + (longlong)iVar7 * 0x20);
        pFVar11 = (param_2->AllocatorInstance).Data;
        if (((pFVar11 <= pFVar10) && (pFVar10 < pFVar11 + (longlong)*piVar1 * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar7 + 1;
        uVar3 = *(undefined8 *)(pFVar10 + 8);
        pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar10;
        *(undefined8 *)(pFVar11 + 8) = uVar3;
        if (iVar8 == -1) break;
        iVar7 = iVar8;
        while (iVar8 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *(longlong *)this),
              *(ulong64 *)((longlong)iVar7 * 0x20 + *(longlong *)this) != param_1) {
          iVar7 = iVar8;
          if (iVar8 == -1) goto LAB_1464d5e21;
        }
      }
    }
  }
LAB_1464d5e21:
  if (param_3) {
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar8 = param_2->ArrayNum / 2;
    lVar9 = (longlong)iVar8;
    if (0 < iVar8) {
      pFVar10 = pFVar11 + (longlong)(param_2->ArrayNum + -1) * 0x10;
      do {
        uVar3 = *(undefined8 *)(pFVar10 + 8);
        uVar4 = *(undefined8 *)pFVar11;
        uVar5 = *(undefined8 *)(pFVar11 + 8);
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar10;
        *(undefined8 *)(pFVar11 + 8) = uVar3;
        pFVar11 = pFVar11 + 0x10;
        *(undefined8 *)pFVar10 = uVar4;
        *(undefined8 *)(pFVar10 + 8) = uVar5;
        lVar9 = lVar9 + -1;
        pFVar10 = pFVar10 + -0x10;
      } while (lVar9 != 0);
    }
  }
  return;
}

