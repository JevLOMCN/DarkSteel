// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// operator== @ 141bed290

bool __thiscall TRange<float>::operator==(TRange<float> *this,TRange<float> *param_1)

{
  uchar uVar1;
  bool bVar2;
  
  bVar2 = IsEmpty(this);
  if ((bVar2) && (bVar2 = IsEmpty(param_1), bVar2)) {
    return true;
  }
  uVar1 = (this->LowerBound).Type.Value;
  if (((uVar1 == (param_1->LowerBound).Type.Value) &&
      (((uVar1 == '\x02' || ((param_1->LowerBound).Value == (this->LowerBound).Value)) &&
       (uVar1 = (this->UpperBound).Type.Value, uVar1 == (param_1->UpperBound).Type.Value)))) &&
     ((uVar1 == '\x02' || ((param_1->UpperBound).Value == (this->UpperBound).Value)))) {
    return true;
  }
  return false;
}

// Adjoins @ 141bf6a80

bool __thiscall TRange<float>::Adjoins(TRange<float> *this,TRange<float> *param_1)

{
  uchar uVar1;
  bool bVar2;
  
  bVar2 = IsEmpty(this);
  if (!bVar2) {
    bVar2 = IsEmpty(param_1);
    if (bVar2) {
      return false;
    }
    if ((((this->UpperBound).Type.Value == '\x02') || ((param_1->LowerBound).Type.Value == '\x02'))
       || ((this->UpperBound).Value != (param_1->LowerBound).Value)) {
      if ((param_1->UpperBound).Type.Value == '\x02') {
        return false;
      }
      if ((this->LowerBound).Type.Value == '\x02') {
        return false;
      }
      if ((param_1->UpperBound).Value != (this->LowerBound).Value) {
        return false;
      }
      uVar1 = (param_1->UpperBound).Type.Value;
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return false;
        }
        if ((this->LowerBound).Type.Value == '\x01') {
          return true;
        }
        return false;
      }
      uVar1 = (this->LowerBound).Type.Value;
    }
    else {
      uVar1 = (this->UpperBound).Type.Value;
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return false;
        }
        if ((param_1->LowerBound).Type.Value != '\x01') {
          return false;
        }
        return true;
      }
      uVar1 = (param_1->LowerBound).Type.Value;
    }
    if (uVar1 == '\0') {
      return true;
    }
  }
  return false;
}

// Difference @ 141bffe20

TArray<TRange<float>,TSizedDefaultAllocator<32>_> * __cdecl
TRange<float>::Difference
          (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TRange<float> *param_1,TRange<float> *param_2)

{
  uchar uVar1;
  TRangeBound<float> *pTVar2;
  TRange<float> *pTVar3;
  code *pcVar4;
  TRangeBound<float> TVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined4 local_res8;
  undefined4 local_res20;
  TRangeBound<float> local_48;
  TRangeBound<float> TStack_40;
  TRangeBound<float> local_38;
  TRangeBound<float> TStack_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar7 = Overlaps(param_1,param_2);
  if (!bVar7) {
    pTVar3 = (TRange<float> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pTVar3 <= param_1) && (param_1 < pTVar3 + __return_storage_ptr__->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    TVar5 = param_1->UpperBound;
    pTVar2 = (TRangeBound<float> *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
    *pTVar2 = param_1->LowerBound;
    pTVar2[1] = TVar5;
    return __return_storage_ptr__;
  }
  uVar1 = (param_2->LowerBound).Type.Value;
  if (uVar1 == '\0') {
    local_res8 = CONCAT31(local_res8._1_3_,1);
    TStack_30.Value = (param_2->LowerBound).Value;
    TStack_30._0_4_ = local_res8;
  }
  else if (uVar1 == '\x01') {
    TStack_30 = (TRangeBound<float>)
                ((ulonglong)CONCAT43((param_2->LowerBound).Value,local_res8._1_3_) << 8);
  }
  else {
    TStack_30 = param_2->LowerBound;
  }
  uVar1 = (param_2->UpperBound).Type.Value;
  local_38 = param_1->LowerBound;
  if (uVar1 == '\0') {
    local_res20 = CONCAT31(local_res20._1_3_,1);
    local_48.Value = (param_2->UpperBound).Value;
    local_48._0_4_ = local_res20;
  }
  else if (uVar1 == '\x01') {
    local_48 = (TRangeBound<float>)
               ((ulonglong)CONCAT43((param_2->UpperBound).Value,local_res20._1_3_) << 8);
  }
  else {
    local_48 = param_2->UpperBound;
  }
  TStack_40 = param_1->UpperBound;
  if ((local_38.Type.Value.Value != '\x02') && (TStack_30.Type.Value.Value != '\x02')) {
    if (TStack_30.Value < local_38.Value) goto LAB_141c0001d;
    if ((local_38.Type.Value.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    fVar6 = local_38.Value;
    if ((TStack_30.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    if ((fVar6 == TStack_30.Value) &&
       ((local_38.Type.Value == '\0' || (TStack_30.Type.Value == '\0')))) goto LAB_141c0001d;
  }
  pTVar2 = (TRangeBound<float> *)(__return_storage_ptr__->AllocatorInstance).Data;
  if ((pTVar2 <= &local_38) &&
     ((&local_38 < pTVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2 &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar7)))) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  pTVar2 = (TRangeBound<float> *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
  *pTVar2 = local_38;
  pTVar2[1] = TStack_30;
LAB_141c0001d:
  if ((local_48.Type.Value.Value != '\x02') && (TStack_40.Type.Value != '\x02')) {
    if ((local_48.Type.Value.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    fVar6 = local_48.Value;
    if ((TStack_40.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    if (TStack_40.Value < fVar6) {
      return __return_storage_ptr__;
    }
    if ((local_48.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    fVar6 = local_48.Value;
    if ((TStack_40.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    if (fVar6 == TStack_40.Value) {
      if (local_48.Type.Value == '\0') {
        return __return_storage_ptr__;
      }
      if (TStack_40.Type.Value == '\0') {
        return __return_storage_ptr__;
      }
    }
  }
  pTVar2 = (TRangeBound<float> *)(__return_storage_ptr__->AllocatorInstance).Data;
  if (((pTVar2 <= &local_48) &&
      (&local_48 < pTVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  iVar8 = __return_storage_ptr__->ArrayNum;
  if (iVar8 == __return_storage_ptr__->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar8 + 1;
  pTVar2 = (TRangeBound<float> *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10);
  *pTVar2 = local_48;
  pTVar2[1] = TStack_40;
  return __return_storage_ptr__;
}

// Hull @ 141c02510

TRange<float> * __cdecl
TRange<float>::Hull(TRange<float> *__return_storage_ptr__,TRange<float> *param_1,
                   TRange<float> *param_2)

{
  TRangeBound<float> *pTVar1;
  TRangeBound<float> *pTVar2;
  float fVar3;
  float fVar4;
  uchar uVar5;
  TRangeBound<float> TVar6;
  bool bVar7;
  TRangeBound<float> *pTVar8;
  TRange<float> *pTVar9;
  
  bVar7 = IsEmpty(param_1);
  if (bVar7) {
    TVar6 = param_2->UpperBound;
    __return_storage_ptr__->LowerBound = param_2->LowerBound;
    __return_storage_ptr__->UpperBound = TVar6;
    return __return_storage_ptr__;
  }
  bVar7 = IsEmpty(param_2);
  if (!bVar7) {
    uVar5 = (param_1->UpperBound).Type.Value;
    pTVar1 = &param_1->UpperBound;
    pTVar2 = &param_2->UpperBound;
    pTVar8 = pTVar1;
    if ((uVar5 != '\x02') && (pTVar8 = pTVar2, (pTVar2->Type).Value != '\x02')) {
      fVar3 = (param_2->UpperBound).Value;
      fVar4 = (param_1->UpperBound).Value;
      pTVar8 = pTVar1;
      if ((fVar4 <= fVar3) && ((pTVar8 = pTVar2, fVar3 <= fVar4 && (uVar5 == '\x01')))) {
        pTVar8 = pTVar1;
      }
    }
    uVar5 = (param_1->LowerBound).Type.Value;
    pTVar9 = param_1;
    if ((uVar5 != '\x02') && (pTVar9 = param_2, (param_2->LowerBound).Type.Value != '\x02')) {
      fVar3 = (param_2->LowerBound).Value;
      fVar4 = (param_1->LowerBound).Value;
      pTVar9 = param_1;
      if ((fVar3 <= fVar4) &&
         ((pTVar9 = param_2, fVar4 <= fVar3 && (pTVar9 = param_2, uVar5 == '\x01')))) {
        pTVar9 = param_1;
      }
    }
    __return_storage_ptr__->LowerBound = pTVar9->LowerBound;
    __return_storage_ptr__->UpperBound = *pTVar8;
    return __return_storage_ptr__;
  }
  TVar6 = param_1->UpperBound;
  __return_storage_ptr__->LowerBound = param_1->LowerBound;
  __return_storage_ptr__->UpperBound = TVar6;
  return __return_storage_ptr__;
}

// Intersection @ 141c02cc0

TRange<float> * __cdecl
TRange<float>::Intersection
          (TRange<float> *__return_storage_ptr__,TRange<float> *param_1,TRange<float> *param_2)

{
  TRangeBound<float> *pTVar1;
  TRangeBound<float> *pTVar2;
  float fVar3;
  float fVar4;
  uchar uVar5;
  TRangeBound<float> TVar6;
  bool bVar7;
  TRangeBound<float> TVar8;
  TRangeBound<float> *pTVar9;
  TRange<float> *pTVar10;
  uint local_res20;
  uint local_18;
  
  bVar7 = IsEmpty(param_1);
  if ((bVar7) || (bVar7 = IsEmpty(param_2), bVar7)) {
    local_res20 = local_res20 & 0xffffff00;
    TVar6.Value = 0.0;
    TVar6._0_4_ = local_res20;
    local_18 = local_18 & 0xffffff00;
    __return_storage_ptr__->LowerBound = TVar6;
    TVar8.Value = 0.0;
    TVar8._0_4_ = local_18;
  }
  else {
    uVar5 = (param_1->UpperBound).Type.Value;
    pTVar1 = &param_1->UpperBound;
    pTVar2 = &param_2->UpperBound;
    pTVar9 = pTVar2;
    if ((uVar5 != '\x02') && (pTVar9 = pTVar1, (pTVar2->Type).Value != '\x02')) {
      fVar3 = (param_2->UpperBound).Value;
      fVar4 = (param_1->UpperBound).Value;
      if (((fVar3 <= fVar4) && (pTVar9 = pTVar2, fVar4 <= fVar3)) && (uVar5 == '\0')) {
        pTVar9 = pTVar1;
      }
    }
    uVar5 = (param_1->LowerBound).Type.Value;
    pTVar10 = param_2;
    if ((uVar5 != '\x02') && (pTVar10 = param_1, (param_2->LowerBound).Type.Value != '\x02')) {
      fVar3 = (param_2->LowerBound).Value;
      fVar4 = (param_1->LowerBound).Value;
      if ((fVar4 <= fVar3) && ((pTVar10 = param_2, fVar3 <= fVar4 && (uVar5 == '\0')))) {
        pTVar10 = param_1;
      }
    }
    __return_storage_ptr__->LowerBound = pTVar10->LowerBound;
    TVar8 = *pTVar9;
  }
  __return_storage_ptr__->UpperBound = TVar8;
  return __return_storage_ptr__;
}

// IsEmpty @ 141c02db0

bool __thiscall TRange<int>::IsEmpty(TRange<int> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  iVar1 = (this->LowerBound).Value;
  if (iVar1 <= (this->UpperBound).Value) {
    if (((this->UpperBound).Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (iVar1 != (this->UpperBound).Value) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// IsEmpty @ 141c02e30

bool __thiscall TRange<float>::IsEmpty(TRange<float> *this)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  fVar2 = (this->LowerBound).Value;
  pfVar1 = &(this->UpperBound).Value;
  if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
    if (((this->UpperBound).Type.Value == '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      bVar4 = (bool)(*pcVar3)();
      return bVar4;
    }
    if (fVar2 != (this->UpperBound).Value) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// IsEmpty @ 141c02eb0

bool __thiscall TRange<FTimespan>::IsEmpty(TRange<FTimespan> *this)

{
  FTimespan *pFVar1;
  FTimespan *pFVar2;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    return false;
  }
  if ((this->LowerBound).Value.Ticks <= (this->UpperBound).Value.Ticks) {
    pFVar1 = TRangeBound<FTimespan>::GetValue(&this->LowerBound);
    pFVar2 = TRangeBound<FTimespan>::GetValue(&this->UpperBound);
    if (pFVar1->Ticks != pFVar2->Ticks) {
      return false;
    }
    if (((this->LowerBound).Type.Value != '\0') && ((this->UpperBound).Type.Value != '\0')) {
      return false;
    }
  }
  return true;
}

// Overlaps @ 141c08d60

bool __thiscall TRange<int>::Overlaps(TRange<int> *this,TRange<int> *param_1)

{
  int iVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  
  bVar9 = IsEmpty(this);
  if (!bVar9) {
    bVar9 = IsEmpty(param_1);
    if (!bVar9) {
      uVar2 = (this->UpperBound).Type.Value;
      if ((uVar2 == '\x02') || ((param_1->LowerBound).Type.Value == '\x02')) {
        bVar9 = true;
      }
      if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
      {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      bVar6 = true;
      bVar8 = true;
      if (bVar9 == false) {
        if (uVar2 == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar3 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar1 = (param_1->LowerBound).Value;
        if ((this->UpperBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar4 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        bVar8 = iVar1 < iVar3;
        if (bVar9) {
          bVar8 = (param_1->LowerBound).Value <= iVar4;
        }
      }
      bVar9 = true;
      if (!bVar7) {
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar3 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar1 = (param_1->UpperBound).Value;
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar4 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        if (((this->LowerBound).Type.Value != '\x01') ||
           ((param_1->UpperBound).Type.Value != '\x01')) {
          bVar6 = false;
        }
        bVar9 = iVar3 < iVar1;
        if (bVar6) {
          bVar9 = iVar4 <= (param_1->UpperBound).Value;
        }
      }
      if ((bVar8) && (bVar9)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// Overlaps @ 141c08ff0

bool __thiscall TRange<float>::Overlaps(TRange<float> *this,TRange<float> *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  uchar uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  float fVar4;
  
  bVar11 = IsEmpty(this);
  if (!bVar11) {
    bVar11 = IsEmpty(param_1);
    if (!bVar11) {
      uVar6 = (this->UpperBound).Type.Value;
      if ((uVar6 == '\x02') || ((param_1->LowerBound).Type.Value == '\x02')) {
        bVar11 = true;
      }
      if (((this->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
      {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      bVar8 = true;
      bVar10 = true;
      if (bVar11 == false) {
        if (uVar6 == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        fVar2 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        pfVar1 = &(param_1->LowerBound).Value;
        fVar3 = *pfVar1;
        fVar4 = *pfVar1;
        if ((this->UpperBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        fVar5 = (this->UpperBound).Value;
        if ((param_1->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        if (((this->UpperBound).Type.Value == '\x01') &&
           ((param_1->LowerBound).Type.Value == '\x01')) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        bVar10 = fVar4 <= fVar2 && fVar2 != fVar3;
        if (bVar11) {
          bVar10 = (param_1->LowerBound).Value <= fVar5;
        }
      }
      bVar11 = true;
      if (!bVar9) {
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        fVar2 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        fVar3 = (param_1->UpperBound).Value;
        if ((this->LowerBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        fVar4 = (this->LowerBound).Value;
        if ((param_1->UpperBound).Type.Value == '\x02') {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            uVar12 = (*pcVar7)();
            return (bool)uVar12;
          }
        }
        pfVar1 = &(param_1->UpperBound).Value;
        if (((this->LowerBound).Type.Value != '\x01') ||
           ((param_1->UpperBound).Type.Value != '\x01')) {
          bVar8 = false;
        }
        bVar11 = fVar2 < fVar3;
        if (bVar8) {
          bVar11 = fVar4 < *pfVar1 || fVar4 == *pfVar1;
        }
      }
      if ((bVar10) && (bVar11)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// Union @ 141c594e0

TArray<TRange<float>,TSizedDefaultAllocator<32>_> * __cdecl
TRange<float>::Union
          (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TRange<float> *param_1,TRange<float> *param_2)

{
  TRangeBound<float> *pTVar1;
  TRangeBound<float> *pTVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  uchar uVar6;
  code *pcVar7;
  TRangeBound<float> TVar8;
  bool bVar9;
  int iVar10;
  TArray<TRange<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  TRangeBound<float> *pTVar12;
  TRange<float> *pTVar13;
  TRangeBound<float> local_18;
  TRangeBound<float> TStack_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar9 = Overlaps(param_1,param_2);
  if ((bVar9) || (bVar9 = Adjoins(param_1,param_2), bVar9)) {
    uVar6 = (param_1->UpperBound).Type.Value;
    pTVar2 = &param_1->UpperBound;
    pTVar1 = &param_2->UpperBound;
    pTVar12 = pTVar2;
    if ((uVar6 != '\x02') && (pTVar12 = pTVar1, (pTVar1->Type).Value != '\x02')) {
      fVar4 = (param_2->UpperBound).Value;
      fVar5 = (param_1->UpperBound).Value;
      pTVar12 = pTVar2;
      if (((fVar5 <= fVar4) && (pTVar12 = pTVar1, fVar4 <= fVar5)) && (uVar6 == '\x01')) {
        pTVar12 = pTVar2;
      }
    }
    uVar6 = (param_1->LowerBound).Type.Value;
    pTVar13 = param_1;
    if ((uVar6 != '\x02') && (pTVar13 = param_2, (param_2->LowerBound).Type.Value != '\x02')) {
      fVar4 = (param_2->LowerBound).Value;
      fVar5 = (param_1->LowerBound).Value;
      pTVar13 = param_1;
      if ((fVar4 <= fVar5) &&
         ((pTVar13 = param_2, fVar5 <= fVar4 && (pTVar13 = param_2, uVar6 == '\x01')))) {
        pTVar13 = param_1;
      }
    }
    local_18 = pTVar13->LowerBound;
    TStack_10 = *pTVar12;
    pTVar2 = (TRangeBound<float> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pTVar2 <= &local_18) &&
        (&local_18 < pTVar2 + (longlong)__return_storage_ptr__->ArrayMax * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar11;
    }
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == __return_storage_ptr__->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
  }
  else {
    bVar9 = IsEmpty(param_1);
    if (!bVar9) {
      pTVar13 = (TRange<float> *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pTVar13 <= param_1) && (param_1 < pTVar13 + __return_storage_ptr__->ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar11;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      TVar8 = param_1->UpperBound;
      pTVar2 = (TRangeBound<float> *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10);
      *pTVar2 = param_1->LowerBound;
      pTVar2[1] = TVar8;
    }
    bVar9 = IsEmpty(param_2);
    if (bVar9) {
      return __return_storage_ptr__;
    }
    pTVar13 = (TRange<float> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pTVar13 <= param_2) && (param_2 < pTVar13 + __return_storage_ptr__->ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TArray<TRange<float>,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar11;
    }
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == __return_storage_ptr__->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
    local_18.Type.Value = (param_2->LowerBound).Type.Value;
    local_18._1_3_ = *(undefined3 *)&(param_2->LowerBound).field_0x1;
    local_18.Value = (param_2->LowerBound).Value;
    TStack_10._0_4_ = *(undefined4 *)&param_2->UpperBound;
    TStack_10.Value = (param_2->UpperBound).Value;
  }
  pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(undefined4 *)pFVar3 = local_18._0_4_;
  *(float *)(pFVar3 + 4) = local_18.Value;
  *(undefined4 *)(pFVar3 + 8) = TStack_10._0_4_;
  *(float *)(pFVar3 + 0xc) = TStack_10.Value;
  return __return_storage_ptr__;
}

