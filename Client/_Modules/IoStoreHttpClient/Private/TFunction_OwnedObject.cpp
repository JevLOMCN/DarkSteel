// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 49

// ~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0> @ 14456b980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 144570e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFTicketStatus_HTTP_IoStore_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FTicketStatus_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144570ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`37'::<lambda_11>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144570ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 144570f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144570f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144570f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144570f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x50,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::`5'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  lVar1 = *(longlong *)((longlong)this + 0x20);
  puVar2[4] = lVar1;
  puVar2[9] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 144571000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  param_1->InlineAllocation[0x10] = '\0';
  param_1->InlineAllocation[0x11] = '\0';
  param_1->InlineAllocation[0x12] = '\0';
  param_1->InlineAllocation[0x13] = '\0';
  param_1->InlineAllocation[0x14] = '\0';
  param_1->InlineAllocation[0x15] = '\0';
  param_1->InlineAllocation[0x16] = '\0';
  param_1->InlineAllocation[0x17] = '\0';
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144571040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144571060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::`2'::<lambda_2>,0,0>::_vftable_;
  puVar1 = param_1->InlineAllocation + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  lVar2 = *(longlong *)((longlong)this + 8);
  *(longlong *)puVar1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return puVar1;
}

// CloneToEmptyStorage @ 144571090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::`5'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1445710b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::`2'::<lambda_3>,0,1>::
             _vftable_;
  puVar2[1] = 0;
  lVar1 = *(longlong *)((longlong)this + 8);
  puVar2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 144571120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar3;
  *puVar3 = &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_4>,0,1>::_vftable_
  ;
  uVar2 = *(undefined8 *)((longlong)this + 0x10);
  puVar3[1] = *(undefined8 *)((longlong)this + 8);
  puVar3[2] = uVar2;
  puVar3[3] = 0;
  lVar1 = *(longlong *)((longlong)this + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}

// CloneToEmptyStorage @ 144571190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`2'::<lambda_4>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1445711b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::`2'::<lambda_5>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  param_1->InlineAllocation[0x10] = '\0';
  param_1->InlineAllocation[0x11] = '\0';
  param_1->InlineAllocation[0x12] = '\0';
  param_1->InlineAllocation[0x13] = '\0';
  param_1->InlineAllocation[0x14] = '\0';
  param_1->InlineAllocation[0x15] = '\0';
  param_1->InlineAllocation[0x16] = '\0';
  param_1->InlineAllocation[0x17] = '\0';
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1445711f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::`18'::<lambda_7>,0,0>::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  param_1->InlineAllocation[0x10] = '\0';
  param_1->InlineAllocation[0x11] = '\0';
  param_1->InlineAllocation[0x12] = '\0';
  param_1->InlineAllocation[0x13] = '\0';
  param_1->InlineAllocation[0x14] = '\0';
  param_1->InlineAllocation[0x15] = '\0';
  param_1->InlineAllocation[0x16] = '\0';
  param_1->InlineAllocation[0x17] = '\0';
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144572210

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144572220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572230

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144572260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572280

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572290

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1445722c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001445722c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1445722d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001445722d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1445722e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001445722e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1445722f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001445722f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144572330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 144572360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144572380

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144572385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144573500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(UE::IoStore::HTTP::FTicketStatus_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 144573510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l37::<lambda_11>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FResponse::GetHeader'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::DetailOne::FStatusHeaders::Parse'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Redirect'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FActivity::Transact'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::FEventLoop::Send'::__l5::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144573570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144573590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::TlsTest'::__l2::<lambda_2>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445735a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::IasHttpTest'::__l5::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445735b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::RedirectTest'::__l2::<lambda_3>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445735c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_4>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445735d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l2::<lambda_4>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445735e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::ChunkedTest'::__l2::<lambda_5>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1445735f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HTTP::HttpTest'::__l18::<lambda_7>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

