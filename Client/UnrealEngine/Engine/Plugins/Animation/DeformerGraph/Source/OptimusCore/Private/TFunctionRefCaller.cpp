// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 73

// Call @ 14e1801c0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<float_(__cdecl*)(TArrayView<float_const_,int>),float,TArrayView<float_const_,int>_>
::Call(void *param_1,TArrayView<float_const_,int> *param_2)

{
  float fVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  fVar1 = (float)(**(code **)param_1)(&local_18);
  return fVar1;
}

// Call @ 14e1801f0

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  code *pcVar1;
  FName FVar2;
  FProperty *pFVar3;
  FFieldObjectUnion local_res8;
  
  pcVar1 = *(code **)param_1;
  local_res8 = (FFieldObjectUnion)(param_2->Container).Unknown;
  FVar2 = *param_3;
  if ((((local_res8.Unknown & 1) != 0) &&
      ((UObject *)(local_res8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res8.Unknown & 0xfffffffffffffffe));
  }
  pFVar3 = (FProperty *)(*pcVar1)(&local_res8,FVar2);
  return pFVar3;
}

// Call @ 14e180240

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  code *pcVar1;
  FName FVar2;
  FProperty *pFVar3;
  FFieldObjectUnion local_res8;
  
  pcVar1 = *(code **)param_1;
  local_res8 = (FFieldObjectUnion)(param_2->Container).Unknown;
  FVar2 = *param_3;
  if ((((local_res8.Unknown & 1) != 0) &&
      ((UObject *)(local_res8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res8.Unknown & 0xfffffffffffffffe));
  }
  pFVar3 = (FProperty *)(*pcVar1)(&local_res8,FVar2);
  return pFVar3;
}

// Call @ 14e180290

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  code *pcVar1;
  FName FVar2;
  FProperty *pFVar3;
  FFieldObjectUnion local_res8;
  
  pcVar1 = *(code **)param_1;
  local_res8 = (FFieldObjectUnion)(param_2->Container).Unknown;
  FVar2 = *param_3;
  if ((((local_res8.Unknown & 1) != 0) &&
      ((UObject *)(local_res8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res8.Unknown & 0xfffffffffffffffe));
  }
  pFVar3 = (FProperty *)(*pcVar1)(&local_res8,FVar2);
  return pFVar3;
}

// Call @ 14e1802e0

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>::
Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  code *pcVar1;
  FName FVar2;
  FProperty *pFVar3;
  FFieldObjectUnion local_res8;
  
  pcVar1 = *(code **)param_1;
  local_res8 = (FFieldObjectUnion)(param_2->Container).Unknown;
  FVar2 = *param_3;
  if ((((local_res8.Unknown & 1) != 0) &&
      ((UObject *)(local_res8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res8.Unknown & 0xfffffffffffffffe));
  }
  pFVar3 = (FProperty *)(*pcVar1)(&local_res8,FVar2);
  return pFVar3;
}

// Call @ 14e180330

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  code *pcVar1;
  FName FVar2;
  FProperty *pFVar3;
  FFieldObjectUnion local_res8;
  
  pcVar1 = *(code **)param_1;
  local_res8 = (FFieldObjectUnion)(param_2->Container).Unknown;
  FVar2 = *param_3;
  if ((((local_res8.Unknown & 1) != 0) &&
      ((UObject *)(local_res8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res8.Unknown & 0xfffffffffffffffe));
  }
  pFVar3 = (FProperty *)(*pcVar1)(&local_res8,FVar2);
  return pFVar3;
}

// Call @ 14e180380

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  code *pcVar1;
  FName FVar2;
  FProperty *pFVar3;
  FFieldObjectUnion local_res8;
  
  pcVar1 = *(code **)param_1;
  local_res8 = (FFieldObjectUnion)(param_2->Container).Unknown;
  FVar2 = *param_3;
  if ((((local_res8.Unknown & 1) != 0) &&
      ((UObject *)(local_res8.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res8.Unknown & 0xfffffffffffffffe));
  }
  pFVar3 = (FProperty *)(*pcVar1)(&local_res8,FVar2);
  return pFVar3;
}

// Call @ 14e1803d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),void,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack>
::Call(void *param_1,TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *param_2,
      FSkinWeightProfileStack *param_3)

{
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_18 = (param_3->Layers).Elements[0].ComparisonIndex.Value;
  uStack_14 = (param_3->Layers).Elements[0].Number;
  uStack_10 = (param_3->Layers).Elements[1].ComparisonIndex.Value;
  uStack_c = (param_3->Layers).Elements[1].Number;
  (**(code **)param_1)(param_2->WeakPtr,&local_18);
  return;
}

// Call @ 14e180400

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(UOptimusNode_*),bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e180406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(*param_2);
  return (bool)uVar1;
}

// Call @ 14e180410

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
::Call(void *param_1,TArrayView<unsigned_char_const_,int> *param_2,
      FShaderValueContainerView *param_3)

{
  undefined1 uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uchar *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = (param_3->ShaderValue).DataPtr;
  uStack_20 = *(undefined8 *)&(param_3->ShaderValue).ArrayNum;
  local_18 = *(undefined4 *)&(param_3->ArrayList).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(param_3->ArrayList).DataPtr + 4);
  iStack_10 = (param_3->ArrayList).ArrayNum;
  uStack_c = *(undefined4 *)&(param_3->ArrayList).field_0xc;
  local_38 = *(undefined4 *)&param_2->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_30 = param_2->ArrayNum;
  uStack_2c = *(undefined4 *)&param_2->field_0xc;
  uVar1 = (**(code **)param_1)(&local_38,&local_28);
  return (bool)uVar1;
}

// Call @ 14e180450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,void,UOptimusNode_*>::Call
          (void *param_1,UOptimusNode **param_2)

{
  `UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e180460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddComponentBindingGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FText *pFVar4;
  UOptimusNode *this;
  FText local_18;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_ComponentSource::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e18049a;
  }
  this = (UOptimusNode *)0x0;
LAB_14e18049a:
  pUVar2 = *(UObject **)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar2);
  }
  this[1]._padding_ = (longlong)pUVar2;
  pFVar4 = FText::FromName(&local_18,(FName *)(pUVar2 + 1));
  UOptimusNode::SetDisplayName(this,pFVar4);
  return;
}

// Call @ 14e1804f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddDataInterfaceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  UOptimusNode *pUVar4;
  UObject *local_res8;
  
  pUVar4 = *param_2;
  if (pUVar4 != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_DataInterface::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e18052f;
  }
  pUVar4 = (UOptimusNode *)0x0;
LAB_14e18052f:
  local_res8 = *(UObject **)param_1;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x338);
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(pUVar4,&local_res8);
  return;
}

// Call @ 14e180580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddFunctionReferenceNode'::__l2::<lambda_1>,void,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  UOptimusDeformer *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UOptimusNode_FunctionReference *pUVar5;
  FOptimusFunctionGraphIdentifier *pFVar6;
  FOptimusFunctionGraphIdentifier local_28;
  
  pUVar5 = CastChecked<UOptimusNode_FunctionReference,UOptimusNode>(*param_2);
  pFVar6 = UOptimusFunctionNodeGraph::GetGraphIdentifier
                     (*(UOptimusFunctionNodeGraph **)param_1,&local_28);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (pFVar6->Asset).field0_0x0.DebugPtr, pUVar1 != (UOptimusDeformer *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar5->FunctionGraphIdentifier).Asset.field0_0x0 = (pFVar6->Asset).field0_0x0;
  uVar2 = (pFVar6->Guid).B;
  uVar3 = (pFVar6->Guid).C;
  uVar4 = (pFVar6->Guid).D;
  (pUVar5->FunctionGraphIdentifier).Guid.A = (pFVar6->Guid).A;
  (pUVar5->FunctionGraphIdentifier).Guid.B = uVar2;
  (pUVar5->FunctionGraphIdentifier).Guid.C = uVar3;
  (pUVar5->FunctionGraphIdentifier).Guid.D = uVar4;
  return;
}

// Call @ 14e1805f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_1>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  UOptimusNode *this;
  bool bVar1;
  UOptimusNode_LoopTerminal *pUVar2;
  
  this = *param_2;
  pUVar2 = CastChecked<UOptimusNode_LoopTerminal,UOptimusNode>(this);
  pUVar2->TerminalType = Entry;
  bVar1 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar1;
}

// Call @ 14e180630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddNodeInternal'::__l2::<lambda_1>,bool,UOptimusNode_*>::Call
          (void *param_1,UOptimusNode **param_2)

{
  UOptimusNode *this;
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  UOptimusNode *local_res8;
  
  this = *param_2;
  if (*(void **)param_1 != (void *)0x0) {
    local_res8 = this;
    CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar4 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)param_1 + 0x28);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res8);
  }
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,(TVector2<double> *)((longlong)param_1 + 0x30));
  return bVar2;
}

// Call @ 14e1806a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_1>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  UOptimusNode *this;
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  UOptimusNode *local_res8;
  
  this = *param_2;
  if (*(void **)param_1 != (void *)0x0) {
    local_res8 = this;
    CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar4 = (longlong *)((longlong)param_1 + 0x10);
    if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)param_1 + 0x28);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res8);
  }
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,(TVector2<double> *)((longlong)param_1 + 0x30));
  return bVar2;
}

// Call @ 14e180710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddResourceGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  UClass *pUVar2;
  UOptimusNode_ResourceAccessorBase *this;
  
  this = (UOptimusNode_ResourceAccessorBase *)*param_2;
  if (this != (UOptimusNode_ResourceAccessorBase *)0x0) {
    pUVar2 = UOptimusNode_GetResource::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e18074a;
  }
  this = (UOptimusNode_ResourceAccessorBase *)0x0;
LAB_14e18074a:
  UOptimusNode_ResourceAccessorBase::SetResourceDescription
            (this,*(UOptimusResourceDescription **)param_1);
  return;
}

// Call @ 14e180770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddResourceNode'::__l2::<lambda_1>,void,UOptimusNode_*>::Call
          (void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  UClass *pUVar2;
  UOptimusNode_ResourceAccessorBase *this;
  
  this = (UOptimusNode_ResourceAccessorBase *)*param_2;
  if (this != (UOptimusNode_ResourceAccessorBase *)0x0) {
    pUVar2 = UOptimusNode_Resource::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e1807aa;
  }
  this = (UOptimusNode_ResourceAccessorBase *)0x0;
LAB_14e1807aa:
  UOptimusNode_ResourceAccessorBase::SetResourceDescription
            (this,*(UOptimusResourceDescription **)param_1);
  return;
}

// Call @ 14e1807d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddResourceSetNode'::__l2::<lambda_1>,void,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  UClass *pUVar2;
  UOptimusNode_ResourceAccessorBase *this;
  
  this = (UOptimusNode_ResourceAccessorBase *)*param_2;
  if (this != (UOptimusNode_ResourceAccessorBase *)0x0) {
    pUVar2 = UOptimusNode_SetResource::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14e18080a;
  }
  this = (UOptimusNode_ResourceAccessorBase *)0x0;
LAB_14e18080a:
  UOptimusNode_ResourceAccessorBase::SetResourceDescription
            (this,*(UOptimusResourceDescription **)param_1);
  return;
}

// Call @ 14e180830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>,void,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  `UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e180840

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14e180850

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::__l2::<lambda_1>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = UOptimusNode::SetGraphPositionDirect(*param_2,param_1);
  return bVar1;
}

// Call @ 14e180870

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14e180880

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::DuplicateNode'::__l2::<lambda_1>,bool,UOptimusNode_*>::Call
          (void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = UOptimusNode::SetGraphPositionDirect(*param_2,param_1);
  return bVar1;
}

// Call @ 14e1808a0

TOptional<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l2::<lambda_1>,TOptional<float>,FName>
::Call(void *param_1,FName *param_2)

{
  float *pfVar1;
  FName *in_R8;
  
  pfVar1 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)param_2,*in_R8);
  if (pfVar1 != (float *)0x0) {
    *(float *)param_1 = *pfVar1;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TOptional<float>)param_1;
  }
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return (TOptional<float>)param_1;
}

// Call @ 14e1808e0

TOptional<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Optimus::EvaluateExecutionDomainExpressionParseResult'::__l2::<lambda_1>,TOptional<float>,FName>
::Call(void *param_1,FName *param_2)

{
  float *pfVar1;
  FName *in_R8;
  
  pfVar1 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)*param_2,*in_R8);
  if (pfVar1 != (float *)0x0) {
    *(float *)param_1 = *pfVar1;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TOptional<float>)param_1;
  }
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return (TOptional<float>)param_1;
}

// Call @ 14e180920

TOptional<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Optimus::ParseExecutionDomainExpression'::__l2::<lambda_1>,TOptional<float>,FName>
::Call(void *param_1,FName *param_2)

{
  float *pfVar1;
  FName *in_R8;
  
  pfVar1 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)param_2,*in_R8);
  if (pfVar1 != (float *)0x0) {
    *(float *)param_1 = *pfVar1;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TOptional<float>)param_1;
  }
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return (TOptional<float>)param_1;
}

// Call @ 14e180960

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>,FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  FName FVar1;
  FProperty *pFVar2;
  ulonglong local_res10 [3];
  
  FVar1 = *param_3;
  local_res10[0] = (param_2->Container).Unknown;
  if ((((local_res10[0] & 1) != 0) &&
      ((UObject *)(local_res10[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res10[0] & 0xfffffffffffffffe));
  }
  pFVar2 = `FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>::operator()
                     (param_1,(FFieldVariant)local_res10,FVar1);
  return pFVar2;
}

// Call @ 14e1809c0

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>,FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  FName FVar1;
  FProperty *pFVar2;
  ulonglong local_res10 [3];
  
  FVar1 = *param_3;
  local_res10[0] = (param_2->Container).Unknown;
  if ((((local_res10[0] & 1) != 0) &&
      ((UObject *)(local_res10[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res10[0] & 0xfffffffffffffffe));
  }
  pFVar2 = `FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>::operator()
                     (param_1,(FFieldVariant)local_res10,FVar1);
  return pFVar2;
}

// Call @ 14e180a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined1 auStackX_8 [8];
  
  param_2->TypeName = **(FName **)param_1;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  pIVar2 = (param_2->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_2->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,auStackX_8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar1 + 1);
  (param_2->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10);
  if ((FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10) == (FShaderValueType *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FShaderValueType::GetResourceElementSize
                      ((FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10));
  }
  param_2->ShaderValueSize = iVar8;
  param_2->TypeCategory = **(FName **)((longlong)param_1 + 0x18);
  if (*(char *)(*(longlong *)((longlong)param_1 + 0x20) + 0x10) != '\0') {
    param_2->bHasCustomPinColor = true;
    puVar4 = *(undefined8 **)((longlong)param_1 + 0x20);
    if (*(char *)(puVar4 + 2) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar6 = puVar4[1];
    *(undefined8 *)&(param_2->CustomPinColor).field0_0x0 = *puVar4;
    *(undefined8 *)((longlong)&(param_2->CustomPinColor).field0_0x0 + 8) = uVar6;
  }
  param_2->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x28);
  return;
}

// Call @ 14e180a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 uVar4;
  int iVar5;
  UObject *pUStackX_8;
  
  param_2->TypeName = **(FName **)param_1;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  pIVar2 = (param_2->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_2->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&pUStackX_8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar1 + 1);
  (param_2->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10);
  iVar5 = FShaderValueType::GetResourceElementSize
                    ((FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10));
  param_2->ShaderValueSize = iVar5;
  param_2->TypeCategory = **(FName **)((longlong)param_1 + 0x18);
  pUStackX_8 = (UObject *)**(undefined8 **)((longlong)param_1 + 0x20);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_8 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_8);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&pUStackX_8);
  param_2->bHasCustomPinColor = true;
  uVar4 = (*(undefined8 **)((longlong)param_1 + 0x28))[1];
  *(undefined8 *)&(param_2->CustomPinColor).field0_0x0 = **(undefined8 **)((longlong)param_1 + 0x28)
  ;
  *(undefined8 *)((longlong)&(param_2->CustomPinColor).field0_0x0 + 8) = uVar4;
  param_2->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x30);
  return;
}

// Call @ 14e180a40

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>::operator()(param_1,*param_2)
  ;
  return bVar1;
}

// Call @ 14e180a50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusDeformerInstance::ReleaseResources'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  *this;
  code *pcVar1;
  bool bVar2;
  
  if (*(FSceneInterface **)((longlong)param_1 + 0x10) != (FSceneInterface *)0x0) {
    ComputeFramework::AbortWork
              (*(FSceneInterface **)((longlong)param_1 + 0x10),
               *(UObject **)((longlong)param_1 + 0x18));
  }
  this = *(TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           **)param_1;
  if (this != (TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
               *)0x0) {
    bVar2 = IsInRenderingThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                         ,0x9d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::Reset(this);
    TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::Reset(this + 1);
    return;
  }
  return;
}

// Call @ 14e180ad0

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  FName FVar1;
  FProperty *pFVar2;
  ulonglong local_res10 [3];
  
  FVar1 = *param_3;
  local_res10[0] = (param_2->Container).Unknown;
  if ((((local_res10[0] & 1) != 0) &&
      ((UObject *)(local_res10[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res10[0] & 0xfffffffffffffffe));
  }
  pFVar2 = `FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>::operator()
                     (param_1,(FFieldVariant)local_res10,FVar1);
  return pFVar2;
}

// Call @ 14e180b30

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  FName FVar1;
  FProperty *pFVar2;
  ulonglong local_res10 [3];
  
  FVar1 = *param_3;
  local_res10[0] = (param_2->Container).Unknown;
  if ((((local_res10[0] & 1) != 0) &&
      ((UObject *)(local_res10[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res10[0] & 0xfffffffffffffffe));
  }
  pFVar2 = `FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>::operator()
                     (param_1,(FFieldVariant)local_res10,FVar1);
  return pFVar2;
}

// Call @ 14e180b90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>,bool,UOptimusNode_*>::Call
          (void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e180ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusDeformerInstance::EnqueueWork'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(param_1,&local_28);
  if ((*(int *)((longlong)param_1 + 0x10) != 0) &&
     (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Call @ 14e180be0

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  FName FVar1;
  FProperty *pFVar2;
  ulonglong local_res10 [3];
  
  FVar1 = *param_3;
  local_res10[0] = (param_2->Container).Unknown;
  if ((((local_res10[0] & 1) != 0) &&
      ((UObject *)(local_res10[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res10[0] & 0xfffffffffffffffe));
  }
  pFVar2 = `FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>::operator()
                     (param_1,(FFieldVariant)local_res10,FVar1);
  return pFVar2;
}

// Call @ 14e180c40

FProperty * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,FProperty_*,FFieldVariant,FName>
::Call(void *param_1,FFieldVariant *param_2,FName *param_3)

{
  FName FVar1;
  FProperty *pFVar2;
  ulonglong local_res10 [3];
  
  FVar1 = *param_3;
  local_res10[0] = (param_2->Container).Unknown;
  if ((((local_res10[0] & 1) != 0) &&
      ((UObject *)(local_res10[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (GC::GIsIncrementalReachabilityPending)) {
    GC::MarkAsReachable((UObject *)(local_res10[0] & 0xfffffffffffffffe));
  }
  pFVar2 = `FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>::operator()
                     (param_1,(FFieldVariant)local_res10,FVar1);
  return pFVar2;
}

// Call @ 14e180ca0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>,bool,UOptimusNode_*>::Call
          (void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e180cb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::__l13::<lambda_1>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::
          PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::__l13::
          <lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e180cc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e180cd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e180ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusDeformer::Compile'::__l2::<lambda_2>,void,enum_EOptimusDiagnosticLevel,FText,UObject_const_*>
::Call(void *param_1,EOptimusDiagnosticLevel *param_2,FText *param_3,UObject **param_4)

{
  UObject *pUVar1;
  FText *pFVar2;
  FText local_18;
  
  pUVar1 = *param_4;
  pFVar2 = FText::FText(&local_18,param_3);
  `UOptimusDeformer::Compile'::__l2::<lambda_2>::operator()(param_1,*param_2,pFVar2,pUVar1);
  return;
}

// Call @ 14e180d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FName *pFVar6;
  undefined1 auStackX_8 [8];
  UObject *pUStackX_10;
  FName FStackX_18;
  
  param_2->TypeName = **(FName **)param_1;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  pIVar2 = (param_2->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_2->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,auStackX_8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar1 + 1);
  pFVar6 = ::FName::FName(&FStackX_18,L"object");
  param_2->TypeCategory = *pFVar6;
  pUStackX_10 = (UObject *)**(undefined8 **)((longlong)param_1 + 0x10);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_10);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&pUStackX_10);
  param_2->bHasCustomPinColor = true;
  puVar4 = *(undefined8 **)((longlong)param_1 + 0x18);
  if (*(char *)(puVar4 + 2) != '\0') {
    uVar5 = puVar4[1];
    *(undefined8 *)&(param_2->CustomPinColor).field0_0x0 = *puVar4;
    *(undefined8 *)((longlong)&(param_2->CustomPinColor).field0_0x0 + 8) = uVar5;
  }
  param_2->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x20);
  return;
}

// Call @ 14e180d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FName *pFVar6;
  undefined1 auStackX_8 [8];
  UObject *pUStackX_10;
  FName FStackX_18;
  
  param_2->TypeName = **(FName **)param_1;
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  pIVar2 = (param_2->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_2->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,auStackX_8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar1 + 1);
  pFVar6 = ::FName::FName(&FStackX_18,L"struct");
  param_2->TypeCategory = *pFVar6;
  pUStackX_10 = (UObject *)**(undefined8 **)((longlong)param_1 + 0x10);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_10);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&pUStackX_10);
  param_2->bHasCustomPinColor = true;
  puVar4 = *(undefined8 **)((longlong)param_1 + 0x18);
  if (*(char *)(puVar4 + 2) != '\0') {
    uVar5 = puVar4[1];
    *(undefined8 *)&(param_2->CustomPinColor).field0_0x0 = *puVar4;
    *(undefined8 *)((longlong)&(param_2->CustomPinColor).field0_0x0 + 8) = uVar5;
  }
  param_2->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x20);
  return;
}

// Call @ 14e180d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  EOptimusDataTypeFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  FName *pFVar9;
  undefined1 auStackX_8 [8];
  UObject *pUStackX_10;
  FName FStackX_18;
  
  param_2->TypeName = **(FName **)param_1;
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  pIVar3 = (param_2->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_2->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,auStackX_8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar2 + 1);
  (param_2->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10);
  param_2->ShaderValueSize = **(int **)((longlong)param_1 + 0x18);
  pFVar9 = ::FName::FName(&FStackX_18,L"struct");
  param_2->TypeCategory = *pFVar9;
  pUStackX_10 = (UObject *)**(undefined8 **)((longlong)param_1 + 0x20);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_10);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&pUStackX_10);
  if (*(char *)(*(longlong *)((longlong)param_1 + 0x28) + 0x10) != '\0') {
    param_2->bHasCustomPinColor = true;
    puVar5 = *(undefined8 **)((longlong)param_1 + 0x28);
    if (*(char *)(puVar5 + 2) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar7 = puVar5[1];
    *(undefined8 *)&(param_2->CustomPinColor).field0_0x0 = *puVar5;
    *(undefined8 *)((longlong)&(param_2->CustomPinColor).field0_0x0 + 8) = uVar7;
  }
  param_2->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x30);
  EVar1 = param_2->TypeFlags;
  param_2->TypeFlags = EVar1 | IsStructType;
  if (**(char **)((longlong)param_1 + 0x38) != '\0') {
    param_2->TypeFlags = EVar1 | (ShowElements|IsStructType);
  }
  return;
}

// Call @ 14e180d60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>,bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
::Call(void *param_1,TArrayView<unsigned_char_const_,int> *param_2,
      FShaderValueContainerView *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> local_38;
  FShaderValueContainerView local_28;
  
  local_28.ShaderValue.DataPtr = (param_3->ShaderValue).DataPtr;
  local_28.ShaderValue.ArrayNum = (param_3->ShaderValue).ArrayNum;
  local_28.ShaderValue._12_4_ = *(undefined4 *)&(param_3->ShaderValue).field_0xc;
  local_28.ArrayList.DataPtr = (param_3->ArrayList).DataPtr;
  local_28.ArrayList.ArrayNum = (param_3->ArrayList).ArrayNum;
  local_28.ArrayList._12_4_ = *(undefined4 *)&(param_3->ArrayList).field_0xc;
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>::operator()
                    (param_1,&local_38,&local_28);
  return bVar1;
}

// Call @ 14e180da0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_2>,bool,UOptimusNodeGraph_*>
::Call(void *param_1,UOptimusNodeGraph **param_2)

{
  UOptimusNodeSubGraph *pUVar1;
  
  pUVar1 = CastChecked<UOptimusNodeSubGraph,UOptimusNodeGraph>(*param_2);
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar1->InputBindings).InnerArray,param_1);
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar1->OutputBindings).InnerArray,
             (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10));
  return true;
}

// Call @ 14e180df0

TOptional<float> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l28::<lambda_2>,TOptional<float>,FName>
::Call(void *param_1,FName *param_2)

{
  float *pfVar1;
  FName *in_R8;
  
  pfVar1 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)param_2,*in_R8);
  if (pfVar1 != (float *)0x0) {
    *(float *)param_1 = *pfVar1;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TOptional<float>)param_1;
  }
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return (TOptional<float>)param_1;
}

// Call @ 14e180e30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>,bool,UOptimusNodeGraph_*>
::Call(void *param_1,UOptimusNodeGraph **param_2)

{
  int iVar1;
  UClass *pUVar2;
  UOptimusNodeGraph *pUVar3;
  
  pUVar3 = *param_2;
  if (pUVar3 != (UOptimusNodeGraph *)0x0) {
    pUVar2 = UOptimusNodeSubGraph::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14e180e6a;
  }
  pUVar3 = (UOptimusNodeGraph *)0x0;
LAB_14e180e6a:
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&pUVar3[1]._padding_,
             param_1);
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)&pUVar3[1]._padding_,
             (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10));
  return true;
}

// Call @ 14e180ea0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>,bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
::Call(void *param_1,TArrayView<unsigned_char_const_,int> *param_2,
      FShaderValueContainerView *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> local_38;
  FShaderValueContainerView local_28;
  
  local_28.ShaderValue.DataPtr = (param_3->ShaderValue).DataPtr;
  local_28.ShaderValue.ArrayNum = (param_3->ShaderValue).ArrayNum;
  local_28.ShaderValue._12_4_ = *(undefined4 *)&(param_3->ShaderValue).field_0xc;
  local_28.ArrayList.DataPtr = (param_3->ArrayList).DataPtr;
  local_28.ArrayList.ArrayNum = (param_3->ArrayList).ArrayNum;
  local_28.ArrayList._12_4_ = *(undefined4 *)&(param_3->ArrayList).field_0xc;
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>::operator()
                    (param_1,&local_38,&local_28);
  return bVar1;
}

// Call @ 14e180ee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>,bool,UOptimusNodeGraph_*>
::Call(void *param_1,UOptimusNodeGraph **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e180ef0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_2>,bool,UOptimusNodeGraph_*>
::Call(void *param_1,UOptimusNodeGraph **param_2)

{
  UOptimusNodeSubGraph *pUVar1;
  
  pUVar1 = CastChecked<UOptimusNodeSubGraph,UOptimusNodeGraph>(*param_2);
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar1->InputBindings).InnerArray,
             (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0xa0));
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar1->OutputBindings).InnerArray,
             (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0xb0));
  return true;
}

// Call @ 14e180f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRigUnit_AddOptimusDeformer::StaticExecute'::__l42::<lambda_2>,void>::Call
          (void *param_1)

{
  bool bVar1;
  UOptimusDeformer *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)param_1 + 0x2c));
  if (bVar1) {
    pUVar2 = (UOptimusDeformer *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x2c));
    `FRigUnit_AddOptimusDeformer::StaticExecute'::__l39::<lambda_1>::operator()(param_1,pUVar2);
  }
  return;
}

// Call @ 14e180f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_3>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  EOptimusDataTypeFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  FName *pFVar9;
  undefined1 auStackX_8 [8];
  UObject *pUStackX_10;
  FName FStackX_18;
  
  param_2->TypeName = **(FName **)param_1;
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  pIVar3 = (param_2->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_2->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,auStackX_8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar2 + 1);
  (param_2->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10);
  param_2->ShaderValueSize = **(int **)((longlong)param_1 + 0x18);
  pFVar9 = ::FName::FName(&FStackX_18,L"struct");
  param_2->TypeCategory = *pFVar9;
  pUStackX_10 = (UObject *)**(undefined8 **)((longlong)param_1 + 0x20);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_10);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&pUStackX_10);
  if (*(char *)(*(longlong *)((longlong)param_1 + 0x28) + 0x10) != '\0') {
    param_2->bHasCustomPinColor = true;
    puVar5 = *(undefined8 **)((longlong)param_1 + 0x28);
    if (*(char *)(puVar5 + 2) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar7 = puVar5[1];
    *(undefined8 *)&(param_2->CustomPinColor).field0_0x0 = *puVar5;
    *(undefined8 *)((longlong)&(param_2->CustomPinColor).field0_0x0 + 8) = uVar7;
  }
  param_2->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x30);
  EVar1 = param_2->TypeFlags;
  param_2->TypeFlags = EVar1 | IsStructType;
  if (**(char **)((longlong)param_1 + 0x38) != '\0') {
    param_2->TypeFlags = EVar1 | (ShowElements|IsStructType);
  }
  return;
}

// Call @ 14e180fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_3>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  EOptimusDataTypeUsageFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FName *pFVar5;
  FName FStackX_8;
  
  param_2->TypeName = **(FName **)param_1;
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  pIVar3 = (param_2->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_2->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&FStackX_8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar2 + 1);
  (param_2->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)param_1 + 0x10);
  param_2->ShaderValueSize = **(int **)((longlong)param_1 + 0x18);
  pFVar5 = ::FName::FName(&FStackX_8,L"struct");
  param_2->TypeCategory = *pFVar5;
  FStackX_8 = **(FName **)((longlong)param_1 + 0x20);
  if ((GC::GIsIncrementalReachabilityPending != false) && (FStackX_8 != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)FStackX_8);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&FStackX_8);
  EVar1 = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x28);
  param_2->TypeFlags = param_2->TypeFlags | IsStructType;
  param_2->UsageFlags = EVar1;
  return;
}

// Call @ 14e180fb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>,bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
::Call(void *param_1,TArrayView<unsigned_char_const_,int> *param_2,
      FShaderValueContainerView *param_3)

{
  bool bVar1;
  TArrayView<unsigned_char_const_,int> local_38;
  FShaderValueContainerView local_28;
  
  local_28.ShaderValue.DataPtr = (param_3->ShaderValue).DataPtr;
  local_28.ShaderValue.ArrayNum = (param_3->ShaderValue).ArrayNum;
  local_28.ShaderValue._12_4_ = *(undefined4 *)&(param_3->ShaderValue).field_0xc;
  local_28.ArrayList.DataPtr = (param_3->ArrayList).DataPtr;
  local_28.ArrayList.ArrayNum = (param_3->ArrayList).ArrayNum;
  local_28.ArrayList._12_4_ = *(undefined4 *)&(param_3->ArrayList).field_0xc;
  local_38.DataPtr = param_2->DataPtr;
  local_38.ArrayNum = param_2->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = `FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>::operator()
                    (param_1,&local_38,&local_28);
  return bVar1;
}

// Call @ 14e180ff0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_3>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e18102a;
  }
  this = (UOptimusNode *)0x0;
LAB_14e18102a:
  *(undefined4 *)&this[1]._padding_ = 1;
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e181050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14e181060

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_3>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e18109a;
  }
  this = (UOptimusNode *)0x0;
LAB_14e18109a:
  *(undefined4 *)&this[1]._padding_ = 1;
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e1810c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_3>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e1810fa;
  }
  this = (UOptimusNode *)0x0;
LAB_14e1810fa:
  *(undefined4 *)&this[1]._padding_ = 1;
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e181120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusDeformer::PostLoad'::__l85::<lambda_3>,void>::Call(void *param_1)

{
  bool bVar1;
  UOptimusDeformer *this;
  
  bVar1 = FWeakObjectPtr::IsValid(param_1);
  if (bVar1) {
    this = (UOptimusDeformer *)FWeakObjectPtr::Get(param_1);
    UOptimusDeformer::Compile(this);
    return;
  }
  return;
}

// Call @ 14e181160

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_4>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e18119a;
  }
  this = (UOptimusNode *)0x0;
LAB_14e18119a:
  *(undefined4 *)&this[1]._padding_ = 2;
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e1811c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 14e1811d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_4>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e18120a;
  }
  this = (UOptimusNode *)0x0;
LAB_14e18120a:
  *(undefined4 *)&this[1]._padding_ = 2;
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e181230

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_4>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_GraphTerminal::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e18126a;
  }
  this = (UOptimusNode *)0x0;
LAB_14e18126a:
  *(undefined4 *)&this[1]._padding_ = 2;
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e181290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l60::<lambda_4>,void,FOptimusDataType_&>
::Call(void *param_1,FOptimusDataType *param_2)

{
  EOptimusDataTypeUsageFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FName *pFVar5;
  FName FStackX_8;
  
  param_2->TypeName = **(FName **)param_1;
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  pIVar3 = (param_2->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_2->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&FStackX_8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_2->DisplayName).Flags = *(uint *)(plVar2 + 1);
  pFVar5 = ::FName::FName(&FStackX_8,L"struct");
  param_2->TypeCategory = *pFVar5;
  FStackX_8 = **(FName **)((longlong)param_1 + 0x10);
  if ((GC::GIsIncrementalReachabilityPending != false) && (FStackX_8 != (FName)0x0)) {
    GC::MarkAsReachable((UObject *)FStackX_8);
  }
  FWeakObjectPtr::operator=(&(param_2->TypeObject).WeakPtr,(FObjectPtr)&FStackX_8);
  EVar1 = **(EOptimusDataTypeUsageFlags **)((longlong)param_1 + 0x18);
  param_2->TypeFlags = param_2->TypeFlags | IsStructType;
  param_2->UsageFlags = EVar1;
  return;
}

// Call @ 14e1812a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>::operator()(param_1,*param_2)
  ;
  return bVar1;
}

// Call @ 14e1812b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14e1812c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_6>,bool,UOptimusNode_*>::
Call(void *param_1,UOptimusNode **param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNode *this;
  
  this = *param_2;
  if (this != (UOptimusNode *)0x0) {
    pUVar3 = UOptimusNode_SubGraphReference::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14e1812fa;
  }
  this = (UOptimusNode *)0x0;
LAB_14e1812fa:
  this[1]._padding_ = *(longlong *)((longlong)param_1 + 0x10);
  bVar2 = UOptimusNode::SetGraphPositionDirect(this,param_1);
  return bVar2;
}

// Call @ 14e181320

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l51::<lambda_6>,bool,UOptimusNode_*>
::Call(void *param_1,UOptimusNode **param_2)

{
  bool bVar1;
  
  bVar1 = `UOptimusNodeGraph::CollapseNodesToSubGraph'::__l51::<lambda_6>::operator()
                    (param_1,*param_2);
  return bVar1;
}

