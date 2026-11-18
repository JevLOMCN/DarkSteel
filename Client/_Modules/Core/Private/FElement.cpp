// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FElement @ 14147d210

FElement * __thiscall
TSingleThreadedSlabAllocator<UE::FIoEncodedBlockRequest,1024>::FElement::FElement(FElement *this)

{
  this->Slab = (FSlab *)0x0;
  return this;
}

// FElement @ 14147d230

FElement * __thiscall
TSingleThreadedSlabAllocator<UE::FIoFileBlockLink,128>::FElement::FElement(FElement *this)

{
  this->Slab = (FSlab *)0x0;
  return this;
}

// FElement @ 14147d250

FElement * __thiscall
TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024>::FElement::FElement(FElement *this)

{
  this->Slab = (FSlab *)0x0;
  return this;
}

// FElement @ 14147d270

FElement * __thiscall
TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024>::FElement::FElement(FElement *this)

{
  this->Slab = (FSlab *)0x0;
  return this;
}

// FElement @ 141583d60

FElement * __thiscall
FTSTicker::FElement::FElement
          (FElement *this,double param_1,float param_2,TUniqueFunction<bool___cdecl(float)> *param_3
          )

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_3;
  this->FireTime = param_1;
  this->DelayTime = param_2;
  *(undefined8 *)&this->Function = uVar1;
  *(undefined8 *)&(this->Function).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->Function).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->Function).field_0x18 = uVar1;
  *(undefined8 *)&(this->Function).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->Function != 0) {
    *(undefined8 *)param_3 = 0;
  }
  this->State = (atomic<unsigned___int64>)0x0;
  return this;
}

// FElement @ 141583db0

FElement * __thiscall
FTSTicker::FElement::FElement
          (FElement *this,double param_1,float param_2,
          TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *param_3)

{
  undefined8 *puVar1;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> local_28;
  
  this->FireTime = param_1;
  this->DelayTime = param_2;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>(&local_28,param_3);
  *(undefined8 *)&this->Function = 0;
  *(undefined8 *)&(this->Function).field_0x28 = 0;
  puVar1 = FMemory::Malloc(0x20,8);
  *(undefined8 **)&(this->Function).field_0x28 = puVar1;
  *puVar1 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FTSTicker::FElement::FElement'::`1'::<lambda_28_>,1,1>::
             _vftable_;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar1 + 1),&local_28);
  if ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar1 + 1) !=
      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)0x0) {
    *(code **)&this->Function =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FTSTicker::FElement::FElement'::__l1::<lambda_28_>,bool,float>::Call;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_28);
  this->State = (atomic<unsigned___int64>)0x0;
  return this;
}

// FElement @ 141583e50

FElement * __thiscall FTSTicker::FElement::FElement(FElement *this)

{
  this->FireTime = 0.0;
  this->DelayTime = 0.0;
  *(undefined8 *)&this->Function = 0;
  *(undefined8 *)&(this->Function).field_0x28 = 0;
  this->State = (atomic<unsigned___int64>)0x0;
  return this;
}

// operator() @ 1415959b0

bool __thiscall
`FTSTicker::FElement::FElement'::__l1::<lambda_28_>::operator()(void *this,float param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,local_38);
  if (((*(int *)((longlong)this + 0x10) == 0) ||
      (*(longlong **)((longlong)this + 8) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,local_38);
  if (*(int *)((longlong)this + 0x10) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  if (cVar1 == '\0') {
    return false;
  }
  return true;
}

// Fire @ 1415c32a0

bool __thiscall FTSTicker::FElement::Fire(FElement *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar1 = *(longlong **)&(this->Function).field_0x28;
  pcVar2 = *(code **)&this->Function;
  plVar5 = (longlong *)&(this->Function).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  uVar3 = (*pcVar2)(uVar4,local_res10);
  return (bool)uVar3;
}

// FElement @ 1417a0e40

FElement * __thiscall
TSingleThreadedSlabAllocator<UE::FIoDispatcherChunkBlockDecoder::FQueueEntry,512>::FElement::
FElement(FElement *this)

{
  this->Slab = (FSlab *)0x0;
  return this;
}

