// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// FPendingAsyncLoadRequest @ 144267410

FPendingAsyncLoadRequest * __thiscall
UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest::FPendingAsyncLoadRequest
          (FPendingAsyncLoadRequest *this,FPendingAsyncLoadRequest *param_1)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  
  (this->NetRefHandles).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  if ((param_1->NetRefHandles).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    memmove(this,param_1,0x20);
  }
  FVar1 = (this->NetRefHandles).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->NetRefHandles).AllocatorInstance.SecondaryData =
       (param_1->NetRefHandles).AllocatorInstance.SecondaryData;
  (param_1->NetRefHandles).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  (this->NetRefHandles).ArrayNum = (param_1->NetRefHandles).ArrayNum;
  (this->NetRefHandles).ArrayMax = (param_1->NetRefHandles).ArrayMax;
  (param_1->NetRefHandles).ArrayNum = 0;
  (param_1->NetRefHandles).ArrayMax = 4;
  this->RequestStartTime = param_1->RequestStartTime;
  return this;
}

// FPendingAsyncLoadRequest @ 144267490

FPendingAsyncLoadRequest * __thiscall
UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest::FPendingAsyncLoadRequest
          (FPendingAsyncLoadRequest *this,FNetRefHandle param_1,double param_2)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPendingAsyncLoadRequest *pFVar5;
  ForElementType<UE::Net::FNetRefHandle> FVar6;
  FNetRefHandle_u_0 local_res10 [3];
  
  (this->NetRefHandles).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  (this->NetRefHandles).ArrayNum = 0;
  (this->NetRefHandles).ArrayMax = 4;
  this->RequestStartTime = param_2;
  local_res10[0] = param_1.field0_0x0;
  if ((this <= local_res10) &&
     (local_res10 < &(this->NetRefHandles).AllocatorInstance.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPendingAsyncLoadRequest *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->NetRefHandles).ArrayNum;
  if (iVar4 == (this->NetRefHandles).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
                      (0x808,(ForElementType<UE::Net::FNetRefHandle> *)this,
                       &(this->NetRefHandles).ArrayMax);
  }
  (this->NetRefHandles).ArrayNum = iVar4 + 1;
  FVar1 = (this->NetRefHandles).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::Net::FNetRefHandle>)this;
  if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FVar6 = FVar1;
  }
  ((FNetRefHandle_u_0 *)((longlong)FVar6 + (longlong)iVar4 * 8))->_s_0 =
       (FNetRefHandle_u_0_s_0)local_res10[0];
  return this;
}

// Merge @ 1442840f0

void __thiscall
UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest::Merge
          (FPendingAsyncLoadRequest *this,FPendingAsyncLoadRequest *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Net::FNetRefHandle> FVar3;
  FNetRefHandle_u_0 local_res10;
  
  FVar3 = (param_1->NetRefHandles).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->NetRefHandles).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    param_1 = (FPendingAsyncLoadRequest *)FVar3;
  }
  FVar3 = (ForElementType<UE::Net::FNetRefHandle>)((longlong)param_1 + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<UE::Net::FNetRefHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if ((ForElementType<UE::Net::FNetRefHandle>)param_1 == FVar3) break;
    local_res10 = *(FNetRefHandle_u_0 *)param_1;
    TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
    AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
              (&this->NetRefHandles,(FNetRefHandle *)&local_res10._s_0);
    param_1 = (FPendingAsyncLoadRequest *)((longlong)param_1 + 8);
  }
  return;
}

// Merge @ 144284170

void __thiscall
UE::Net::Private::FObjectReferenceCache::FPendingAsyncLoadRequest::Merge
          (FPendingAsyncLoadRequest *this,FNetRefHandle param_1)

{
  FNetRefHandle_u_0 local_res10 [3];
  
  local_res10[0] = param_1.field0_0x0;
  TArray<UE::Net::FNetRefHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<UE::Net::FNetRefHandle_const_&>
            (&this->NetRefHandles,(FNetRefHandle *)&local_res10[0]._s_0);
  return;
}

