// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Allocate @ 1415a9fe0

void * __thiscall
UE::Logging::Private::FInlineLogTemplateStorage::Allocate
          (FInlineLogTemplateStorage *this,int param_1)

{
  int *piVar1;
  ForElementType<unsigned_char> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ForElementType<unsigned_char> FVar8;
  uint uVar9;
  
  piVar1 = &(this->Data).ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<48,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                      (1,1,param_1 - iVar6,(ForElementType<unsigned_char> *)this,piVar1,
                       &(this->Data).ArrayMax);
    FVar2 = (this->Data).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<unsigned_char>)this;
    if (FVar2 != (ForElementType<unsigned_char>)0x0) {
      FVar8 = FVar2;
    }
    memset((void *)((longlong)iVar5 + (longlong)FVar8),0,(longlong)(param_1 - iVar6));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar9 = iVar6 - param_1;
      if (((int)(uVar9 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pvVar7 = (void *)(*pcVar3)();
        return pvVar7;
      }
      if (uVar9 != 0) {
        FVar2 = (this->Data).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<unsigned_char>)this;
        if (FVar2 != (ForElementType<unsigned_char>)0x0) {
          FVar8 = FVar2;
        }
        iVar6 = (*piVar1 - uVar9) - param_1;
        if (iVar6 != 0) {
          memmove((void *)((longlong)FVar8 + (longlong)param_1),
                  (void *)((longlong)(int)uVar9 + (longlong)FVar8 + (longlong)param_1),
                  (longlong)iVar6);
        }
        *piVar1 = *piVar1 - uVar9;
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<48,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,(ForElementType<unsigned_char> *)this,*piVar1,&(this->Data).ArrayMax);
      }
    }
  }
  FVar2 = (this->Data).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_char>)0x0) {
    this = (FInlineLogTemplateStorage *)FVar2;
  }
  return (void *)(ForElementType<unsigned_char>)this;
}

