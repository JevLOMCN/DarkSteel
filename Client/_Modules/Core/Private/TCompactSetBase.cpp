// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AllocatorCalculateSlackGrow @ 1415ab8e0

int __thiscall
TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
          (TCompactSetBase<TSizedDefaultAllocator<32>_> *this,int param_1,FCompactSetLayout *param_2
          )

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong64 uVar5;
  sbyte sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar2 = this->MaxElements;
  uVar8 = 0;
  uVar10 = 0;
  uVar4 = uVar10;
  if (0 < (int)uVar2) {
    uVar4 = (uVar2 * param_2->Size + 3 & 0xfffffffc) + 4 +
            (int)((ulonglong)
                  *(uint *)(((ulonglong)(uVar2 * param_2->Size + 3) & 0xfffffffc) +
                           (longlong)this->Elements) + (ulonglong)uVar2 <<
                 (0xff < uVar2) + (0xffff < uVar2));
  }
  uVar9 = uVar8;
  if (0 < param_1) {
    if ((uint)param_1 < 8) {
      uVar2 = 4;
    }
    else {
      uVar2 = FGenericPlatformMath::CountLeadingZeros((uint)param_1 >> 1);
      uVar2 = 1 << (-(char)uVar2 & 0x1fU);
    }
    uVar8 = ((ulonglong)(param_1 * param_2->Size + 3) & 0xfffffffc) + 4 +
            ((ulonglong)uVar2 + (ulonglong)(uint)param_1 <<
            (0xffU < (uint)param_1) + (0xffffU < (uint)param_1));
    uVar9 = (ulonglong)uVar2;
  }
  uVar7 = (ulonglong)(int)uVar8;
  if (uVar4 == 0) {
    uVar5 = 4;
    if (4 < uVar7) {
      uVar5 = uVar7;
    }
  }
  else {
    uVar5 = (uVar7 * 3 >> 3) + 0x10 + uVar7;
  }
  uVar5 = FMemory::QuantizeSize(uVar5,param_2->Alignment);
  iVar3 = (int)uVar5;
  if (iVar3 < (int)uVar8) {
    iVar3 = 0x7fffffff;
  }
  if ((longlong)iVar3 != uVar8) {
    sVar6 = (0xffffU < (uint)param_1) + (0xffU < (uint)param_1);
    uVar8 = ((longlong)iVar3 - (uVar9 << sVar6)) - 4;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    auVar1 = auVar1 / ZEXT416((0xffU < (uint)param_1) + 1 +
                              param_2->Size + (uint)(0xffffU < (uint)param_1) * 2);
    uVar2 = (uint)((uVar8 - (auVar1._0_8_ << sVar6) & 0xfffffffffffffffc) /
                  (ulonglong)(longlong)param_2->Size);
    uVar4 = auVar1._0_4_;
    if ((int)uVar4 < (int)uVar2) {
      uVar2 = uVar4;
    }
    if (param_1 < (int)uVar2) {
      if (uVar2 != 0) {
        if (uVar2 < 8) {
          if ((uint)uVar9 < 4) {
            return 3;
          }
          return uVar2;
        }
        uVar4 = FGenericPlatformMath::CountLeadingZeros(uVar2 >> 1);
        uVar10 = 1 << (0x20U - (char)uVar4 & 0x1f);
      }
      param_1 = uVar10 - 1;
      if (uVar10 <= (uint)uVar9) {
        param_1 = uVar2;
      }
    }
  }
  return param_1;
}

// ResizeAllocationPreserveData @ 1415eb9c0

bool __thiscall
TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
          (TCompactSetBase<TSizedDefaultAllocator<32>_> *this,int param_1,FCompactSetLayout *param_2
          ,bool param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  void *_Dst;
  sbyte sVar6;
  void *_Src;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8;
  ulonglong local_48;
  
  uVar1 = this->MaxElements;
  if (param_1 == uVar1) {
    return false;
  }
  uVar7 = 0;
  if ((int)uVar1 < 1) {
    local_res8 = 0;
    uVar8 = uVar7;
  }
  else {
    uVar8 = (ulonglong)
            *(uint *)(((ulonglong)(uVar1 * param_2->Size + 3) & 0xfffffffc) +
                     (longlong)this->Elements);
    local_res8 = (uVar1 * param_2->Size + 3 & 0xfffffffc) + 4 +
                 (int)(uVar1 + uVar8 << (0xff < uVar1) + (0xffff < uVar1));
  }
  if (param_1 < 1) {
    local_48 = 0;
  }
  else {
    if ((uint)param_1 < 8) {
      local_48 = 4;
    }
    else {
      uVar5 = FGenericPlatformMath::CountLeadingZeros((uint)param_1 >> 1);
      local_48 = (ulonglong)(uint)(1 << (0x20U - (char)uVar5 & 0x1f));
    }
    uVar7 = ((ulonglong)(param_1 * param_2->Size + 3) & 0xfffffffc) + 4 +
            ((uint)param_1 + local_48 << (0xffU < (uint)param_1) + (0xffffU < (uint)param_1));
  }
  if (((param_3) && ((int)uVar1 < param_1)) && (uVar8 == local_48)) {
    if (0x7fffffff < uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSize >= 0 && NewSize <= ((int32) 0x7fffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSetBase.h"
                         ,0xdb,
                         L"Invalid size for TSet[%d]: NewMaxElements[%d] ElementSize[%d] HashCount[%d]"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,local_res8,(int)uVar7,1,param_2->Alignment);
    sVar6 = (0xffU < (uint)param_1) + (0xffffU < (uint)param_1);
    if (sVar6 != (sbyte)((0xffU < (uint)this->MaxElements) + (0xffffU < (uint)this->MaxElements))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewTypeShift == UE::Core::CompactHashTable::GetTypeShift(MaxElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSetBase.h"
                         ,0xea,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    _Src = (void *)(((ulonglong)(param_2->Size * this->MaxElements + 3) & 0xfffffffc) +
                   (longlong)this->Elements);
    _Dst = (void *)(((ulonglong)(param_2->Size * param_1 + 3) & 0xfffffffc) +
                   (longlong)this->Elements);
    memmove((void *)((longlong)_Dst + ((longlong)param_1 << sVar6) + 4),
            (void *)((longlong)_Src + ((longlong)this->MaxElements << sVar6) + 4),local_48 << sVar6)
    ;
    memmove(_Dst,_Src,((longlong)this->NumElements << sVar6) + 4);
  }
  else {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,this->NumElements * param_2->Size,(int)uVar7,1,
               param_2->Alignment);
    if (0 < param_1) {
      *(int *)(((ulonglong)(param_1 * param_2->Size + 3) & 0xfffffffc) + (longlong)this->Elements) =
           (int)local_48;
      bVar3 = true;
      goto LAB_1415ebc19;
    }
  }
  bVar3 = false;
LAB_1415ebc19:
  this->MaxElements = param_1;
  return bVar3;
}

// AllocatorCalculateSlackGrow @ 141b387f0

int __thiscall
TCompactSetBase<TFixedAllocator<388>_>::AllocatorCalculateSlackGrow
          (TCompactSetBase<TFixedAllocator<388>_> *this,int param_1,FCompactSetLayout *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  sbyte sVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (param_1 < 1) {
    uVar4 = 0;
    uVar11 = 0;
    lVar9 = 0;
  }
  else {
    if ((uint)param_1 < 8) {
      uVar4 = 4;
    }
    else {
      uVar4 = FGenericPlatformMath::CountLeadingZeros((uint)param_1 >> 1);
      uVar4 = 1 << (-(char)uVar4 & 0x1fU);
    }
    uVar11 = (ulonglong)uVar4;
    lVar9 = ((ulonglong)(param_1 * param_2->Size + 3) & 0xfffffffc) + 4 +
            (uVar11 + (uint)param_1 << (0xffU < (uint)param_1) + (0xffffU < (uint)param_1));
  }
  uVar7 = 0;
  if ((0x184 < (uint)lVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  if (lVar9 != 0x184) {
    sVar8 = (0xffffU < (uint)param_1) + (0xffU < (uint)param_1);
    uVar11 = 0x180 - (uVar11 << sVar8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar11;
    auVar1 = auVar1 / ZEXT416((0xffU < (uint)param_1) + 1 +
                              param_2->Size + (uint)(0xffffU < (uint)param_1) * 2);
    uVar6 = (uint)((uVar11 - (auVar1._0_8_ << sVar8) & 0xfffffffffffffffc) /
                  (ulonglong)(longlong)param_2->Size);
    uVar10 = auVar1._0_4_;
    if ((int)uVar10 < (int)uVar6) {
      uVar6 = uVar10;
    }
    if (param_1 < (int)uVar6) {
      if (uVar6 != 0) {
        if (uVar6 < 8) {
          if (uVar4 < 4) {
            return 3;
          }
          return uVar6;
        }
        uVar7 = FGenericPlatformMath::CountLeadingZeros(uVar6 >> 1);
        uVar7 = 1 << (0x20U - (char)uVar7 & 0x1f);
      }
      param_1 = uVar7 - 1;
      if (uVar7 <= uVar4) {
        param_1 = uVar6;
      }
    }
  }
  return param_1;
}

// ResizeAllocationPreserveData @ 141b4cf10

bool __thiscall
TCompactSetBase<TFixedAllocator<388>_>::ResizeAllocationPreserveData
          (TCompactSetBase<TFixedAllocator<388>_> *this,int param_1,FCompactSetLayout *param_2,
          bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  TTypeCompatibleBytes<unsigned_char> *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  TTypeCompatibleBytes<unsigned_char> *_Src;
  bool bVar9;
  sbyte sVar10;
  
  iVar1 = this->MaxElements;
  bVar9 = false;
  if (param_1 != iVar1) {
    uVar7 = 0;
    uVar6 = 0;
    if (0 < iVar1) {
      uVar6 = *(uint *)((this->Elements).InlineData +
                       ((ulonglong)(iVar1 * param_2->Size + 3) & 0xfffffffc));
    }
    uVar8 = uVar7;
    if (0 < param_1) {
      if ((uint)param_1 < 8) {
        uVar7 = 4;
      }
      else {
        uVar5 = FGenericPlatformMath::CountLeadingZeros((uint)param_1 >> 1);
        uVar7 = (ulonglong)(uint)(1 << (0x20U - (char)uVar5 & 0x1f));
      }
      uVar8 = ((ulonglong)(param_1 * param_2->Size + 3) & 0xfffffffc) + 4 +
              ((uint)param_1 + uVar7 << (0xffU < (uint)param_1) + (0xffffU < (uint)param_1));
    }
    uVar5 = (uint)uVar8;
    bVar9 = false;
    if (((param_3) && (iVar1 < param_1)) && (uVar6 == uVar7)) {
      if ((0x7fffffff < uVar8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewSize >= 0 && NewSize <= ((int32) 0x7fffffff)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSetBase.h"
                             ,0xdb,
                             L"Invalid size for TSet[%d]: NewMaxElements[%d] ElementSize[%d] HashCount[%d]"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((((int)uVar5 < 0) || (0x184 < uVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewMax >= 0 && NewMax <= NumInlineElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                             ,0x524,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      sVar10 = (0xffU < (uint)param_1) + (0xffffU < (uint)param_1);
      if ((sVar10 != (sbyte)((0xffU < (uint)this->MaxElements) + (0xffffU < (uint)this->MaxElements)
                            )) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewTypeShift == UE::Core::CompactHashTable::GetTypeShift(MaxElements)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSetBase.h"
                             ,0xea,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      _Src = (this->Elements).InlineData +
             ((ulonglong)(param_2->Size * this->MaxElements + 3) & 0xfffffffc);
      _Dst = (this->Elements).InlineData + ((ulonglong)(param_2->Size * param_1 + 3) & 0xfffffffc);
      memmove(_Dst + ((longlong)param_1 << sVar10) + 4,
              _Src + ((longlong)this->MaxElements << sVar10) + 4,uVar7 << sVar10);
      memmove(_Dst,_Src,((longlong)this->NumElements << sVar10) + 4);
    }
    else {
      if ((((int)uVar5 < 0) || (0x184 < uVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewMax >= 0 && NewMax <= NumInlineElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                             ,0x524,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (0 < param_1) {
        bVar9 = true;
        *(int *)((this->Elements).InlineData +
                ((ulonglong)(param_1 * param_2->Size + 3) & 0xfffffffc)) = (int)uVar7;
      }
    }
    this->MaxElements = param_1;
  }
  return bVar9;
}

