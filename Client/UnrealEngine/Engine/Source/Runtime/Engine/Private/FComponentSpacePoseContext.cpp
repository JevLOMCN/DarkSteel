// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ContainsNaN @ 1474c9140

bool __thiscall FComponentSpacePoseContext::ContainsNaN(FComponentSpacePoseContext *this)

{
  bool bVar1;
  
  bVar1 = FBaseCompactPose<TMemStackAllocator<0>_>::ContainsNaN
                    ((FBaseCompactPose<TMemStackAllocator<0>_> *)&this->Pose);
  return bVar1;
}

// IsNormalized @ 1474e9f00

bool __thiscall FComponentSpacePoseContext::IsNormalized(FComponentSpacePoseContext *this)

{
  bool bVar1;
  
  bVar1 = FBaseCompactPose<TMemStackAllocator<0>_>::IsNormalized
                    ((FBaseCompactPose<TMemStackAllocator<0>_> *)&this->Pose);
  return bVar1;
}

// ResetToRefPose @ 1474f6820

void __thiscall FComponentSpacePoseContext::ResetToRefPose(FComponentSpacePoseContext *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FBoneContainer *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  lVar5 = this->_padding_;
  if (*(longlong *)(lVar5 + 0x660) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = *(FBoneContainer **)(lVar5 + 0x660);
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&this->Pose,pFVar6);
  FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&this->Pose,
             *(FBoneContainer **)&(this->Pose).Pose.field_0x10);
  uVar3 = *(uint *)&(this->Pose).Pose.field_0x8;
  if (-1 < (int)uVar3) {
    puVar1 = &(this->Pose).ComponentSpaceFlags.field_0xc;
    puVar2 = &(this->Pose).ComponentSpaceFlags.field_0x8;
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)puVar1 != uVar3) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,uVar3,(ForElementType<unsigned_char> *)&(this->Pose).ComponentSpaceFlags,0,
                 (int *)puVar1);
    }
    iVar4 = *(int *)&(this->Pose).Pose.field_0x8;
    iVar9 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                      (1,1,iVar4,(ForElementType<unsigned_char> *)&(this->Pose).ComponentSpaceFlags,
                       (int *)puVar2,(int *)puVar1);
    memset((void *)((longlong)iVar9 + *(longlong *)&(this->Pose).ComponentSpaceFlags),0,
           (longlong)iVar4);
    if (*(int *)puVar2 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    **(undefined1 **)&(this->Pose).ComponentSpaceFlags = 1;
    FBlendedCurve::InitFrom(&this->Curve,pFVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

