// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 5

// StaticStruct @ 14cfc1670

UScriptStruct * __cdecl FLiveLinkInstanceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkAnimationCore();
    Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInstanceProxy,(UObject *)pUVar1,
                         L"LiveLinkInstanceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkInstanceProxy.OuterSingleton;
}

// Initialize @ 14cfc16b0

void __thiscall
FLiveLinkInstanceProxy::Initialize(FLiveLinkInstanceProxy *this,UAnimInstance *param_1)

{
  FAnimationBaseContext local_28;
  
  FAnimInstanceProxy::Initialize((FAnimInstanceProxy *)this,param_1);
  FAnimationBaseContext::FAnimationBaseContext
            (&local_28,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
  (**(code **)(this->PoseNode)._padding_)(&this->PoseNode,&local_28);
  return;
}

// PreUpdate @ 14cfc16f0

void __thiscall
FLiveLinkInstanceProxy::PreUpdate(FLiveLinkInstanceProxy *this,UAnimInstance *param_1,float param_2)

{
  char cVar1;
  
  FAnimInstanceProxy::PreUpdate((FAnimInstanceProxy *)this,param_1,param_2);
  cVar1 = (**(code **)((this->PoseNode)._padding_ + 0x38))(&this->PoseNode);
  if (cVar1 != '\0') {
    (**(code **)((this->PoseNode)._padding_ + 0x40))(&this->PoseNode,param_1);
  }
  return;
}

// Evaluate @ 14cfc1740

bool __thiscall FLiveLinkInstanceProxy::Evaluate(FLiveLinkInstanceProxy *this,FPoseContext *param_1)

{
  (**(code **)((this->PoseNode)._padding_ + 0x18))();
  return true;
}

// UpdateAnimationNode @ 14cfc1760

void __thiscall
FLiveLinkInstanceProxy::UpdateAnimationNode
          (FLiveLinkInstanceProxy *this,FAnimationUpdateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  *(short *)&this->_padding_ = (short)this->_padding_ + 1;
  this->_padding_ = GFrameCounter;
  if ((short)this->_padding_ == -1) {
    *(undefined2 *)&this->_padding_ = 0;
  }
  (**(code **)((this->PoseNode)._padding_ + 0x10))();
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar4 = ULiveLinkInstance::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (UObject *)(this->PoseNode).CurrentRetargetAsset.field0_0x0.DebugPtr,
         pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      *(TObjectPtr<ULiveLinkRetargetAsset>_u_0 *)(lVar2 + 0x428) =
           (this->PoseNode).CurrentRetargetAsset.field0_0x0;
    }
  }
  return;
}

