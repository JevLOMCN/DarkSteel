// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> @ 1459ecfa0

TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> * __thiscall
TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
          (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *this,
          TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *param_1)

{
  uint uVar1;
  uint uVar2;
  
  ::FString::FString((FString *)this,(FString *)param_1);
  uVar2 = (this->Elements[0].field1_0x10.Flags ^ param_1->Elements[0].field1_0x10.Flags) & 0xf ^
          this->Elements[0].field1_0x10.Flags;
  this->Elements[0].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[0].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[0].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[0].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[0].field1_0x10.Flags = uVar2;
  this->Elements[0].field1_0x10.Flags =
       (param_1->Elements[0].field1_0x10.Flags ^ uVar2) & 0x3ffffff ^
       param_1->Elements[0].field1_0x10.Flags;
  this->Elements[0].field1_0x10 = param_1->Elements[0].field1_0x10;
  ::FString::FString(&this->Elements[1].LayoutName,&param_1->Elements[1].LayoutName);
  uVar2 = (this->Elements[1].field1_0x10.Flags ^ param_1->Elements[1].field1_0x10.Flags) & 0xf ^
          this->Elements[1].field1_0x10.Flags;
  this->Elements[1].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[1].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[1].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[1].field1_0x10.Flags = uVar2;
  this->Elements[1].field1_0x10.Flags =
       (uVar2 ^ param_1->Elements[1].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[1].field1_0x10.Flags;
  this->Elements[1].field1_0x10 = param_1->Elements[1].field1_0x10;
  ::FString::FString(&this->Elements[2].LayoutName,&param_1->Elements[2].LayoutName);
  uVar2 = (this->Elements[2].field1_0x10.Flags ^ param_1->Elements[2].field1_0x10.Flags) & 0xf ^
          this->Elements[2].field1_0x10.Flags;
  this->Elements[2].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[2].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[2].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[2].field1_0x10.Flags = uVar2;
  this->Elements[2].field1_0x10.Flags =
       (uVar2 ^ param_1->Elements[2].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[2].field1_0x10.Flags;
  this->Elements[2].field1_0x10 = param_1->Elements[2].field1_0x10;
  ::FString::FString(&this->Elements[3].LayoutName,&param_1->Elements[3].LayoutName);
  uVar2 = (this->Elements[3].field1_0x10.Flags ^ param_1->Elements[3].field1_0x10.Flags) & 0xf ^
          this->Elements[3].field1_0x10.Flags;
  this->Elements[3].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[3].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[3].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[3].field1_0x10.Flags = uVar2;
  this->Elements[3].field1_0x10.Flags =
       (uVar2 ^ param_1->Elements[3].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[3].field1_0x10.Flags;
  this->Elements[3].field1_0x10 = param_1->Elements[3].field1_0x10;
  ::FString::FString(&this->Elements[4].LayoutName,&param_1->Elements[4].LayoutName);
  uVar2 = (this->Elements[4].field1_0x10.Flags ^ param_1->Elements[4].field1_0x10.Flags) & 0xf ^
          this->Elements[4].field1_0x10.Flags;
  this->Elements[4].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[4].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[4].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[4].field1_0x10.Flags = uVar2;
  this->Elements[4].field1_0x10.Flags =
       (uVar2 ^ param_1->Elements[4].field1_0x10.Flags) & 0x3ffffff ^
       param_1->Elements[4].field1_0x10.Flags;
  this->Elements[4].field1_0x10 = param_1->Elements[4].field1_0x10;
  ::FString::FString(&this->Elements[5].LayoutName,&param_1->Elements[5].LayoutName);
  uVar2 = this->Elements[5].field1_0x10.Flags;
  uVar2 = (uVar2 ^ param_1->Elements[5].field1_0x10.Flags) & 0xf ^ uVar2;
  this->Elements[5].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[5].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[5].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[5].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[5].field1_0x10.Flags = uVar2;
  uVar1 = param_1->Elements[5].field1_0x10.Flags;
  this->Elements[5].field1_0x10.Flags = (uVar2 ^ uVar1) & 0x3ffffff ^ uVar1;
  this->Elements[5].field1_0x10 = param_1->Elements[5].field1_0x10;
  ::FString::FString(&this->Elements[6].LayoutName,&param_1->Elements[6].LayoutName);
  uVar2 = this->Elements[6].field1_0x10.Flags;
  uVar2 = (uVar2 ^ param_1->Elements[6].field1_0x10.Flags) & 0xf ^ uVar2;
  this->Elements[6].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[6].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[6].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[6].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[6].field1_0x10.Flags = uVar2;
  uVar1 = param_1->Elements[6].field1_0x10.Flags;
  this->Elements[6].field1_0x10.Flags = (uVar2 ^ uVar1) & 0x3ffffff ^ uVar1;
  this->Elements[6].field1_0x10 = param_1->Elements[6].field1_0x10;
  ::FString::FString(&this->Elements[7].LayoutName,&param_1->Elements[7].LayoutName);
  uVar2 = this->Elements[7].field1_0x10.Flags;
  uVar2 = (uVar2 ^ param_1->Elements[7].field1_0x10.Flags) & 0xf ^ uVar2;
  this->Elements[7].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3f0 ^ uVar2;
  this->Elements[7].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3fc00 ^ uVar2;
  this->Elements[7].field1_0x10.Flags = uVar2;
  uVar2 = (uVar2 ^ param_1->Elements[7].field1_0x10.Flags) & 0x3fc0000 ^ uVar2;
  this->Elements[7].field1_0x10.Flags = uVar2;
  uVar1 = param_1->Elements[7].field1_0x10.Flags;
  this->Elements[7].field1_0x10.Flags = (uVar2 ^ uVar1) & 0x3ffffff ^ uVar1;
  this->Elements[7].field1_0x10 = param_1->Elements[7].field1_0x10;
  return this;
}

// ~TStaticArray<TD3D12ObjectPool<FD3D12QueryHeap>,4,4294967295> @ 1459f6c60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TStaticArray<TD3D12ObjectPool<FD3D12QueryHeap>,4,4294967295>::
~TStaticArray<TD3D12ObjectPool<FD3D12QueryHeap>,4,4294967295>
          (TStaticArray<TD3D12ObjectPool<FD3D12QueryHeap>,4,4294967295> *this)

{
  atomic<void_*> this_00;
  uint uVar1;
  longlong lVar2;
  FLockFreePointerListLIFORoot<64,1> *this_01;
  
  lVar2 = 4;
  this_01 = (FLockFreePointerListLIFORoot<64,1> *)(this + 1);
  do {
    lVar2 = lVar2 + -1;
    this_01 = this_01 + -1;
    while( true ) {
      uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop(this_01);
      if (uVar1 == 0) break;
      this_00 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
      if (this_00 == (atomic<void_*>)0x0) break;
      FD3D12QueryHeap::~FD3D12QueryHeap((FD3D12QueryHeap *)this_00);
      ::operator_delete((void *)this_00,0x488);
    }
    FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1>::
    ~FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1>
              ((FLockFreePointerListLIFOBase<FD3D12QueryHeap,64,1> *)this_01);
    if (lVar2 == 0) {
      return;
    }
  } while( true );
}

// ~TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> @ 1459f6d10

void __thiscall
TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
~TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
          (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FRHIUniformBufferShaderBindingLayout *pFVar3;
  
  pFVar3 = this[1].Elements;
  lVar2 = 8;
  do {
    pFVar1 = pFVar3[-1].LayoutName.Data.AllocatorInstance.Data;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// ~TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295> @ 1459f6d60

void __thiscall
TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295>::
~TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295>
          (TStaticArray<TRefCountPtr<FD3D12DescriptorHeap>,2,4294967295> *this)

{
  longlong *plVar1;
  FD3D12DescriptorHeap *pFVar2;
  longlong lVar3;
  longlong lVar4;
  TRefCountPtr<FD3D12DescriptorHeap> *pTVar5;
  
  lVar4 = 2;
  pTVar5 = this[1].Elements;
  do {
    pFVar2 = pTVar5[-1].Reference;
    pTVar5 = pTVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  } while (lVar4 != 0);
  return;
}

// ~TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295> @ 1459f6dd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295>::
~TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295>
          (TStaticArray<TRefCountPtr<FD3D12SyncPoint>,2,4294967295> *this)

{
  longlong *plVar1;
  FD3D12SyncPoint *pFVar2;
  longlong lVar3;
  longlong lVar4;
  TRefCountPtr<FD3D12SyncPoint> *pTVar5;
  
  lVar4 = 2;
  pTVar5 = this[1].Elements;
  do {
    pFVar2 = pTVar5[-1].Reference;
    pTVar5 = pTVar5 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar2 != (FD3D12SyncPoint *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  } while (lVar4 != 0);
  return;
}

// operator== @ 145a496e0

bool __thiscall
TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator==
          (TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *this,
          TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = this->Elements[0].LayoutName.Data.ArrayNum;
  iVar1 = param_1->Elements[0].LayoutName.Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)this->Elements[0].LayoutName.Data.AllocatorInstance.Data,
                         (wchar_t *)param_1->Elements[0].LayoutName.Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_145a49713;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_145a49713:
    if (!bVar3) {
      return false;
    }
  }
  if (this->Elements[0].field1_0x10.Flags != param_1->Elements[0].field1_0x10.Flags) {
    return false;
  }
  iVar2 = this->Elements[1].LayoutName.Data.ArrayNum;
  iVar1 = param_1->Elements[1].LayoutName.Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_145a4975a;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)this->Elements[1].LayoutName.Data.AllocatorInstance.Data,
                       (wchar_t *)param_1->Elements[1].LayoutName.Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_145a4975a:
  if ((((this->Elements[1].field1_0x10.Flags == param_1->Elements[1].field1_0x10.Flags) &&
       (bVar3 = FRHIUniformBufferShaderBindingLayout::operator==
                          (this->Elements + 2,param_1->Elements + 2), bVar3)) &&
      (bVar3 = FRHIUniformBufferShaderBindingLayout::operator==
                         (this->Elements + 3,param_1->Elements + 3), bVar3)) &&
     (((bVar3 = FRHIUniformBufferShaderBindingLayout::operator==
                          (this->Elements + 4,param_1->Elements + 4), bVar3 &&
       (bVar3 = FRHIUniformBufferShaderBindingLayout::operator==
                          (this->Elements + 5,param_1->Elements + 5), bVar3)) &&
      ((bVar3 = FRHIUniformBufferShaderBindingLayout::operator==
                          (this->Elements + 6,param_1->Elements + 6), bVar3 &&
       (bVar3 = FRHIUniformBufferShaderBindingLayout::operator==
                          (this->Elements + 7,param_1->Elements + 7), bVar3)))))) {
    return true;
  }
  return false;
}

