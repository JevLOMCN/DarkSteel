// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 223

// GetAddress @ 14e1081d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0>::GetAddress
          (TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 14e1081e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_float_TArrayView<float_const_,int> **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14e108200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0>::Destroy
          (TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e108205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0> @ 14e15ddf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0>::
~TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0>
          (TFunction_OwnedObject<float_(__cdecl*)(TArrayView<float_const_,int>),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AMV__TArrayView___CBMH___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> @ 14e15de10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::
~TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>
          (TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFBoolProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> @ 14e15de30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::
~TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>
          (TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFDoubleProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> @ 14e15de50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::
~TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>
          (TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFFloatProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> @ 14e15de70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::
~TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>
          (TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFIntProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> @ 14e15de90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::
~TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>
          (TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFNameProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0> @ 14e15deb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0>::
~TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0>
          (TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVFUInt32Property__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0> @ 14e15ded0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXU__TWeakObjectPtr_VUSkeletalMesh__UFWeakObjectPtr____UFSkinWeightProfileStack___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0> @ 14e15def0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEAVUOptimusNode___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0> @ 14e15df10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14e181fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFBoolProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FBoolProperty_ptr_FFieldVariant_FName **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e181ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFDoubleProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FDoubleProperty_ptr_FFieldVariant_FName **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFFloatProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FFloatProperty_ptr_FFieldVariant_FName **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFIntProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FIntProperty_ptr_FFieldVariant_FName **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFNameProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FNameProperty_ptr_FFieldVariant_FName **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVFUInt32Property__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_FUInt32Property_ptr_FFieldVariant_FName **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXU__TWeakObjectPtr_VUSkeletalMesh__UFWeakObjectPtr____UFSkinWeightProfileStack___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>_FSkinWeightProfileStack **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1820b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEAVUOptimusNode___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_UOptimusNode_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1820d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TArrayView<unsigned_char_const_,int>_FShaderValueContainerView **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1820f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddComponentBindingGetNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddComponentBindingGetNode'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddDataInterfaceNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  UObject *pUVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddDataInterfaceNode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  pUVar1 = *(UObject **)((longlong)this + 8);
  *(UObject **)(param_1->InlineAllocation + 8) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1821b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddFunctionReferenceNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddFunctionReferenceNode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1821d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1821f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodeInternal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`UOptimusNodeGraph::AddNodeInternal'::`2'::<lambda_1>,0,1>::
             _vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14e182270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::`2'::<lambda_1>,0,1>::
             _vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14e1822f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceGetNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceGetNode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceNode'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceSetNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceSetNode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddVariableGetNode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FOptimusNodeGraphAction_DuplicateNode::Do'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e1823d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1823f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNode'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNode'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x58,8);
  param_1->HeapAllocation = puVar1;
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(puVar1 + 1);
  *puVar1 = &TFunction_OwnedObject<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  *(undefined8 *)&this_00->Elements = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=(this_00,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)((longlong)this + 8));
  return this_00;
}

// CloneToEmptyStorage @ 14e1824f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Optimus::ParseExecutionDomainExpression'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x58,8);
  param_1->HeapAllocation = puVar1;
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)(puVar1 + 1);
  *puVar1 = &TFunction_OwnedObject<`Optimus::ParseExecutionDomainExpression'::`2'::<lambda_1>,0,1>::
             _vftable_;
  *(undefined8 *)&this_00->Elements = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  operator=(this_00,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)((longlong)this + 8));
  return this_00;
}

// CloneToEmptyStorage @ 14e182570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14e1825f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e1826e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusNodeGraphAction_RemoveNode::Undo'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformerInstance::ReleaseResources'::__l5::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e182740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`8'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::PostDuplicate'::`17'::<lambda_1>,0,0>::_vftable_;
  `UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>::<lambda_1>
            (param_1->InlineAllocation + 8,(<lambda_1> *)((longlong)this + 8));
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1827b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformerInstance::EnqueueWork'::__l28::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e1827f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`36'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`36'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x78,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNodes'::`75'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  *(undefined8 *)
   &((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *)
    (puVar2 + 5))->Elements = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
  *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
  puVar2[0xd] = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)(puVar2 + 5),
            (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)((longlong)this + 0x28));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e1828c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::__l13::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::`13'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::`2'::<lambda_2>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::`2'::<lambda_2>,0,1>::
             _vftable_;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar3[7] = 0;
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar4)();
  }
  uVar2 = *(undefined8 *)((longlong)this + 0x48);
  puVar3[8] = *(undefined8 *)((longlong)this + 0x40);
  puVar3[9] = uVar2;
  return puVar3 + 2;
}

// CloneToEmptyStorage @ 14e1829c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformer::Compile'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusDeformer::Compile'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e1829e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_2>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_2>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_2>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182b10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`8'::<lambda_2>,0,1>
             ::_vftable_;
  `FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e182b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::`20'::<lambda_2>,0,1>::
             _vftable_;
  FOptimusParameterBindingArray::FOptimusParameterBindingArray
            ((FOptimusParameterBindingArray *)(puVar1 + 1),
             (FOptimusParameterBindingArray *)((longlong)this + 8));
  FOptimusParameterBindingArray::FOptimusParameterBindingArray
            ((FOptimusParameterBindingArray *)(puVar1 + 3),
             (FOptimusParameterBindingArray *)((longlong)this + 0x18));
  return (FOptimusParameterBindingArray *)(puVar1 + 1);
}

// CloneToEmptyStorage @ 14e182bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`30'::<lambda_2>,0,1>
             ::_vftable_;
  `UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e182c30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`36'::<lambda_2>,0,1>::
             _vftable_;
  `FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>::<lambda_2>
            (puVar1 + 1,(<lambda_2> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14e182c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_AddOptimusDeformer::StaticExecute'::__l42::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e182d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x48,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_3>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x40);
  puVar2[7] = *(undefined8 *)((longlong)this + 0x38);
  puVar2[8] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182d80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`8'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x80,0x10);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::`18'::<lambda_3>,0,1>
             ::_vftable_;
  `FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>::<lambda_3>
            (puVar1 + 2,(<lambda_3> *)((longlong)this + 0x10));
  return puVar1 + 2;
}

// CloneToEmptyStorage @ 14e182e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::`20'::<lambda_3>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`30'::<lambda_3>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_3>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_3>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformer::PostLoad'::__l85::<lambda_3>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14e182f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::`20'::<lambda_4>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`30'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e182fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_4>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e182fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_4>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e183000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l60::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`60'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e183060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x88,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::ExpandCollapsedNodes'::`87'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  *(undefined8 *)
   &((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *)
    (puVar2 + 7))->Elements = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar2 + 100) = 0x80;
  *(undefined4 *)(puVar2 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)(puVar2 + 7),
            (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)((longlong)this + 0x38));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e183100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::`37'::<lambda_6>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  ::FString::FString((FString *)(puVar2 + 3),(FString *)((longlong)this + 0x18));
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e183170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::`37'::<lambda_6>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14e1831d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l51::<lambda_6>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::`51'::<lambda_6>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  puVar2[6] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 14e1a0b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::Destroy
          (TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::Destroy
          (TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::Destroy
          (TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::Destroy
          (TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::Destroy
          (TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0>::Destroy
          (TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0be0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddComponentBindingGetNode'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddDataInterfaceNode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddFunctionReferenceNode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodeInternal'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceGetNode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceNode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceSetNode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNode'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Optimus::ParseExecutionDomainExpression'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformerInstance::ReleaseResources'::__l5::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformerInstance::EnqueueWork'::__l28::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::__l13::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a0fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a0ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformer::Compile'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a0ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a10c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a10f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a1155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a1165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_AddOptimusDeformer::StaticExecute'::__l42::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a11a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_3>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a11d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_3>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a1235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1240

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a1275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a1285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformer::PostLoad'::__l85::<lambda_3>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a1295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a12a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a12a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a12b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a12e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a12e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a12f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1a12f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e1a1300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l60::<lambda_4>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a1390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_6>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e1a13c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l51::<lambda_6>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14e1b7e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::GetAddress
          (TFunction_OwnedObject<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::GetAddress
          (TFunction_OwnedObject<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::GetAddress
          (TFunction_OwnedObject<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::GetAddress
          (TFunction_OwnedObject<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0>::GetAddress
          (TFunction_OwnedObject<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0>::GetAddress
          (TFunction_OwnedObject<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,FSkinWeightProfileStack),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7e90

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(UOptimusNode_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14e1b7eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddCommentNode'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddComponentBindingGetNode'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddDataInterfaceNode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddFunctionReferenceNode'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodeInternal'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e1b7f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e1b7f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceGetNode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceNode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddResourceSetNode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddVariableGetNode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusConstantContainerInstance::EvaluateAndSaveResult'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Optimus::ParseExecutionDomainExpression'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e1b7fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b7ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformerInstance::ReleaseResources'::__l5::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::PostDuplicate'::__l17::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformerInstance::EnqueueWork'::__l28::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateNodes'::__l75::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::PostLoadReplaceAnimAttributeDataInterfaceNodeWithGenericDataInterfaceNode'::__l13::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b80a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddLoopTerminalNodes'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b80b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::AddNodePairInternal'::__l2::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e1b80c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformer::Compile'::__l2::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b80d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b80e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b80f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRigUnit_AddOptimusDeformer::StaticExecute'::__l42::<lambda_2>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_3>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e1b81a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b81b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_3>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b81c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b81d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b81e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusDeformer::PostLoad'::__l85::<lambda_3>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b81f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::DuplicateSubGraph'::__l20::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l30::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_4>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::__l60::<lambda_4>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ExpandCollapsedNodes'::__l87::<lambda_4>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToFunction'::__l37::<lambda_6>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::ConvertToSubGraph'::__l37::<lambda_6>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e1b8270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOptimusNodeGraph::CollapseNodesToSubGraph'::__l51::<lambda_6>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

