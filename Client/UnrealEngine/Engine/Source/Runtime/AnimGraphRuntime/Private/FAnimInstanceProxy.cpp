// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// Update @ 1463e4990

void __thiscall FAnimInstanceProxy::Update(FAnimInstanceProxy *this,float param_1)

{
  return;
}

// GetCustomRootNode @ 1463e4cb0

FAnimNode_Base * __thiscall FAnimInstanceProxy::GetCustomRootNode(FAnimInstanceProxy *this)

{
  return (FAnimNode_Base *)0x0;
}

// GetCustomNodes @ 1463e4e20

void __thiscall
FAnimInstanceProxy::GetCustomNodes
          (FAnimInstanceProxy *this,TArray<FAnimNode_Base_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// Evaluate_WithRoot @ 1463e4f20

bool __thiscall
FAnimInstanceProxy::Evaluate_WithRoot
          (FAnimInstanceProxy *this,FPoseContext *param_1,FAnimNode_Base *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463e4f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x60))();
  return (bool)uVar1;
}

// GetRequiredBones @ 14644ea20

FBoneContainer * __thiscall FAnimInstanceProxy::GetRequiredBones(FAnimInstanceProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FBoneContainer *pFVar3;
  
  if ((this->RequiredBones).Object != (FBoneContainer *)0x0) {
    return (this->RequiredBones).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBoneContainer *)(*pcVar1)();
    return pFVar3;
  }
  return (this->RequiredBones).Object;
}

// GetSkelMeshComponent @ 14644f3a0

USkeletalMeshComponent * __thiscall
FAnimInstanceProxy::GetSkelMeshComponent(FAnimInstanceProxy *this)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  
  if (this->SkeletalMeshComponent != (USkeletalMeshComponent *)0x0) {
    return this->SkeletalMeshComponent;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2821110184175206020>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                     ,0x17c,"SkeletalMeshComponent");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (USkeletalMeshComponent *)(*pcVar1)();
    return pUVar3;
  }
  return this->SkeletalMeshComponent;
}

// GetSkeleton @ 14644f400

USkeleton * __thiscall FAnimInstanceProxy::GetSkeleton(FAnimInstanceProxy *this)

{
  code *pcVar1;
  bool bVar2;
  USkeleton *pUVar3;
  
  if (this->Skeleton != (USkeleton *)0x0) {
    return this->Skeleton;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2821110184175206029>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                     ,0x173,"Skeleton");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (USkeleton *)(*pcVar1)();
    return pUVar3;
  }
  return this->Skeleton;
}

