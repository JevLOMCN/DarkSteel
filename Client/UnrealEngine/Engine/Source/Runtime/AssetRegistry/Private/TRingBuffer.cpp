// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 20

// operator[] @ 142add080

FGatheredPathData * __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGatheredPathData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGatheredPathData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGatheredPathData *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x30);
}

// operator[] @ 142add100

FGatheredPathData * __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGatheredPathData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGatheredPathData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGatheredPathData *)
         ((this->AllocatorInstance).Data +
         (ulonglong)(this->Front + param_1 & this->IndexMask) * 0x30);
}

// operator[] @ 142add180

FSortData * __thiscall
TRingBuffer<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,TSizedDefaultAllocator<32>_>
::operator[](void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSortData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0xc)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSortData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSortData *)
         ((ulonglong)(*(int *)((longlong)this + 0xc) + param_1 & *(uint *)((longlong)this + 8)) *
          0x20 + *(longlong *)this);
}

// Add @ 142ae81c0

int __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::Add
          (TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
           *this,FGatheredPathData *param_1)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  
  uVar2 = NormalizeCapacity(this,(this->AfterBack - this->Front) + 1);
  if (this->IndexMask + 1 < uVar2) {
    Reallocate(this,uVar2);
  }
  uVar2 = this->AfterBack;
  uVar1 = this->Front;
  this->AfterBack = uVar2 + 1;
  pFVar3 = (this->AllocatorInstance).Data + (ulonglong)(this->IndexMask & uVar2) * 0x30;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = (param_1->LocalAbsPath).Data.AllocatorInstance.Data;
  (param_1->LocalAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + 8) = (param_1->LocalAbsPath).Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = (param_1->LocalAbsPath).Data.ArrayMax;
  (param_1->LocalAbsPath).Data.ArrayNum = 0;
  (param_1->LocalAbsPath).Data.ArrayMax = 0;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + 0x10) =
       (param_1->LongPackageName).Data.AllocatorInstance.Data;
  (param_1->LongPackageName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + 0x18) = (param_1->LongPackageName).Data.ArrayNum;
  *(int *)(pFVar3 + 0x1c) = (param_1->LongPackageName).Data.ArrayMax;
  (param_1->LongPackageName).Data.ArrayNum = 0;
  (param_1->LongPackageName).Data.ArrayMax = 0;
  *(long64 *)(pFVar3 + 0x20) = (param_1->PackageTimestamp).Ticks;
  pFVar3[0x28] = (FScriptContainerElement)param_1->bIsReadOnly;
  pFVar3[0x29] = (FScriptContainerElement)param_1->Type;
  return uVar2 - uVar1;
}

// Add @ 142ae8280

int __thiscall
TRingBuffer<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,TSizedDefaultAllocator<32>_>
::Add(void *this,FSortData *param_1)

{
  undefined8 *puVar1;
  FName *pFVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  FName FVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = NormalizeCapacity(this,(*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0xc))
                                 + 1);
  if (*(int *)((longlong)this + 8) + 1U < uVar7) {
    Reallocate(this,uVar7);
  }
  uVar7 = *(uint *)((longlong)this + 0x10);
  iVar3 = *(int *)((longlong)this + 0xc);
  lVar8 = (ulonglong)(*(uint *)((longlong)this + 8) & uVar7) * 0x20;
  *(uint *)((longlong)this + 0x10) = uVar7 + 1;
  lVar4 = *(longlong *)this;
  puVar5 = param_1->PackageName;
  puVar1 = (undefined8 *)(lVar8 + lVar4);
  *puVar1 = param_1->AssetData;
  puVar1[1] = puVar5;
  FVar6 = (FName)param_1->SubPath;
  pFVar2 = (FName *)(lVar8 + 0x10 + lVar4);
  *pFVar2 = param_1->AssetName;
  pFVar2[1] = FVar6;
  return uVar7 - iVar3;
}

// DestructRange @ 142aef310

void __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
DestructRange(TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
              *this,uint param_1,uint param_2)

{
  uint uVar1;
  FGatheredPathData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGatheredPathData *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (FGatheredPathData *)(this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + uVar5;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                (pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>(pFVar6,uVar7);
  }
  return;
}

// DestructRange @ 142aef3b0

void __thiscall
TRingBuffer<FString,TSizedDefaultAllocator<32>_>::DestructRange
          (TRingBuffer<FString,TSizedDefaultAllocator<32>_> *this,uint param_1,uint param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  uVar1 = this->IndexMask;
  uVar7 = param_2 - param_1;
  if (uVar1 + 1 < uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar7 != 0) {
    pFVar2 = (this->AllocatorInstance).Data;
    uVar5 = uVar1 & param_1;
    pFVar6 = pFVar2 + (ulonglong)uVar5 * 0x10;
    if ((uVar1 & param_2) <= uVar5) {
      DestructItems<FString,unsigned_int>((FString *)pFVar6,(uVar1 + 1) - uVar5);
      pFVar6 = pFVar2;
      uVar7 = uVar1 & param_2;
    }
    DestructItems<FString,unsigned_int>((FString *)pFVar6,uVar7);
  }
  return;
}

// MoveAppendRange @ 142b09c90

void __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
MoveAppendRange(TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                *this,FGatheredPathData *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_2 != 0) {
    if (param_1 == (FGatheredPathData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = this->AfterBack - this->Front;
    uVar5 = uVar3 + param_2;
    if (uVar5 <= uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNum > OldNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16e,L"Overflow: Num() == %d, OtherNum == %d, NewNum == %d");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = NormalizeCapacity(this,uVar5);
    if (this->IndexMask + 1 < uVar3) {
      Reallocate(this,uVar3);
    }
    uVar3 = this->IndexMask;
    pFVar7 = (this->AllocatorInstance).Data;
    uVar6 = uVar3 & this->AfterBack;
    uVar4 = this->Front & uVar3;
    uVar5 = this->AfterBack + param_2 & uVar3;
    if (uVar6 < uVar5) {
      if ((uVar6 < uVar4) && (uVar4 < uVar5)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Front & LocalIndexMask) <= MaskedMoveRangeStart || MaskedMoveRangeEnd <= (Front & LocalIndexMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x182,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar7 = pFVar7 + (ulonglong)uVar6 * 0x30;
      uVar5 = param_2;
    }
    else {
      if ((uVar4 < uVar5) || (uVar6 < uVar4)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaskedMoveRangeEnd <= (Front & LocalIndexMask) && (Front & LocalIndexMask) <= MaskedMoveRangeStart"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x17a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = (uVar3 - uVar6) + 1;
      MoveConstructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
                (pFVar7 + (ulonglong)uVar6 * 0x30,param_1,uVar3);
      param_1 = param_1 + uVar3;
    }
    MoveConstructItems<UE::AssetDataGather::Private::FGatheredPathData,unsigned_int>
              (pFVar7,param_1,uVar5);
    this->AfterBack = this->AfterBack + param_2;
  }
  return;
}

// MoveAppendRange @ 142b09e30

void __thiscall
TRingBuffer<FName,TSizedDefaultAllocator<32>_>::MoveAppendRange
          (TRingBuffer<FName,TSizedDefaultAllocator<32>_> *this,FName *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (param_2 != 0) {
    if (param_1 == (FName *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = this->AfterBack - this->Front;
    uVar5 = uVar3 + param_2;
    if (uVar5 <= uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNum > OldNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16e,L"Overflow: Num() == %d, OtherNum == %d, NewNum == %d");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = NormalizeCapacity(this,uVar5);
    if (this->IndexMask + 1 < uVar3) {
      Reallocate(this,uVar3);
    }
    uVar3 = this->IndexMask;
    _Dst = (this->AllocatorInstance).Data;
    uVar7 = uVar3 & this->AfterBack;
    uVar4 = this->Front & uVar3;
    uVar5 = this->AfterBack + param_2 & uVar3;
    if (uVar7 < uVar5) {
      if ((uVar7 < uVar4) && (uVar4 < uVar5)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Front & LocalIndexMask) <= MaskedMoveRangeStart || MaskedMoveRangeEnd <= (Front & LocalIndexMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x182,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      _Dst = _Dst + (ulonglong)uVar7 * 8;
      uVar5 = param_2;
    }
    else {
      if ((uVar4 < uVar5) || (uVar7 < uVar4)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaskedMoveRangeEnd <= (Front & LocalIndexMask) && (Front & LocalIndexMask) <= MaskedMoveRangeStart"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x17a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar6 = (ulonglong)((uVar3 - uVar7) + 1);
      memmove(_Dst + (ulonglong)uVar7 * 8,param_1,uVar6 * 8);
      param_1 = param_1 + uVar6;
    }
    memmove(_Dst,param_1,(ulonglong)uVar5 << 3);
    this->AfterBack = this->AfterBack + param_2;
  }
  return;
}

// MoveAppendRange @ 142b09fd0

void __thiscall
TRingBuffer<FString,TSizedDefaultAllocator<32>_>::MoveAppendRange
          (TRingBuffer<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if (param_2 != 0) {
    if (param_1 == (FString *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = this->AfterBack - this->Front;
    uVar5 = uVar3 + param_2;
    if (uVar5 <= uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewNum > OldNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x16e,L"Overflow: Num() == %d, OtherNum == %d, NewNum == %d");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = NormalizeCapacity(this,uVar5);
    if (this->IndexMask + 1 < uVar3) {
      Reallocate(this,uVar3);
    }
    uVar3 = this->IndexMask;
    pFVar7 = (this->AllocatorInstance).Data;
    uVar6 = uVar3 & this->AfterBack;
    uVar4 = this->Front & uVar3;
    uVar5 = this->AfterBack + param_2 & uVar3;
    if (uVar6 < uVar5) {
      if ((uVar6 < uVar4) && (uVar4 < uVar5)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Front & LocalIndexMask) <= MaskedMoveRangeStart || MaskedMoveRangeEnd <= (Front & LocalIndexMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x182,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar7 = pFVar7 + (ulonglong)uVar6 * 0x10;
      uVar5 = param_2;
    }
    else {
      if ((uVar4 < uVar5) || (uVar6 < uVar4)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MaskedMoveRangeEnd <= (Front & LocalIndexMask) && (Front & LocalIndexMask) <= MaskedMoveRangeStart"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                           ,0x17a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      uVar3 = (uVar3 - uVar6) + 1;
      MoveConstructItems<FString,unsigned_int>(pFVar7 + (ulonglong)uVar6 * 0x10,param_1,uVar3);
      param_1 = param_1 + uVar3;
    }
    MoveConstructItems<FString,unsigned_int>(pFVar7,param_1,uVar5);
    this->AfterBack = this->AfterBack + param_2;
  }
  return;
}

// NormalizeCapacity @ 142b0a170

uint __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::
NormalizeCapacity(TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
                  *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 142b0a1f0

uint __thiscall
TRingBuffer<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,TSizedDefaultAllocator<32>_>
::NormalizeCapacity(void *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 142b0a270

uint __thiscall
TRingBuffer<FName,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<FName,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// NormalizeCapacity @ 142b0a2f0

uint __thiscall
TRingBuffer<FString,TSizedDefaultAllocator<32>_>::NormalizeCapacity
          (TRingBuffer<FString,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 1;
  if (param_1 != 0) {
    uVar5 = param_1;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uint)(param_1 != 0) << ((byte)lVar2 & 0x1f);
  if (0x7fffffff < uVar5 || uVar5 < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("((static_cast<StorageModuloType>(ResultCapacity) <= (TNumericLimits<StorageModuloType>::Max() >> 1)) & (InCapacity <= ResultCapacity))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x39f,L"Integer overflow in TRingBuffer capacity");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return uVar5;
}

// Reallocate @ 142b0fdc0

void __thiscall
TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<UE::AssetDataGather::Private::FGatheredPathData,TSizedDefaultAllocator<32>_>
           *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  
  uVar12 = this->IndexMask + 1;
  uVar11 = this->AfterBack - this->Front;
  pFVar6 = (this->AllocatorInstance).Data;
  uVar4 = NormalizeCapacity(this,param_1);
  if ((uVar4 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < uVar11) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar11 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x30,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x30,8);
    FVar2.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar4 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar4) {
      uVar9 = (ulonglong)(uVar4 - uVar10);
      uVar7 = 0;
      pFVar6 = pFVar6 + (ulonglong)uVar10 * 0x30 + 0x1c;
      do {
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30) = *(undefined8 *)(pFVar6 + -0x1c);
        *(undefined8 *)(pFVar6 + -0x1c) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x30 + 8) = *(undefined4 *)(pFVar6 + -0x14);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x30 + 0xc) = *(undefined4 *)(pFVar6 + -0x10);
        *(undefined8 *)(pFVar6 + -0x14) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30 + 0x10) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30 + 0x10) = *(undefined8 *)(pFVar6 + -0xc);
        *(undefined8 *)(pFVar6 + -0xc) = 0;
        *(undefined4 *)(local_res8.Data + uVar7 * 0x30 + 0x18) = *(undefined4 *)(pFVar6 + -4);
        *(undefined4 *)(local_res8.Data + uVar7 * 0x30 + 0x1c) = *(undefined4 *)pFVar6;
        *(undefined8 *)(pFVar6 + -4) = 0;
        *(undefined8 *)(local_res8.Data + uVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar6 + 4);
        local_res8.Data[uVar7 * 0x30 + 0x28] = pFVar6[0xc];
        local_res8.Data[uVar7 * 0x30 + 0x29] = pFVar6[0xd];
        uVar9 = uVar9 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        pFVar6 = pFVar6 + 0x30;
      } while (uVar9 != 0);
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        uVar8 = (ulonglong)(uVar12 - uVar10);
        pFVar5 = pFVar6 + (ulonglong)uVar10 * 0x30 + 0x1c;
        uVar9 = uVar7;
        do {
          uVar7 = (ulonglong)((int)uVar9 + 1);
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30) = *(undefined8 *)(pFVar5 + -0x1c);
          *(undefined8 *)(pFVar5 + -0x1c) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x30 + 8) = *(undefined4 *)(pFVar5 + -0x14);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x30 + 0xc) = *(undefined4 *)(pFVar5 + -0x10);
          *(undefined8 *)(pFVar5 + -0x14) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30 + 0x10) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30 + 0x10) = *(undefined8 *)(pFVar5 + -0xc);
          *(undefined8 *)(pFVar5 + -0xc) = 0;
          *(undefined4 *)(local_res8.Data + uVar9 * 0x30 + 0x18) = *(undefined4 *)(pFVar5 + -4);
          *(undefined4 *)(local_res8.Data + uVar9 * 0x30 + 0x1c) = *(undefined4 *)pFVar5;
          *(undefined8 *)(pFVar5 + -4) = 0;
          *(undefined8 *)(local_res8.Data + uVar9 * 0x30 + 0x20) = *(undefined8 *)(pFVar5 + 4);
          local_res8.Data[uVar9 * 0x30 + 0x28] = pFVar5[0xc];
          local_res8.Data[uVar9 * 0x30 + 0x29] = pFVar5[0xd];
          uVar8 = uVar8 - 1;
          pFVar5 = pFVar5 + 0x30;
          uVar9 = uVar7;
        } while (uVar8 != 0);
      }
      DestructRange(this,uVar10,uVar12);
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar9 = (ulonglong)uVar4;
        pFVar6 = pFVar6 + 0x1c;
        do {
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30) = *(undefined8 *)(pFVar6 + -0x1c);
          *(undefined8 *)(pFVar6 + -0x1c) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x30 + 8) = *(undefined4 *)(pFVar6 + -0x14);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x30 + 0xc) = *(undefined4 *)(pFVar6 + -0x10);
          *(undefined8 *)(pFVar6 + -0x14) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30 + 0x10) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30 + 0x10) = *(undefined8 *)(pFVar6 + -0xc);
          *(undefined8 *)(pFVar6 + -0xc) = 0;
          *(undefined4 *)(FVar2.Data + uVar7 * 0x30 + 0x18) = *(undefined4 *)(pFVar6 + -4);
          *(undefined4 *)(FVar2.Data + uVar7 * 0x30 + 0x1c) = *(undefined4 *)pFVar6;
          *(undefined8 *)(pFVar6 + -4) = 0;
          *(undefined8 *)(FVar2.Data + uVar7 * 0x30 + 0x20) = *(undefined8 *)(pFVar6 + 4);
          FVar2.Data[uVar7 * 0x30 + 0x28] = pFVar6[0xc];
          FVar2.Data[uVar7 * 0x30 + 0x29] = pFVar6[0xd];
          uVar9 = uVar9 - 1;
          pFVar6 = pFVar6 + 0x30;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar9 != 0);
      }
    }
    DestructRange(this,uVar10,uVar4);
    pFVar6 = (this->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar11;
  return;
}

// Reallocate @ 142b10110

void __thiscall
TRingBuffer<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,TSizedDefaultAllocator<32>_>
::Reallocate(void *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ForAnyElementType local_res8;
  uint local_res10;
  
  puVar9 = *(undefined8 **)this;
  local_res10 = *(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0xc);
  uVar12 = *(int *)((longlong)this + 8) + 1;
  uVar6 = NormalizeCapacity(this,param_1);
  if ((uVar6 != param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < local_res10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (local_res10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this,0,param_1,0x20,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x20,8);
    FVar4.Data = local_res8.Data;
    uVar6 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 0xc);
    uVar13 = *(uint *)((longlong)this + 8) & *(uint *)((longlong)this + 0x10);
    if (uVar6 < uVar13) {
      uVar11 = 0;
      uVar10 = (ulonglong)(uVar13 - uVar6);
      puVar9 = puVar9 + (ulonglong)uVar6 * 4;
      do {
        uVar3 = puVar9[1];
        lVar7 = uVar11 * 0x20;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        *(undefined8 *)(local_res8.Data + lVar7) = *puVar9;
        *(undefined8 *)(local_res8.Data + lVar7 + 8) = uVar3;
        uVar3 = puVar9[3];
        *(undefined8 *)(local_res8.Data + lVar7 + 0x10) = puVar9[2];
        *(undefined8 *)(local_res8.Data + lVar7 + 0x10 + 8) = uVar3;
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if ((*(int *)((longlong)this + 8) + 1U < uVar13 - uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar5)) goto code_r0x000142b10364;
    }
    else {
      uVar11 = 0;
      if (uVar6 < uVar12) {
        uVar10 = (ulonglong)(uVar12 - uVar6);
        puVar8 = puVar9 + (ulonglong)uVar6 * 4;
        do {
          uVar3 = puVar8[1];
          lVar7 = uVar11 * 0x20;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          *(undefined8 *)(local_res8.Data + lVar7) = *puVar8;
          *(undefined8 *)(local_res8.Data + lVar7 + 8) = uVar3;
          uVar3 = puVar8[3];
          *(undefined8 *)(local_res8.Data + lVar7 + 0x10) = puVar8[2];
          *(undefined8 *)(local_res8.Data + lVar7 + 0x10 + 8) = uVar3;
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
      }
      if ((*(int *)((longlong)this + 8) + 1U < uVar12 - uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar13 != 0) {
        uVar10 = (ulonglong)uVar13;
        do {
          uVar3 = puVar9[1];
          lVar7 = uVar11 * 0x20;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          pFVar1 = FVar4.Data + lVar7;
          *(undefined8 *)pFVar1 = *puVar9;
          *(undefined8 *)(pFVar1 + 8) = uVar3;
          uVar3 = puVar9[3];
          pFVar1 = FVar4.Data + lVar7 + 0x10;
          *(undefined8 *)pFVar1 = puVar9[2];
          *(undefined8 *)(pFVar1 + 8) = uVar3;
          uVar10 = uVar10 - 1;
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
      }
      if ((*(int *)((longlong)this + 8) + 1U < uVar13) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar5)) {
code_r0x000142b10364:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
    *(FScriptContainerElement **)this = local_res8.Data;
  }
  *(undefined4 *)((longlong)this + 0xc) = 0;
  *(uint *)((longlong)this + 8) = param_1 - 1;
  *(uint *)((longlong)this + 0x10) = local_res10;
  return;
}

// Reallocate @ 142b103e0

void __thiscall
TRingBuffer<FName,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<FName,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType local_res8;
  uint local_res10;
  
  pFVar8 = (this->AllocatorInstance).Data;
  local_res10 = this->AfterBack - this->Front;
  uVar12 = this->IndexMask + 1;
  uVar5 = NormalizeCapacity(this,param_1);
  if ((uVar5 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 < local_res10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == 0) || (local_res10 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,8,4);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_res8,0,param_1,8,4);
    FVar3.Data = local_res8.Data;
    uVar10 = this->IndexMask & this->Front;
    uVar5 = this->IndexMask & this->AfterBack;
    if (uVar10 < uVar5) {
      pFVar8 = pFVar8 + (ulonglong)uVar10 * 8;
      uVar11 = (ulonglong)(uVar5 - uVar10);
      uVar7 = 0;
      do {
        uVar1 = *(undefined8 *)pFVar8;
        pFVar8 = pFVar8 + 8;
        *(undefined8 *)(local_res8.Data + uVar7 * 8) = uVar1;
        uVar11 = uVar11 - 1;
        uVar7 = (ulonglong)((int)uVar7 + 1);
      } while (uVar11 != 0);
      if ((this->IndexMask + 1 < uVar5 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) goto code_r0x000142b105e6;
    }
    else {
      uVar7 = 0;
      if (uVar10 < uVar12) {
        pFVar6 = pFVar8 + (ulonglong)uVar10 * 8;
        uVar9 = (ulonglong)(uVar12 - uVar10);
        uVar11 = uVar7;
        do {
          uVar1 = *(undefined8 *)pFVar6;
          pFVar6 = pFVar6 + 8;
          uVar7 = (ulonglong)((int)uVar11 + 1);
          *(undefined8 *)(local_res8.Data + uVar11 * 8) = uVar1;
          uVar9 = uVar9 - 1;
          uVar11 = uVar7;
        } while (uVar9 != 0);
      }
      if ((this->IndexMask + 1 < uVar12 - uVar10) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        uVar11 = (ulonglong)uVar5;
        do {
          uVar1 = *(undefined8 *)pFVar8;
          pFVar8 = pFVar8 + 8;
          *(undefined8 *)(FVar3.Data + uVar7 * 8) = uVar1;
          uVar11 = uVar11 - 1;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar11 != 0);
      }
      if ((this->IndexMask + 1 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                             ,0x37f,L""), bVar4)) {
code_r0x000142b105e6:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = local_res10;
  return;
}

// Reallocate @ 142b10660

void __thiscall
TRingBuffer<FString,TSizedDefaultAllocator<32>_>::Reallocate
          (TRingBuffer<FString,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ForAnyElementType local_res8;
  
  uVar12 = this->IndexMask + 1;
  uVar11 = this->AfterBack - this->Front;
  pFVar8 = (this->AllocatorInstance).Data;
  uVar4 = NormalizeCapacity(this,param_1);
  if ((uVar4 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NormalizeCapacity(NewCapacity) == NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x327,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 < uVar11) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewCapacity >= SrcNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                         ,0x328,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == 0) || (uVar11 == 0)) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&this->AllocatorInstance,0,param_1,0x10,8);
  }
  else {
    local_res8.Data = (FScriptContainerElement *)0x0;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              (&local_res8,0,param_1,0x10,8);
    FVar2.Data = local_res8.Data;
    uVar4 = this->IndexMask & this->Front;
    uVar13 = this->IndexMask & this->AfterBack;
    if (uVar4 < uVar13) {
      uVar10 = 0;
      uVar9 = (ulonglong)(uVar13 - uVar4);
      pFVar8 = pFVar8 + (ulonglong)uVar4 * 0x10 + 0xc;
      do {
        lVar5 = uVar10 * 0x10;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        pFVar7 = local_res8.Data + lVar5;
        *(undefined8 *)pFVar7 = 0;
        *(undefined8 *)pFVar7 = *(undefined8 *)(pFVar8 + -0xc);
        *(undefined8 *)(pFVar8 + -0xc) = 0;
        *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar8 + -4);
        *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)pFVar8;
        *(undefined8 *)(pFVar8 + -4) = 0;
        uVar9 = uVar9 - 1;
        pFVar8 = pFVar8 + 0x10;
      } while (uVar9 != 0);
    }
    else {
      uVar9 = 0;
      if (uVar4 < uVar12) {
        uVar10 = (ulonglong)(uVar12 - uVar4);
        pFVar7 = pFVar8 + (ulonglong)uVar4 * 0x10 + 0xc;
        do {
          lVar5 = uVar9 * 0x10;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          pFVar6 = local_res8.Data + lVar5;
          *(undefined8 *)pFVar6 = 0;
          *(undefined8 *)pFVar6 = *(undefined8 *)(pFVar7 + -0xc);
          *(undefined8 *)(pFVar7 + -0xc) = 0;
          *(undefined4 *)(pFVar6 + 8) = *(undefined4 *)(pFVar7 + -4);
          *(undefined4 *)(pFVar6 + 0xc) = *(undefined4 *)pFVar7;
          *(undefined8 *)(pFVar7 + -4) = 0;
          uVar10 = uVar10 - 1;
          pFVar7 = pFVar7 + 0x10;
        } while (uVar10 != 0);
      }
      DestructRange(this,uVar4,uVar12);
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar10 = (ulonglong)uVar13;
        pFVar8 = pFVar8 + 0xc;
        do {
          lVar5 = uVar9 * 0x10;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          pFVar7 = FVar2.Data + lVar5;
          *(undefined8 *)pFVar7 = 0;
          *(undefined8 *)pFVar7 = *(undefined8 *)(pFVar8 + -0xc);
          *(undefined8 *)(pFVar8 + -0xc) = 0;
          *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar8 + -4);
          *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)pFVar8;
          *(undefined8 *)(pFVar8 + -4) = 0;
          uVar10 = uVar10 - 1;
          pFVar8 = pFVar8 + 0x10;
        } while (uVar10 != 0);
      }
    }
    DestructRange(this,uVar4,uVar13);
    pFVar8 = (this->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->AllocatorInstance).Data = local_res8.Data;
  }
  this->Front = 0;
  this->IndexMask = param_1 - 1;
  this->AfterBack = uVar11;
  return;
}

// ~TRingBuffer<FName,TSizedDefaultAllocator<32>_> @ 142b7cbb0

void __thiscall
TRingBuffer<FName,TSizedDefaultAllocator<32>_>::~TRingBuffer<FName,TSizedDefaultAllocator<32>_>
          (TRingBuffer<FName,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->IndexMask + 1 < this->AfterBack - this->Front) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x37f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Front = 0;
  this->AfterBack = 0;
  Reallocate(this,0);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator[] @ 142b7e710

FName * __thiscall
TRingBuffer<FName,TSizedDefaultAllocator<32>_>::operator[]
          (TRingBuffer<FName,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)(this->AfterBack - this->Front)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\RingBuffer.h"
                       ,0x3e3,L"RingBuffer index out of bounds: %i from a RingBuffer of size %i");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FName *)((this->AllocatorInstance).Data +
                  (ulonglong)(this->Front + param_1 & this->IndexMask) * 8);
}

