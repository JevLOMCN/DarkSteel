// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// GetChangeMask @ 144209f90

FNetBitArrayView * __cdecl
UE::Net::Private::FIrisFastArraySerializerPrivateAccessor::GetChangeMask
          (FNetBitArrayView *__return_storage_ptr__,FIrisFastArraySerializer *param_1)

{
  FNetBitArrayView::FNetBitArrayView(__return_storage_ptr__,param_1->ChangeMaskStorage,0x40);
  return __return_storage_ptr__;
}

// GetConditionalChangeMask @ 144209fc0

FNetBitArrayView * __cdecl
UE::Net::Private::FIrisFastArraySerializerPrivateAccessor::GetConditionalChangeMask
          (FNetBitArrayView *__return_storage_ptr__,FIrisFastArraySerializer *param_1)

{
  FNetBitArrayView::FNetBitArrayView(__return_storage_ptr__,param_1->ChangeMaskStorage + 2,0x40);
  return __return_storage_ptr__;
}

// MarkAllArrayItemsDirty @ 144212450

void __cdecl
UE::Net::Private::FIrisFastArraySerializerPrivateAccessor::MarkAllArrayItemsDirty
          (FIrisFastArraySerializer *param_1,uint param_2)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  FNetBitArrayView local_18;
  
  local_18.Storage = param_1->ChangeMaskStorage;
  local_18.WordCount = 2;
  local_18.BitCount = 0x40;
  if (local_18.Storage == (uint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_18.BitCount == 0) goto LAB_1442124fe;
  }
  if ((local_18.Storage[local_18.WordCount - 1] &
      ~(0xffffffffU >> (-(char)local_18.BitCount & 0x1fU))) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BitCount == 0) || ((Storage[WordCount - 1] & ~GetLastWordMask()) == 0u)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a7,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_1442124fe:
  puVar2 = local_18.Storage;
  if (local_18.BitCount == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2c1,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar3 = local_18.Storage;
  if ((*puVar2 & 1) == 0) {
    (&param_1->ReplicationStateHeader)->bStateIsDirty = 1;
  }
  if (param_2 == 0) {
    memset(local_18.Storage,0xff,(ulonglong)local_18.WordCount << 2);
    if (local_18.BitCount != 0) {
      local_18.Storage[local_18.WordCount - 1] =
           local_18.Storage[local_18.WordCount - 1] &
           0xffffffffU >> (-(char)local_18.BitCount & 0x1fU);
    }
  }
  else {
    if (local_18.BitCount == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *puVar3 = *puVar3 | 1;
    FNetBitArrayView::SetBits(&local_18,param_2 + 1,0x3f - param_2);
  }
  return;
}

// MarkArrayDirty @ 1442125e0

void __cdecl
UE::Net::Private::FIrisFastArraySerializerPrivateAccessor::MarkArrayDirty
          (FIrisFastArraySerializer *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = param_1->ChangeMaskStorage;
  if (puVar1 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*puVar1 & 1) == 0) {
    *puVar1 = *puVar1 | 1;
    (&param_1->ReplicationStateHeader)->bStateIsDirty = 1;
  }
  return;
}

// MarkArrayItemDirty @ 1442127a0

void __cdecl
UE::Net::Private::FIrisFastArraySerializerPrivateAccessor::MarkArrayItemDirty
          (FIrisFastArraySerializer *param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  puVar1 = param_1->ChangeMaskStorage;
  if (puVar1 == (uint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x5a6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = param_2 % 0x3f + 1;
  if (0x3f < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1[uVar4 >> 5] = puVar1[uVar4 >> 5] | 1 << (uVar4 & 0x1f);
  if ((*puVar1 & 1) == 0) {
    *puVar1 = *puVar1 | 1;
    (&param_1->ReplicationStateHeader)->bStateIsDirty = 1;
  }
  return;
}

