// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FPrimitiveState @ 145477870

FPrimitiveState * __thiscall
FSceneCulling::FPrimitiveState::FPrimitiveState(FPrimitiveState *this,FPrimitiveState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->InstanceDataOffset = param_1->InstanceDataOffset;
  this->NumInstances = param_1->NumInstances;
  *(EState *)&this->field_0x8 = *(uint *)&this->field_0x8 ^ (this->State ^ param_1->State) & 7;
  this->field_0xc = this->field_0xc ^ (this->bDynamic ^ param_1->bDynamic) & 1U;
  *(uint *)&this->field_0x10 =
       *(uint *)&this->field_0x10 ^ (this->Payload ^ param_1->Payload) & 0xfffffff;
  (this->InstanceSceneDataImmutable).Object = (param_1->InstanceSceneDataImmutable).Object;
  pTVar1 = (param_1->InstanceSceneDataImmutable).SharedReferenceCount.ReferenceController;
  (this->InstanceSceneDataImmutable).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// FPrimitiveState @ 1454778d0

FPrimitiveState * __thiscall FSceneCulling::FPrimitiveState::FPrimitiveState(FPrimitiveState *this)

{
  this->State = Unknown;
  this->bDynamic = false;
  this->Payload = 0xfffffff;
  this->NumInstances = 0;
  (this->InstanceSceneDataImmutable).Object = (FInstanceSceneDataImmutable *)0x0;
  (this->InstanceSceneDataImmutable).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->InstanceDataOffset = -1;
  return this;
}

// operator= @ 14547c910

FPrimitiveState * __thiscall
FSceneCulling::FPrimitiveState::operator=(FPrimitiveState *this,FPrimitiveState *param_1)

{
  TSharedPtr<FInstanceSceneDataImmutable,1> *pTVar1;
  
  this->InstanceDataOffset = param_1->InstanceDataOffset;
  this->NumInstances = param_1->NumInstances;
  *(EState *)&this->field_0x8 = *(uint *)&this->field_0x8 ^ (this->State ^ param_1->State) & 7;
  this->field_0xc = this->field_0xc ^ (this->bDynamic ^ param_1->bDynamic) & 1U;
  pTVar1 = &param_1->InstanceSceneDataImmutable;
  *(uint *)&this->field_0x10 =
       *(uint *)&this->field_0x10 ^ (this->Payload ^ param_1->Payload) & 0xfffffff;
  if (&this->InstanceSceneDataImmutable != pTVar1) {
    (this->InstanceSceneDataImmutable).Object = pTVar1->Object;
    pTVar1->Object = (FInstanceSceneDataImmutable *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceSceneDataImmutable).SharedReferenceCount,
               &(param_1->InstanceSceneDataImmutable).SharedReferenceCount);
  }
  return this;
}

// operator= @ 14547c990

FPrimitiveState * __thiscall
FSceneCulling::FPrimitiveState::operator=(FPrimitiveState *this,FPrimitiveState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FInstanceSceneDataImmutable *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->InstanceDataOffset = param_1->InstanceDataOffset;
  this->NumInstances = param_1->NumInstances;
  *(EState *)&this->field_0x8 = *(uint *)&this->field_0x8 ^ (this->State ^ param_1->State) & 7;
  this->field_0xc = this->field_0xc ^ (this->bDynamic ^ param_1->bDynamic) & 1U;
  *(uint *)&this->field_0x10 =
       *(uint *)&this->field_0x10 ^ (this->Payload ^ param_1->Payload) & 0xfffffff;
  pTVar1 = (param_1->InstanceSceneDataImmutable).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->InstanceSceneDataImmutable).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->InstanceSceneDataImmutable).SharedReferenceCount.ReferenceController;
  (this->InstanceSceneDataImmutable).Object = pFVar2;
  (this->InstanceSceneDataImmutable).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// ToString @ 1454bd4b0

FString * __thiscall FSceneCulling::FPrimitiveState::ToString(FPrimitiveState *this)

{
  wchar_t *pwVar1;
  int iVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FSceneCulling::FPrimitiveState::ToString'::__l2::
           _dynamic_atexit_destructor_for__Result__);
    _Init_thread_footer(&::_TSS0);
  }
  ::FString::operator=(&::Result,L"{ ");
  switch(this->State) {
  case 0:
    iVar2 = 7;
    pwVar1 = L"Unknown";
    break;
  case 1:
    pwVar1 = L"SingleCell";
    goto LAB_1454bd55d;
  case 2:
    iVar2 = 0xb;
    pwVar1 = L"Precomputed";
    break;
  case 3:
    pwVar1 = L"UnCullable";
LAB_1454bd55d:
    iVar2 = 10;
    break;
  case 4:
    iVar2 = 7;
    pwVar1 = L"Dynamic";
    break;
  case 5:
    iVar2 = 6;
    pwVar1 = L"Cached";
    break;
  default:
    goto switchD_1454bd50f_default;
  }
  ::FString::AppendChars(&::Result,pwVar1,iVar2);
switchD_1454bd50f_default:
  ::FString::AppendfImpl
            (&::Result,L", InstanceDataOffset %d, NumInstances %d, bDynamic %d, Payload %d }");
  return &::Result;
}

