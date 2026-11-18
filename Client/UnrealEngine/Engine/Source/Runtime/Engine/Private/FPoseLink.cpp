// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147496f40

UScriptStruct * __cdecl FPoseLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseLink.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPoseLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseLink,(UObject *)pUVar1,L"PoseLink");
  }
  return Z_Registration_Info_UScriptStruct_FPoseLink.OuterSingleton;
}

// Evaluate @ 1474cca90

void __thiscall FPoseLink::Evaluate(FPoseLink *this,FPoseContext *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  UClass *this_00;
  FScopedAnimNodeTrace local_res8;
  FString local_28;
  FString local_18;
  
  if (this->field_0xc != '\0') {
    this_00 = IAnimClassInterface::GetActualAnimClass
                        (*(IAnimClassInterface **)(param_1->_padding_ + 0x148));
    if ((this_00 == (UClass *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    }
    UObjectBaseUtility::GetFullName
              (*(UObjectBaseUtility **)(param_1->_padding_ + 0x140),&local_18,(UObject *)0x0,None);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bProcessed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeBase.cpp"
                       ,0x16a,
                       L"Evaluate already in progress, circular link for AnimInstance [%s] Blueprint [%s]"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = this->field_0xc;
  this->field_0xc = 1;
  if (*(longlong *)this == 0) {
    if (param_1->bExpectsAdditivePose == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                 *(FBoneContainer **)&(param_1->Pose).field_0x10);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
    }
  }
  else {
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    uVar3 = *(undefined4 *)&this->field_0x8;
    *(int *)&param_1->_padding_ = iVar2;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = uVar3;
    FAnimTrace::FScopedAnimNodeTrace::FScopedAnimNodeTrace(&local_res8,param_1);
    (**(code **)(**(longlong **)this + 0x18))(*(longlong **)this,param_1);
    FAnimTrace::OutputAnimNodeBlendableAttributes<FPoseContext>
              (param_1,iVar2,*(int *)&this->field_0x8);
    FAnimTrace::FScopedAnimNodeTrace::~FScopedAnimNodeTrace(&local_res8);
  }
  UE::Anim::Private::ValidatePose
            (&param_1->Pose,(FAnimInstanceProxy *)param_1->_padding_,*(FAnimNode_Base **)this);
  this->field_0xc = uVar1;
  return;
}

