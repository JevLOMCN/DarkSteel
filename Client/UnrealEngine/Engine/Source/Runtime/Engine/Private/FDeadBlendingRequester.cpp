// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AddDebugRecord @ 1474b95c0

void __thiscall
UE::Anim::FDeadBlendingRequester::AddDebugRecord
          (FDeadBlendingRequester *this,FAnimInstanceProxy *param_1,int param_2)

{
  FAnimTrace::OutputAnimNodeAttribute
            (this->Proxy,param_1,this->NodeId,param_2,IInertializationRequester::Attribute);
  return;
}

// GetTag @ 1474e0120

FName __thiscall UE::Anim::FDeadBlendingRequester::GetTag(FDeadBlendingRequester *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Node->Tag;
  return in_RDX;
}

// RequestInertialization @ 1474f5510

void __thiscall
UE::Anim::FDeadBlendingRequester::RequestInertialization
          (FDeadBlendingRequester *this,FInertializationRequest *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001474f5517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->Node + 0xa0))();
  return;
}

// RequestInertialization @ 1474f5530

void __thiscall
UE::Anim::FDeadBlendingRequester::RequestInertialization
          (FDeadBlendingRequester *this,float param_1,UBlendProfile *param_2)

{
  FAnimNode_DeadBlending *pFVar1;
  code *pcVar2;
  float local_68 [2];
  UBlendProfile *local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 local_48;
  FText local_40;
  void *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  pFVar1 = this->Node;
  pcVar2 = *(code **)(*(longlong *)pFVar1 + 0xa0);
  local_68[0] = param_1;
  local_60 = param_2;
  if ((GC::GIsIncrementalReachabilityPending) && (param_2 != (UBlendProfile *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FText::FText(&local_40);
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0xffffffff;
  local_18 = 0;
  (*pcVar2)(pFVar1,local_68);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return;
}

