// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// InitPose @ 14a8c06a0

void __thiscall
FCSPose<FCompactHeapPose>::InitPose(FCSPose<FCompactHeapPose> *this,FCompactHeapPose *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  
  lVar6 = *(longlong *)&param_1->field_0x10;
  if (lVar6 != 0) {
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar6 + 0x30));
    if (((bVar8) && (*(longlong *)(lVar6 + 0x48) != 0)) && (0 < *(int *)(lVar6 + 8)))
    goto LAB_14a8c06f7;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("InBoneContainer && InBoneContainer->IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                     ,0x97,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14a8c06f7:
  *(longlong *)&(this->Pose).field_0x10 = lVar6;
  uVar4 = *(uint *)(lVar6 + 8);
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  puVar1 = &(this->Pose).field_0xc;
  puVar2 = &(this->Pose).field_0x8;
  *(undefined4 *)puVar2 = 0;
  if (*(int *)&(this->Pose).field_0xc < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar4,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,0x10,uVar4,(ForAnyElementType *)this,(int *)puVar2,(int *)puVar1);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)param_1);
  uVar4 = *(uint *)puVar2;
  if (-1 < (int)uVar4) {
    puVar1 = &(this->ComponentSpaceFlags).field_0xc;
    puVar3 = &(this->ComponentSpaceFlags).field_0x8;
    *(undefined4 *)puVar3 = 0;
    if (*(uint *)puVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar4,(ForAnyElementType *)&this->ComponentSpaceFlags,0,(int *)puVar1);
    }
    iVar5 = *(int *)puVar2;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,(ForAnyElementType *)&this->ComponentSpaceFlags,(int *)puVar3,
                       (int *)puVar1);
    memset((void *)((longlong)iVar9 + *(longlong *)&this->ComponentSpaceFlags),0,(longlong)iVar5);
    if (*(int *)puVar3 < 1) {
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
    **(undefined1 **)&this->ComponentSpaceFlags = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

