// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 32

// AddItem @ 145f80cd0

int __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::AddItem
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,uint param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined2 local_18 [8];
  
  this->CachedNumIndices = this->CachedNumIndices + 1;
  plVar1 = &(this->Indices)._padding_;
  puVar7 = (undefined2 *)(this->Indices)._padding_;
  local_18[0] = (undefined2)param_1;
  puVar6 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar7 >> 0x18));
  if (((ulonglong)puVar7 & 1) == 0) {
    puVar6 = puVar7;
  }
  if (puVar6 <= local_18) {
    if (((ulonglong)puVar7 & 1) != 0) {
      puVar7 = (undefined2 *)((longlong)plVar1 + ((longlong)puVar7 >> 0x18));
    }
    if ((local_18 < puVar7 + *(int *)((longlong)&(this->Indices)._padding_ + 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (int)(this->Indices)._padding_;
  piVar2 = (int *)((longlong)&(this->Indices)._padding_ + 4);
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x202,(ForAnyElementType *)plVar1,piVar2);
  }
  *(int *)&(this->Indices)._padding_ = iVar5 + 1;
  uVar8 = *plVar1;
  if ((uVar8 & 1) != 0) {
    uVar8 = (longlong)plVar1 + ((longlong)uVar8 >> 0x18);
  }
  *(undefined2 *)(uVar8 + (longlong)iVar5 * 2) = local_18[0];
  return iVar5;
}

// AddItem @ 145f80dd0

int __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::AddItem
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,uint param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint local_18 [4];
  
  this->CachedNumIndices = this->CachedNumIndices + 1;
  plVar1 = &(this->Indices)._padding_;
  puVar7 = (uint *)(this->Indices)._padding_;
  puVar6 = (uint *)((longlong)plVar1 + ((longlong)puVar7 >> 0x18));
  if (((ulonglong)puVar7 & 1) == 0) {
    puVar6 = puVar7;
  }
  local_18[0] = param_1;
  if (puVar6 <= local_18) {
    if (((ulonglong)puVar7 & 1) != 0) {
      puVar7 = (uint *)((longlong)plVar1 + ((longlong)puVar7 >> 0x18));
    }
    if ((local_18 < puVar7 + *(int *)((longlong)&(this->Indices)._padding_ + 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = (int)(this->Indices)._padding_;
  piVar2 = (int *)((longlong)&(this->Indices)._padding_ + 4);
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)plVar1,piVar2);
  }
  *(int *)&(this->Indices)._padding_ = iVar5 + 1;
  uVar8 = *plVar1;
  if ((uVar8 & 1) != 0) {
    uVar8 = (longlong)plVar1 + ((longlong)uVar8 >> 0x18);
  }
  *(uint *)(uVar8 + (longlong)iVar5 * 4) = local_18[0];
  return iVar5;
}

// AssignNewBuffer @ 145f82520

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::AssignNewBuffer
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int iVar4;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar5;
  void *_Dst;
  longlong lVar6;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  int local_10;
  int local_c;
  
  local_10 = param_1->ArrayNum;
  lVar6 = (longlong)local_10;
  _Src = (param_1->AllocatorInstance).Data;
  local_18.Packed = 0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,local_10,0,(ForAnyElementType *)&local_18.Frozen,local_10,&local_c);
    TVar5 = local_18;
    if ((local_18.Packed & 1) != 0) {
      TVar5.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_18 + ((longlong)local_18.Packed >> 0x18));
    }
    memcpy(TVar5.UnfrozenPtr,_Src,lVar6 * 2);
  }
  iVar4 = local_10;
  plVar1 = &(this->Indices)._padding_;
  if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)plVar1 != &local_18) {
    iVar3 = *(int *)((longlong)&(this->Indices)._padding_ + 4);
    piVar2 = (int *)((longlong)&(this->Indices)._padding_ + 4);
    TVar5 = local_18;
    if ((local_18.Packed & 1) != 0) {
      TVar5.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_18 + ((longlong)local_18.Packed >> 0x18));
    }
    *(int *)&(this->Indices)._padding_ = local_10;
    if ((local_10 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,local_10,iVar3,(ForAnyElementType *)plVar1,local_10,piVar2);
      _Dst = (void *)*plVar1;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)((longlong)plVar1 + ((longlong)_Dst >> 0x18));
      }
      if (iVar4 != 0) {
        memcpy(_Dst,TVar5.UnfrozenPtr,(longlong)iVar4 * 2);
      }
    }
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  this->CachedNumIndices = (int)(this->Indices)._padding_;
  return;
}

// AssignNewBuffer @ 145f82660

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::AssignNewBuffer
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int iVar4;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar5;
  void *_Dst;
  longlong lVar6;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_18;
  int local_10;
  int local_c;
  
  local_10 = param_1->ArrayNum;
  lVar6 = (longlong)local_10;
  _Src = (param_1->AllocatorInstance).Data;
  local_18.Packed = 0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,local_10,0,(ForAnyElementType *)&local_18.Frozen,local_10,&local_c);
    TVar5 = local_18;
    if ((local_18.Packed & 1) != 0) {
      TVar5.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_18 + ((longlong)local_18.Packed >> 0x18));
    }
    memcpy(TVar5.UnfrozenPtr,_Src,lVar6 << 2);
  }
  iVar4 = local_10;
  plVar1 = &(this->Indices)._padding_;
  if ((TMemoryImagePtr<FScriptContainerElement>_u_0 *)plVar1 != &local_18) {
    iVar3 = *(int *)((longlong)&(this->Indices)._padding_ + 4);
    piVar2 = (int *)((longlong)&(this->Indices)._padding_ + 4);
    TVar5 = local_18;
    if ((local_18.Packed & 1) != 0) {
      TVar5.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_18 + ((longlong)local_18.Packed >> 0x18));
    }
    *(int *)&(this->Indices)._padding_ = local_10;
    if ((local_10 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,local_10,iVar3,(ForAnyElementType *)plVar1,local_10,piVar2);
      _Dst = (void *)*plVar1;
      if (((ulonglong)_Dst & 1) != 0) {
        _Dst = (void *)((longlong)plVar1 + ((longlong)_Dst >> 0x18));
      }
      if (iVar4 != 0) {
        memcpy(_Dst,TVar5.UnfrozenPtr,(longlong)iVar4 << 2);
      }
    }
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_18.Frozen);
  this->CachedNumIndices = (int)(this->Indices)._padding_;
  return;
}

// Empty @ 145f8b560

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::Empty
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    piVar1 = (int *)((longlong)&(this->Indices)._padding_ + 4);
    *(undefined4 *)&(this->Indices)._padding_ = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,param_1,(ForAnyElementType *)&(this->Indices)._padding_,0,piVar1);
    }
    this->CachedNumIndices = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145f8b5c0

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::Empty
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,int param_1)

{
  int *piVar1;
  
  if (-1 < param_1) {
    piVar1 = (int *)((longlong)&(this->Indices)._padding_ + 4);
    *(undefined4 *)&(this->Indices)._padding_ = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,param_1,(ForAnyElementType *)&(this->Indices)._padding_,0,piVar1);
    }
    this->CachedNumIndices = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Get @ 145f8db50

uint __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::Get
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar1 = &(this->Indices)._padding_;
  uVar4 = 0;
  if ((int)param_1 < (int)(this->Indices)._padding_) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar5 = *plVar1;
  if ((uVar5 & 1) != 0) {
    uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)plVar1;
  }
  return (uint)*(ushort *)(uVar5 + (longlong)(int)param_1 * 2);
}

// Get @ 145f8dbd0

uint __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::Get
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar1 = &(this->Indices)._padding_;
  uVar4 = 0;
  if ((int)param_1 < (int)(this->Indices)._padding_) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar5 = *plVar1;
  if ((uVar5 & 1) != 0) {
    uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)plVar1;
  }
  return *(uint *)(uVar5 + (longlong)(int)param_1 * 4);
}

// GetNeedsCPUAccess @ 145f931b0

bool __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::GetNeedsCPUAccess
          (FRawStaticIndexBuffer16or32<unsigned_short> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f931b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Indices)._padding_ + 0x30))(&this->Indices);
  return (bool)uVar1;
}

// GetNeedsCPUAccess @ 145f931d0

bool __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::GetNeedsCPUAccess
          (FRawStaticIndexBuffer16or32<unsigned_int> *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f931d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((this->Indices)._padding_ + 0x30))(&this->Indices);
  return (bool)uVar1;
}

// GetOrCreateSRV @ 145f932f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::GetOrCreateSRV
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  bool bVar1;
  FRHICommandListBase *in_R8;
  uchar *local_res8;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    (param_1->MemManager).Top = (uchar *)this_00;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  if (this->_padding_ != 0) {
    bVar1 = (bool)(**(code **)((this->Indices)._padding_ + 0x30))(&this->Indices);
    bVar1 = FRawStaticIndexBuffer16or32Interface::IsShaderResource
                      ((FRawStaticIndexBuffer16or32Interface *)this,bVar1);
    if (bVar1) {
      FRHICommandListBase::CreateShaderResourceView
                (in_R8,(FRHIBuffer *)&local_res8,(FInitializer *)this->_padding_);
      (param_1->MemManager).Top = local_res8;
      return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
    }
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// GetOrCreateSRV @ 145f933b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::GetOrCreateSRV
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  bool bVar1;
  FRHICommandListBase *in_R8;
  uchar *local_res8;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    (param_1->MemManager).Top = (uchar *)this_00;
    FRHIResource::AddRef(this_00);
    return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
  }
  if (this->_padding_ != 0) {
    bVar1 = (bool)(**(code **)((this->Indices)._padding_ + 0x30))(&this->Indices);
    bVar1 = FRawStaticIndexBuffer16or32Interface::IsShaderResource
                      ((FRawStaticIndexBuffer16or32Interface *)this,bVar1);
    if (bVar1) {
      FRHICommandListBase::CreateShaderResourceView
                (in_R8,(FRHIBuffer *)&local_res8,(FInitializer *)this->_padding_);
      (param_1->MemManager).Top = local_res8;
      return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
    }
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// GetPointerTo @ 145f93640

void * __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::GetPointerTo
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  plVar1 = &(this->Indices)._padding_;
  uVar4 = 0;
  if ((int)param_1 < (int)(this->Indices)._padding_) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  uVar6 = *plVar1;
  if ((uVar6 & 1) != 0) {
    uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)plVar1;
  }
  return (void *)(uVar6 + (longlong)(int)param_1 * 2);
}

// GetPointerTo @ 145f936c0

void * __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::GetPointerTo
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,uint param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  plVar1 = &(this->Indices)._padding_;
  uVar4 = 0;
  if ((int)param_1 < (int)(this->Indices)._padding_) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  uVar6 = *plVar1;
  if ((uVar6 & 1) != 0) {
    uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)plVar1;
  }
  return (void *)(uVar6 + (longlong)(int)param_1 * 4);
}

// GetResourceDataSize @ 145f93c70

int __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::GetResourceDataSize
          (FRawStaticIndexBuffer16or32<unsigned_short> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f93c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->Indices)._padding_ + 0x10))(&this->Indices);
  return iVar1;
}

// GetResourceDataSize @ 145f93c90

int __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::GetResourceDataSize
          (FRawStaticIndexBuffer16or32<unsigned_int> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f93c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->Indices)._padding_ + 0x10))(&this->Indices);
  return iVar1;
}

// InitRHI @ 145f96e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::InitRHI
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,FRHICommandListBase *param_1)

{
  TResourceArray<unsigned_short,0> *pTVar1;
  FRHIResource *pFVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  FRHIResource *local_res8;
  undefined4 in_stack_ffffffffffffffcc;
  undefined1 local_18 [16];
  
  pTVar1 = &this->Indices;
  if (this->CachedNumIndices == 0) {
    local_18._0_8_ = (FRHIResource *)0x0;
  }
  else {
    this->CachedNumIndices = (int)(this->Indices)._padding_;
    bVar3 = (bool)(**(code **)(pTVar1->_padding_ + 0x30))(pTVar1);
    FRawStaticIndexBuffer16or32Interface::IsShaderResource
              ((FRawStaticIndexBuffer16or32Interface *)this,bVar3);
    local_res8 = (FRHIResource *)this->_padding_;
    FRawStaticIndexBuffer16or32Interface::CreateRHIIndexBufferInternal
              ((FRHICommandListBase *)local_18,(wchar_t *)param_1,
               (FName *)L"FRawStaticIndexBuffer16",(int)&local_res8,
               CONCAT44(in_stack_ffffffffffffffcc,(int)(this->Indices)._padding_),
               (FResourceArrayInterface *)&DAT_00000002,SUB81(pTVar1,0));
  }
  plVar4 = &this->_padding_;
  if (plVar4 != (longlong *)local_18) {
    pFVar2 = (FRHIResource *)*plVar4;
    *plVar4 = local_18._0_8_;
    local_18._0_8_ = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145f96eed;
    FRHIResource::Release(pFVar2);
  }
  if ((FRHIResource *)local_18._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18._0_8_);
  }
LAB_145f96eed:
  bVar3 = (bool)(**(code **)(pTVar1->_padding_ + 0x30))(pTVar1);
  bVar3 = FRawStaticIndexBuffer16or32Interface::IsSRVCreatedByDefault
                    ((FRawStaticIndexBuffer16or32Interface *)this,bVar3);
  if (bVar3) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this,&local_res8,param_1);
    plVar5 = &this->_padding_;
    if (plVar5 != plVar4) {
      pFVar2 = (FRHIResource *)*plVar5;
      *plVar5 = *plVar4;
      *plVar4 = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// InitRHI @ 145f96f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::InitRHI
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,FRHICommandListBase *param_1)

{
  TResourceArray<unsigned_int,0> *pTVar1;
  FRHIResource *pFVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  FRHIResource *local_res8;
  undefined4 in_stack_ffffffffffffffcc;
  undefined1 local_18 [16];
  
  pTVar1 = &this->Indices;
  if (this->CachedNumIndices == 0) {
    local_18._0_8_ = (FRHIResource *)0x0;
  }
  else {
    this->CachedNumIndices = (int)(this->Indices)._padding_;
    bVar3 = (bool)(**(code **)(pTVar1->_padding_ + 0x30))(pTVar1);
    FRawStaticIndexBuffer16or32Interface::IsShaderResource
              ((FRawStaticIndexBuffer16or32Interface *)this,bVar3);
    local_res8 = (FRHIResource *)this->_padding_;
    FRawStaticIndexBuffer16or32Interface::CreateRHIIndexBufferInternal
              ((FRHICommandListBase *)local_18,(wchar_t *)param_1,
               (FName *)L"FRawStaticIndexBuffer32",(int)&local_res8,
               CONCAT44(in_stack_ffffffffffffffcc,(int)(this->Indices)._padding_),
               (FResourceArrayInterface *)&DAT_00000004,SUB81(pTVar1,0));
  }
  plVar4 = &this->_padding_;
  if (plVar4 != (longlong *)local_18) {
    pFVar2 = (FRHIResource *)*plVar4;
    *plVar4 = local_18._0_8_;
    local_18._0_8_ = (FRHIResource *)0x0;
    if (pFVar2 == (FRHIResource *)0x0) goto LAB_145f9702d;
    FRHIResource::Release(pFVar2);
  }
  if ((FRHIResource *)local_18._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_18._0_8_);
  }
LAB_145f9702d:
  bVar3 = (bool)(**(code **)(pTVar1->_padding_ + 0x30))(pTVar1);
  bVar3 = FRawStaticIndexBuffer16or32Interface::IsSRVCreatedByDefault
                    ((FRawStaticIndexBuffer16or32Interface *)this,bVar3);
  if (bVar3) {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x90))(this,&local_res8,param_1);
    plVar5 = &this->_padding_;
    if (plVar5 != plVar4) {
      pFVar2 = (FRHIResource *)*plVar5;
      *plVar5 = *plVar4;
      *plVar4 = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// Insert @ 145f97a00

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::Insert
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  this->CachedNumIndices = this->CachedNumIndices + param_2;
  TArray<unsigned_short,TMemoryImageAllocator<0>_>::InsertUninitializedImpl
            ((TArray<unsigned_short,TMemoryImageAllocator<0>_> *)&(this->Indices)._padding_,param_1,
             param_2);
  if (this->CachedNumIndices != (int)(this->Indices)._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedNumIndices == Indices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                       ,0x1f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Insert @ 145f97a50

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::Insert
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  this->CachedNumIndices = this->CachedNumIndices + param_2;
  TArray<unsigned_int,TMemoryImageAllocator<0>_>::InsertUninitializedImpl
            ((TArray<unsigned_int,TMemoryImageAllocator<0>_> *)&(this->Indices)._padding_,param_1,
             param_2);
  if (this->CachedNumIndices != (int)(this->Indices)._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedNumIndices == Indices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                       ,0x1f8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Num @ 145f99d00

int __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::Num(FRawStaticIndexBuffer16or32<unsigned_short> *this)

{
  return this->CachedNumIndices;
}

// Num @ 145f99d10

int __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::Num(FRawStaticIndexBuffer16or32<unsigned_int> *this)

{
  return this->CachedNumIndices;
}

// ReleaseRHI @ 145f9f2d0

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::ReleaseRHI
          (FRawStaticIndexBuffer16or32<unsigned_short> *this)

{
  FRHIResource *this_00;
  
  FIndexBuffer::ReleaseRHI((FIndexBuffer *)this);
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseRHI @ 145f9f310

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::ReleaseRHI
          (FRawStaticIndexBuffer16or32<unsigned_int> *this)

{
  FRHIResource *this_00;
  
  FIndexBuffer::ReleaseRHI((FIndexBuffer *)this);
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// Remove @ 145f9f390

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::Remove
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  plVar1 = &(this->Indices)._padding_;
  this->CachedNumIndices = this->CachedNumIndices - param_2;
  uVar5 = 0;
  if (param_1 + param_2 <= (int)(this->Indices)._padding_) {
    uVar5 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 != 0) {
    uVar7 = *plVar1;
    if ((uVar7 & 1) != 0) {
      uVar7 = (longlong)plVar1 + ((longlong)uVar7 >> 0x18);
    }
    _Dst = (void *)(uVar7 + (longlong)param_1 * 2);
    iVar6 = ((int)(this->Indices)._padding_ - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 2),(longlong)iVar6 * 2);
    }
    plVar2 = &(this->Indices)._padding_;
    *(int *)plVar2 = (int)*plVar2 - param_2;
    UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (2,2,(ForAnyElementType *)plVar1,(int)(this->Indices)._padding_,
               (int *)((longlong)&(this->Indices)._padding_ + 4));
  }
  if (this->CachedNumIndices != (int)(this->Indices)._padding_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedNumIndices == Indices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                       ,0x1ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Remove @ 145f9f4b0

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::Remove
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,int param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  plVar1 = &(this->Indices)._padding_;
  this->CachedNumIndices = this->CachedNumIndices - param_2;
  uVar5 = 0;
  if (param_1 + param_2 <= (int)(this->Indices)._padding_) {
    uVar5 = (uint)~(param_1 | param_2) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 != 0) {
    uVar7 = *plVar1;
    if ((uVar7 & 1) != 0) {
      uVar7 = (longlong)plVar1 + ((longlong)uVar7 >> 0x18);
    }
    _Dst = (void *)(uVar7 + (longlong)param_1 * 4);
    iVar6 = ((int)(this->Indices)._padding_ - param_1) - param_2;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 4),(longlong)iVar6 << 2);
    }
    plVar2 = &(this->Indices)._padding_;
    *(int *)plVar2 = (int)*plVar2 - param_2;
    UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,(ForAnyElementType *)plVar1,(int)(this->Indices)._padding_,
               (int *)((longlong)&(this->Indices)._padding_ + 4));
  }
  if (this->CachedNumIndices != (int)(this->Indices)._padding_) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedNumIndices == Indices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\RawIndexBuffer.h"
                       ,0x1ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Serialize @ 145fa1aa0

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::Serialize
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,FArchive *param_1)

{
  TArray<unsigned_short,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_short,TMemoryImageAllocator<0>_> *)&(this->Indices)._padding_,param_1,
             false);
  this->CachedNumIndices = (int)(this->Indices)._padding_;
  return;
}

// Serialize @ 145fa1ad0

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::Serialize
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,FArchive *param_1)

{
  TArray<unsigned_int,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_int,TMemoryImageAllocator<0>_> *)&(this->Indices)._padding_,param_1,
             false);
  this->CachedNumIndices = (int)(this->Indices)._padding_;
  return;
}

// SerializeMetaData @ 145fa1c80

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::SerializeMetaData
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &this->CachedNumIndices;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145fa1cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// SerializeMetaData @ 145fa1cd0

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::SerializeMetaData
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &this->CachedNumIndices;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145fa1d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// SetMetaData @ 145fa1e20

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_short>::SetMetaData
          (FRawStaticIndexBuffer16or32<unsigned_short> *this,int param_1)

{
  this->CachedNumIndices = param_1;
  return;
}

// SetMetaData @ 145fa1e30

void __thiscall
FRawStaticIndexBuffer16or32<unsigned_int>::SetMetaData
          (FRawStaticIndexBuffer16or32<unsigned_int> *this,int param_1)

{
  this->CachedNumIndices = param_1;
  return;
}

