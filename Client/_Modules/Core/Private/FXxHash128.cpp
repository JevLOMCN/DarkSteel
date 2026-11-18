// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// HashBuffer @ 1416fd300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXxHash128 * __cdecl
FXxHash128::HashBuffer(FXxHash128 *__return_storage_ptr__,FCompositeBuffer *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FXxHash128 *pFVar6;
  XXH_INLINE_XXH128_hash_t *pXVar7;
  void *pvVar8;
  ulong64 uVar9;
  undefined1 auStack_308 [72];
  XXH_INLINE_XXH128_hash_t local_2c0 [4];
  XXH_INLINE_XXH3_state_s local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_308;
  iVar1 = (param_1->Segments).ArrayNum;
  local_280.totalLen = 0;
  local_280.seed = 0;
  local_280.acc[0] = 0xc2b2ae3d;
  local_280.secretLimit = 0x80;
  local_280.acc[1] = 0x9e3779b185ebca87;
  local_280.nbStripesPerBlock = 0x10;
  local_280.acc[2] = 0xc2b2ae3d27d4eb4f;
  local_280.acc[3] = 0x165667b19e3779f9;
  local_280.acc[4] = 0x85ebca77c2b2ae63;
  local_280.acc[5] = 0x85ebca77;
  local_280.acc[6] = 0x27d4eb2f165667c5;
  local_280.acc[7] = 0x9e3779b1;
  local_280.extSecret = XXH3_kSecret;
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  local_280.bufferedSize = 0;
  local_280.reserved32 = 0;
  local_280.nbStripesSoFar = 0;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompositeBuffer *)FVar2;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FXxHash128 *)(*pcVar4)();
    return pFVar6;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar1 * 8);
  for (; (ForElementType<FSharedBuffer>)param_1 != FVar2;
      param_1 = (FCompositeBuffer *)((longlong)param_1 + 8)) {
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar9 = plVar3[2];
    }
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pvVar8 = (void *)plVar3[1];
    }
    XXH_INLINE_XXH3_128bits_update(&local_280,pvVar8,uVar9);
  }
  pXVar7 = XXH_INLINE_XXH3_128bits_digest(local_2c0,&local_280);
  uVar9 = pXVar7->high64;
  __return_storage_ptr__->HashLow = pXVar7->low64;
  __return_storage_ptr__->HashHigh = uVar9;
  return __return_storage_ptr__;
}

// HashBuffer @ 1416fd4e0

FXxHash128 * __cdecl
FXxHash128::HashBuffer(FXxHash128 *__return_storage_ptr__,void *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  XXH_INLINE_XXH128_hash_t *pXVar2;
  XXH_INLINE_XXH128_hash_t local_18;
  
  pXVar2 = XXH_INLINE_XXH3_128bits(&local_18,param_1,param_2);
  uVar1 = pXVar2->high64;
  __return_storage_ptr__->HashLow = pXVar2->low64;
  __return_storage_ptr__->HashHigh = uVar1;
  return __return_storage_ptr__;
}

// HashBuffer @ 1416fd510

FXxHash128 * __cdecl
FXxHash128::HashBuffer(FXxHash128 *__return_storage_ptr__,TMemoryView<void_const_> *param_1)

{
  ulong64 uVar1;
  XXH_INLINE_XXH128_hash_t *pXVar2;
  XXH_INLINE_XXH128_hash_t local_18;
  
  pXVar2 = XXH_INLINE_XXH3_128bits(&local_18,param_1->Data,param_1->Size);
  uVar1 = pXVar2->high64;
  __return_storage_ptr__->HashLow = pXVar2->low64;
  __return_storage_ptr__->HashHigh = uVar1;
  return __return_storage_ptr__;
}

// HashBufferChunked @ 1416fd740

FXxHash128 * __cdecl
FXxHash128::HashBufferChunked
          (FXxHash128 *__return_storage_ptr__,void *param_1,ulong64 param_2,ulong64 param_3)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1;
  local_18.Size = param_2;
  PrivateHashBufferChunked<FXxHash128>(__return_storage_ptr__,&local_18,param_3);
  return __return_storage_ptr__;
}

// HashBufferChunked @ 1416fd770

FXxHash128 * __cdecl
FXxHash128::HashBufferChunked
          (FXxHash128 *__return_storage_ptr__,TMemoryView<void_const_> *param_1,ulong64 param_2)

{
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1->Data;
  local_18.Size = param_1->Size;
  PrivateHashBufferChunked<FXxHash128>(__return_storage_ptr__,&local_18,param_2);
  return __return_storage_ptr__;
}

