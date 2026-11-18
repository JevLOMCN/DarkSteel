// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// operator[] @ 14c94a4b0

float * __thiscall
UE::Geometry::TDenseGrid3<float>::operator[](TDenseGrid3<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Buffer).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pfVar4 = (float *)(*pcVar1)();
      return pfVar4;
    }
  }
  return (float *)((this->Buffer).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// Resize @ 14c984ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TDenseGrid3<enum_UE::Geometry::FOccupancyGrid3::EDomain>::Resize
          (void *this,int param_1,int param_2,int param_3,EAllowShrinking param_4)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((0x7ffffffe < (longlong)param_1 * (longlong)param_2 * (longlong)param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int64)DimX * (int64)DimY * (int64)DimZ < 2147483647",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\DenseGrid3.h"
                         ,0x3f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = *(int *)((longlong)this + 8);
  piVar1 = (int *)((longlong)this + 8);
  uVar5 = param_1 * param_2 * param_3;
  if (iVar4 < (int)uVar5) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5 - iVar4,this,piVar1,(int *)((longlong)this + 0xc));
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar4) {
      uVar6 = iVar4 - uVar5;
      if (((int)(uVar6 | uVar5) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar5 * 4);
        iVar4 = (*piVar1 - uVar6) - uVar5;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar6 * 4),(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar6;
        if (param_4 == Default) {
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,this,iVar4 - uVar6,(int *)((longlong)this + 0xc));
        }
      }
    }
  }
  *(int *)((longlong)this + 0x10) = param_1;
  *(int *)((longlong)this + 0x14) = param_2;
  *(int *)((longlong)this + 0x18) = param_3;
  return;
}

