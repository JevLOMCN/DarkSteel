// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FFLightSceneChangeSetAllocation @ 1453f95c0

FFLightSceneChangeSetAllocation * __thiscall
`FScene::UpdateLights'::__l2::FFLightSceneChangeSetAllocation::FFLightSceneChangeSetAllocation
          (void *this,
          TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *param_1,
          int param_2)

{
  void *this_00;
  ForElementType<unsigned_int> *this_01;
  uint *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FFLightSceneChangeSetAllocation *pFVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = (void *)((longlong)this + 0x20);
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>
            (this_00,param_1);
  this_01 = (ForElementType<unsigned_int> *)((longlong)this + 0x2b0);
  this_01->Data = (uint *)0x0;
  uVar6 = param_2 + 0x1fU >> 5;
  *(undefined4 *)((longlong)this + 700) = 0;
  *(int *)((longlong)this + 0x2b8) = param_2;
  if (param_2 + 0x1fU >> 5 != 0) {
    TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>::
    ResizeAllocation(this_01,0,uVar6,4);
    _Dst = this_01->Data;
    *(uint *)((longlong)this + 700) = uVar6 << 5;
    memset(_Dst,0,(ulonglong)uVar6 << 2);
    uVar5 = *(int *)((longlong)this + 0x2b8) >> 0x1f & 0x1f;
    uVar6 = *(int *)((longlong)this + 0x2b8) + uVar5;
    iVar3 = (uVar6 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      this_01->Data[(int)uVar6 >> 5] =
           this_01->Data[(int)uVar6 >> 5] & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  *(undefined8 *)((longlong)this + 0x2c0) = *(undefined8 *)this;
  iVar3 = *(int *)((longlong)this + 8);
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FFLightSceneChangeSetAllocation *)(*pcVar1)();
    return pFVar4;
  }
  *(int *)((longlong)this + 0x2c8) = iVar3;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined4 *)((longlong)this + 0x2d8) = 0;
  *(void **)((longlong)this + 0x2e0) = this_00;
  *(ForElementType<unsigned_int> **)((longlong)this + 0x2e8) = this_01;
  *(int *)((longlong)this + 0x2f0) = param_2;
  *(undefined4 *)((longlong)this + 0x2f4) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x2f8) = *(undefined8 *)this;
  iVar3 = *(int *)((longlong)this + 8);
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FFLightSceneChangeSetAllocation *)(*pcVar1)();
    return pFVar4;
  }
  *(int *)((longlong)this + 0x300) = iVar3;
  *(undefined8 *)((longlong)this + 0x308) = *(undefined8 *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0x18);
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FFLightSceneChangeSetAllocation *)(*pcVar1)();
    return pFVar4;
  }
  *(int *)((longlong)this + 0x310) = iVar3;
  *(int *)((longlong)this + 0x328) = param_2;
  *(void **)((longlong)this + 0x318) = this_00;
  *(ForElementType<unsigned_int> **)((longlong)this + 800) = this_01;
  *(undefined4 *)((longlong)this + 0x32c) = 0xffffffff;
  return this;
}

