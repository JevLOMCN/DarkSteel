// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147496f80

UScriptStruct * __cdecl FComponentSpacePoseLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePoseLink,(UObject *)pUVar1,
                         L"ComponentSpacePoseLink");
  }
  return Z_Registration_Info_UScriptStruct_FComponentSpacePoseLink.OuterSingleton;
}

// EvaluateComponentSpace @ 1474cd270

void __thiscall
FComponentSpacePoseLink::EvaluateComponentSpace
          (FComponentSpacePoseLink *this,FComponentSpacePoseContext *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  FBoneContainer *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  UClass *this_00;
  FScopedAnimNodeTrace local_res18 [2];
  FString local_58;
  FString local_48;
  
  if (this->field_0xc != '\0') {
    this_00 = IAnimClassInterface::GetActualAnimClass
                        (*(IAnimClassInterface **)(param_1->_padding_ + 0x148));
    if ((this_00 == (UClass *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0,None);
    }
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(param_1->_padding_ + 0x140),&local_48,(UObject *)0x0,None);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bProcessed",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                        ,0x1be,
                        L"EvaluateComponentSpace already in progress, circular link for AnimInstance [%s] Blueprint [%s]"
                       );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar3 = this->field_0xc;
  this->field_0xc = 1;
  if (*(longlong *)this == 0) {
    lVar7 = param_1->_padding_;
    if ((*(longlong *)(lVar7 + 0x660) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = *(FBoneContainer **)(lVar7 + 0x660);
    FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,pFVar8);
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10);
    uVar6 = *(uint *)&(param_1->Pose).Pose.field_0x8;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    puVar1 = &(param_1->Pose).ComponentSpaceFlags.field_0x8;
    puVar2 = &(param_1->Pose).ComponentSpaceFlags.field_0xc;
    *(undefined4 *)puVar1 = 0;
    if (*(uint *)puVar2 != uVar6) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,uVar6,(ForElementType<unsigned_char> *)&(param_1->Pose).ComponentSpaceFlags,0,
                 (int *)puVar2);
    }
    iVar4 = *(int *)&(param_1->Pose).Pose.field_0x8;
    iVar11 = UE::Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                       (1,1,iVar4,
                        (ForElementType<unsigned_char> *)&(param_1->Pose).ComponentSpaceFlags,
                        (int *)puVar1,(int *)puVar2);
    memset((void *)((longlong)iVar11 + *(longlong *)&(param_1->Pose).ComponentSpaceFlags),0,
           (longlong)iVar4);
    if ((*(int *)puVar1 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    **(undefined1 **)&(param_1->Pose).ComponentSpaceFlags = 1;
    FBlendedCurve::InitFrom(&param_1->Curve,pFVar8);
  }
  else {
    iVar4 = *(int *)((longlong)&param_1->_padding_ + 4);
    uVar5 = *(undefined4 *)&this->field_0x8;
    *(int *)&param_1->_padding_ = iVar4;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = uVar5;
    FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace(local_res18,param_1);
    (**(code **)(**(longlong **)this + 0x20))(*(longlong **)this,param_1);
    FAnimTrace::OutputAnimNodeBlendableAttributes<FComponentSpacePoseContext>
              (param_1,iVar4,*(int *)&this->field_0x8);
    FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(local_res18);
  }
  UE::Anim::Private::ValidatePose
            (&(param_1->Pose).Pose,(FAnimInstanceProxy *)param_1->_padding_,*(FAnimNode_Base **)this
            );
  this->field_0xc = uVar3;
  return;
}

