// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// NormalizeWeightsAndLimitCount @ 14c982f40

void __thiscall
UE::Geometry::`anonymous_namespace'::FCreateSkinWeights_Closest_WorkData::
NormalizeWeightsAndLimitCount(void *this,float param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res18 [8];
  undefined4 local_78;
  
  lVar10 = *(longlong *)((longlong)this + 0x10);
  iVar9 = *(int *)((longlong)this + 0x18);
  lVar2 = lVar10 + (longlong)iVar9 * 8;
  while( true ) {
    if (*(int *)((longlong)this + 0x18) != iVar9) {
      local_res18[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<TTuple<unsigned_short,float>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (lVar10 == lVar2) break;
    *(float *)(lVar10 + 4) = *(float *)(lVar10 + 4) / param_1;
    lVar10 = lVar10 + 8;
  }
  AlgoImpl::
  IntroSortInternal<TTuple<unsigned_short,float>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<unsigned_short,float>,_UE::Geometry::_anonymous_namespace_::FCreateSkinWeights_Closest_WorkData::NormalizeWeightsAndLimitCount_::__l2::<lambda_1>_>_>
            (*(TTuple<unsigned_short,float> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18),local_res18[0],(<lambda_1> *)local_res8);
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  uVar11 = 0;
  piVar1 = (int *)((longlong)this + 0x2c);
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < param_2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,param_2,(ForAnyElementType *)((longlong)this + 0x20),0,piVar1);
  }
  fVar6 = __real_477fff00;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  iVar9 = *(int *)((longlong)this + 0x18);
  if (param_2 < *(int *)((longlong)this + 0x18)) {
    iVar9 = param_2;
  }
  uVar13 = uVar11;
  if (0 < iVar9) {
    do {
      uVar12 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar12 < *(int *)((longlong)this + 0x18)) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar14 = *(float *)(uVar13 + 4 + *(longlong *)((longlong)this + 0x10));
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      local_78 = CONCAT22((short)(int)(fVar14 * fVar6 + fVar5),
                          *(undefined2 *)(uVar13 + *(longlong *)((longlong)this + 0x10)));
      if (((*(undefined4 **)((longlong)this + 0x20) <= &local_78) &&
          (&local_78 < *(undefined4 **)((longlong)this + 0x20) + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)((longlong)this + 0x28);
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x204,(ForAnyElementType *)((longlong)this + 0x20),piVar1);
      }
      uVar11 = (ulonglong)(uVar12 + 1);
      *(int *)((longlong)this + 0x28) = iVar9 + 1;
      *(undefined4 *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar9 * 4) = local_78;
      iVar9 = *(int *)((longlong)this + 0x18);
      if (param_2 < *(int *)((longlong)this + 0x18)) {
        iVar9 = param_2;
      }
      uVar13 = uVar13 + 8;
    } while ((int)(uVar12 + 1) < iVar9);
  }
  return;
}

