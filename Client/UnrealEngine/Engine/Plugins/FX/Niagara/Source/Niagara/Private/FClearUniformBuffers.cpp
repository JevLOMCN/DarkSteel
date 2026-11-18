// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FClearUniformBuffers @ 1492d3c80

void __thiscall
`FRDGBuilder::AllocParameters<FNiagaraShader::FParameters>'::__l2::FClearUniformBuffers::
~FClearUniformBuffers(void *this)

{
  int iVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  FRHIResource *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  atomic<unsigned_int> aVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar7 = 0;
  iVar1 = *(int *)((longlong)this + 0xc);
  do {
    if (iVar7 == iVar1) {
      return;
    }
    this_00 = *(FRHIResource **)((longlong)this + 0x10);
    lVar11 = (longlong)*(int *)((longlong)this + 8) * (longlong)iVar7 + *(longlong *)this;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (((lVar11 == 0) || (this_00 == (FRHIResource *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Contents && Layout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                           ,0xe2,L"Pass parameter struct created with null inputs."), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    aVar2 = this_00[5].AtomicFlags.Packed;
    aVar9 = (atomic<unsigned_int>)0x0;
    if (aVar2 != (atomic<unsigned_int>)0x0) {
      do {
        aVar3 = this_00[5].AtomicFlags.Packed;
        lVar4 = this_00[5]._padding_;
        if (((int)aVar3 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((uint)aVar3 <= (uint)aVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ParameterIndex < static_cast<uint32>(Parameters.Num())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphParameter.h"
                               ,0x122,
                               L"Attempted to access RDG pass parameter outside of index for Layout \'%s\'"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = 0;
        if ((int)aVar9 < (int)aVar3) {
          uVar10 = ~(uint)aVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar8 = (undefined8 *)((ulonglong)*(ushort *)(lVar4 + (longlong)(int)aVar9 * 4) + lVar11);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 1;
        }
        aVar9 = (atomic<unsigned_int>)((int)aVar9 + 1);
      } while ((uint)aVar9 < (uint)aVar2);
    }
    FRHIResource::Release(this_00);
    iVar7 = iVar7 + 1;
  } while( true );
}

