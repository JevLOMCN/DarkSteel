// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// CollectReferences @ 1442b82e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::Private::FResolveAndCollectUnresolvedAndResolvedReferenceCollector::CollectReferences
          (FResolveAndCollectUnresolvedAndResolvedReferenceCollector *this,
          FObjectReferenceCache *param_1,FNetObjectResolveContext *param_2,bool param_3,
          FNetBitArrayView *param_4,uchar *param_5,FReplicationProtocol *param_6)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar7;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar8;
  undefined8 *puVar9;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar10;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar11;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar12;
  undefined1 auStack_828 [32];
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> local_808;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> local_800;
  longlong local_7f8;
  longlong local_7f0;
  undefined8 local_7e8;
  UObject *local_7d8 [2];
  FNetRefHandle_u_0 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b0 [95];
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  FNetBitArrayView *local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  uint local_468;
  FNetReferenceCollector local_458;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_828;
  this->bIncludeInitState = param_3;
  local_7c8.Value = 0;
  puVar9 = local_7b0;
  local_7c0 = 0;
  lVar6 = 0x20;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  local_480 = param_4;
  local_468 = local_468 & 0xfffffffc | (uint)param_3;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  local_478 = 0;
  local_470 = 0;
  local_46c = 0xffffffff;
  local_458.ReferenceInfos.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
  local_458.ReferenceInfos.ArrayNum = 0;
  local_458.ReferenceInfos.ArrayMax = 0x20;
  local_458.Traits = None;
  FReplicationProtocolOperationsInternal::CollectReferences
            ((FNetSerializationContext *)&local_7c8._s_0,&local_458,param_5,param_6);
  lVar6 = (longlong)local_458.ReferenceInfos.ArrayNum;
  FVar10 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)&local_458;
  if (local_458.ReferenceInfos.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
    FVar10 = local_458.ReferenceInfos.AllocatorInstance.SecondaryData;
  }
  if ((local_458.ReferenceInfos.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar12 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
           (lVar6 * 0x20 + (longlong)FVar10);
  do {
    if (FVar10 == FVar12) {
      if (local_458.ReferenceInfos.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FMemory::Free((void *)local_458.ReferenceInfos.AllocatorInstance.SecondaryData);
      }
      return;
    }
    local_7d8[0] = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (param_1,(FNetObjectReference *)((longlong)FVar10 + 8),param_2,local_7d8);
    if (local_7d8[0] == (UObject *)0x0) {
      FVar11 = (this->UnresolvedReferenceInfos).AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)this;
      if (FVar11 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FVar7 = FVar11;
      }
      if ((ulonglong)FVar7 <= (ulonglong)FVar10) {
        lVar6 = (longlong)(this->UnresolvedReferenceInfos).ArrayMax;
        FVar7 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)this;
        if (FVar11 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
          FVar7 = FVar11;
        }
        if ((ulonglong)FVar10 < (ulonglong)(lVar6 * 0x20 + (longlong)FVar7)) {
          local_7f0 = (longlong)(this->UnresolvedReferenceInfos).ArrayNum;
          local_7e8 = 0x20;
          local_800 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)this;
          if (FVar11 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
            local_800 = FVar11;
          }
          local_808 = FVar10;
          local_7f8 = lVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      iVar5 = (this->UnresolvedReferenceInfos).ArrayNum;
      piVar1 = &(this->UnresolvedReferenceInfos).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>_>
                          (0x820,(ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
                                 this,piVar1);
      }
      (this->UnresolvedReferenceInfos).ArrayNum = iVar5 + 1;
      FVar11 = (this->UnresolvedReferenceInfos).AllocatorInstance.SecondaryData;
      uVar3 = *(undefined8 *)((longlong)FVar10 + 8);
      FVar7 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)this;
      if (FVar11 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FVar7 = FVar11;
      }
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x20 + (longlong)FVar7);
      *puVar9 = *(undefined8 *)FVar10;
      puVar9[1] = uVar3;
      uVar3 = *(undefined8 *)((longlong)FVar10 + 0x18);
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x20 + 0x10 + (longlong)FVar7);
      *puVar9 = *(undefined8 *)((longlong)FVar10 + 0x10);
      puVar9[1] = uVar3;
    }
    else {
      FVar7 = (this->ResolvedReferenceInfos).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
               &this->ResolvedReferenceInfos;
      FVar8 = FVar11;
      if (FVar7 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FVar8 = FVar7;
      }
      if ((ulonglong)FVar8 <= (ulonglong)FVar10) {
        lVar6 = (longlong)(this->ResolvedReferenceInfos).ArrayMax;
        FVar8 = FVar11;
        if (FVar7 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
          FVar8 = FVar7;
        }
        if ((ulonglong)FVar10 < (ulonglong)(lVar6 * 0x20 + (longlong)FVar8)) {
          local_7f0 = (longlong)(this->ResolvedReferenceInfos).ArrayNum;
          local_7e8 = 0x20;
          local_800 = FVar11;
          if (FVar7 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
            local_800 = FVar7;
          }
          local_808 = FVar10;
          local_7f8 = lVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      iVar5 = (this->ResolvedReferenceInfos).ArrayNum;
      piVar1 = &(this->ResolvedReferenceInfos).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>_>
                          (0x820,(ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *)
                                 FVar11,piVar1);
      }
      (this->ResolvedReferenceInfos).ArrayNum = iVar5 + 1;
      FVar7 = (this->ResolvedReferenceInfos).AllocatorInstance.SecondaryData;
      uVar3 = *(undefined8 *)((longlong)FVar10 + 8);
      if (FVar7 != (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
        FVar11 = FVar7;
      }
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x20 + (longlong)FVar11);
      *puVar9 = *(undefined8 *)FVar10;
      puVar9[1] = uVar3;
      uVar3 = *(undefined8 *)((longlong)FVar10 + 0x18);
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x20 + 0x10 + (longlong)FVar11);
      *puVar9 = *(undefined8 *)((longlong)FVar10 + 0x10);
      puVar9[1] = uVar3;
    }
    FVar10 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
             ((longlong)FVar10 + 0x20);
  } while( true );
}

