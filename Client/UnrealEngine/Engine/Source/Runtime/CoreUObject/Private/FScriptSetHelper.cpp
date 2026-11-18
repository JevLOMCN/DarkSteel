// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// AddElement @ 141f6d160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FScriptSetHelper::AddElement(FScriptSetHelper *this,void *param_1)

{
  FScriptSparseSetLayout *pFVar1;
  undefined1 auStackY_d8 [32];
  FProperty *local_98;
  FProperty *local_90;
  FProperty *local_88;
  code *local_80;
  FProperty **local_78;
  code *local_70;
  FProperty **local_68;
  code *local_60;
  FProperty **local_58;
  code *local_50;
  FProperty **local_48;
  FProperty *local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98 = this->ElementProp;
  pFVar1 = &this->SetLayout;
  local_30._0_4_ = pFVar1->HashNextIdOffset;
  local_30._4_4_ = pFVar1->HashIndexOffset;
  uStack_28._0_4_ = (this->SetLayout).Size;
  uStack_28._4_4_ = (this->SetLayout).SparseArrayLayout.Alignment;
  local_78 = &local_98;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_4>,void,void_*>::Call;
  local_20 = (this->SetLayout).SparseArrayLayout.Size;
  local_68 = &local_40;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_3>,void,void_*>::Call;
  local_58 = &local_90;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
  local_48 = &local_88;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::AddElement'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_90 = local_98;
  local_88 = local_98;
  local_40 = local_98;
  local_38 = param_1;
  TScriptSparseSet<FDefaultSetAllocator>::Add
            (this->Set,param_1,pFVar1,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_50,
             (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_60,
             (TFunctionRef<void___cdecl(void_*)> *)&local_70,
             (TFunctionRef<void___cdecl(void_*)> *)&local_80);
  return;
}

// FindElementIndex @ 141f7bc90

int __thiscall FScriptSetHelper::FindElementIndex(FScriptSetHelper *this,void *param_1,int param_2)

{
  uint uVar1;
  FProperty *pFVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  
  uVar1 = (this->Set->Elements).Data.ArrayNum;
  if (uVar1 != 0) {
    uVar11 = 0;
    if (param_2 < (int)uVar1) {
      uVar11 = param_2;
    }
    if (((int)uVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexHint >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x17ad,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    pFVar2 = this->ElementProp;
    uVar10 = uVar11;
    do {
      pTVar3 = this->Set;
      if ((-1 < (int)uVar10) && ((int)uVar10 < (pTVar3->Elements).AllocationFlags.NumBits)) {
        if (((pTVar3->Elements).AllocationFlags.NumBits <= (int)uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar12 = FVar4;
        }
        uVar9 = uVar10;
        if ((int)uVar10 < 0) {
          uVar9 = uVar10 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar12 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar10 & 0x1f) & 1)
             != 0) &&
           (cVar7 = (**(code **)(pFVar2->_padding_ + 0xb8))
                              (pFVar2,param_1,
                               (longlong)(int)(uVar10 * (this->SetLayout).SparseArrayLayout.Size) +
                               (this->Set->Elements).Data._padding_,0), cVar7 != '\0')) {
          return uVar10;
        }
      }
      uVar9 = uVar10 + 1;
      uVar10 = 0;
      if (uVar9 != uVar1) {
        uVar10 = uVar9;
      }
    } while (uVar10 != uVar11);
  }
  return -1;
}

// DestructItems @ 1420f62b0

void __thiscall FScriptSetHelper::DestructItems(FScriptSetHelper *this,int param_1,int param_2)

{
  uint uVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  FProperty *pFVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  longlong lVar11;
  
  if ((param_1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1857,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1858,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  if ((this->ElementProp->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) {
    uVar1 = (this->SetLayout).Size;
    lVar11 = (longlong)(param_1 * (this->SetLayout).SparseArrayLayout.Size) +
             (this->Set->Elements).Data._padding_;
    bVar6 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar6 | 1U >> 0x20 - bVar6;
    do {
      pTVar2 = this->Set;
      if ((-1 < param_1) && (param_1 < (pTVar2->Elements).AllocationFlags.NumBits)) {
        if (((pTVar2->Elements).AllocationFlags.NumBits <= param_1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar3;
        }
        iVar8 = param_1;
        if (param_1 < 0) {
          iVar8 = param_1 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)(iVar8 >> 5) * 4) & uVar9) != 0) {
          pFVar4 = this->ElementProp;
          if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            pcVar5 = *(code **)(pFVar4->_padding_ + 0x138);
            if ((pFVar4->ArrayDim < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((lVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (*pcVar5)(pFVar4,pFVar4->Offset_Internal + lVar11);
          }
          param_2 = param_2 + -1;
        }
      }
      lVar11 = lVar11 + (ulonglong)uVar1;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

// GetElementPtr @ 1420fa640

uchar * __thiscall
FScriptSetHelper::GetElementPtr
          (FScriptSetHelper *this,TScriptContainerIterator<FScriptSetHelper> *param_1)

{
  uint uVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  ForElementType<unsigned_int> FVar6;
  
  uVar1 = param_1->InternalIndex;
  pTVar2 = param_1->Container->Set;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (pTVar2->Elements).AllocationFlags.NumBits)) {
    FVar6 = (pTVar2->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&(pTVar2->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_1420fa6b7;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Iterator",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar3)();
    return puVar5;
  }
LAB_1420fa6b7:
  return (uchar *)((longlong)((this->SetLayout).SparseArrayLayout.Size * param_1->InternalIndex) +
                  (this->Set->Elements).Data._padding_);
}

// AddDefaultValue_Invalid_NeedsRehash @ 1421662c0

int __thiscall FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash(FScriptSetHelper *this)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  ForElementType<unsigned_int> FVar6;
  
  uVar4 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
          ::AddUninitialized(&this->Set->Elements,&(this->SetLayout).SparseArrayLayout);
  pTVar1 = this->Set;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (pTVar1->Elements).AllocationFlags.NumBits)) {
    FVar6 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) goto LAB_142166338;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(InternalIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x1841,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
LAB_142166338:
  _Dst = (void *)((longlong)(int)(uVar4 * (this->SetLayout).SparseArrayLayout.Size) +
                 (this->Set->Elements).Data._padding_);
  if (((uint)(int)this->ElementProp->PropertyFlags >> 9 & 1) != 0) {
    memset(_Dst,0,(longlong)(this->SetLayout).Size);
    return uVar4;
  }
  FProperty::InitializeValue_InContainer(this->ElementProp,_Dst);
  return uVar4;
}

// FindInternalIndex @ 142177970

/* WARNING: Removing unreachable block (ram,0x0001421779f4) */

int __thiscall FScriptSetHelper::FindInternalIndex(FScriptSetHelper *this,int param_1)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<unsigned_int> FVar9;
  
  if (-1 < param_1) {
    pTVar1 = this->Set;
    iVar4 = (pTVar1->Elements).Data.ArrayNum;
    iVar6 = iVar4 - (pTVar1->Elements).NumFreeIndices;
    if (param_1 < iVar6) {
      if (iVar6 == iVar4) {
        if (param_1 < (pTVar1->Elements).AllocationFlags.NumBits) {
          FVar9 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          if (FVar9 == (ForElementType<unsigned_int>)0x0) {
            FVar9 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
          }
          if ((*(uint *)((longlong)FVar9 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU)
              & 1) != 0) {
            return param_1;
          }
        }
        return -1;
      }
      uVar7 = 0;
      if (0 < iVar4) {
        do {
          pTVar1 = this->Set;
          if ((-1 < (int)uVar7) && ((int)uVar7 < (pTVar1->Elements).AllocationFlags.NumBits)) {
            if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar7) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x8c4,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar4 = (*pcVar2)();
              return iVar4;
            }
            FVar9 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
            if (FVar9 != (ForElementType<unsigned_int>)0x0) {
              FVar8 = FVar9;
            }
            uVar5 = uVar7;
            if ((int)uVar7 < 0) {
              uVar5 = uVar7 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar7 & 0x1f) & 1)
                != 0) {
              if (param_1 == 0) {
                return uVar7;
              }
              param_1 = param_1 + -1;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar4);
      }
    }
  }
  return -1;
}

// Rehash @ 1421889c0

void __thiscall FScriptSetHelper::Rehash(FScriptSetHelper *this)

{
  FScriptSetHelper *local_res8 [4];
  code *local_18;
  FScriptSetHelper **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_res8[0] = this;
  TScriptSparseSet<FDefaultSetAllocator>::Rehash
            (this->Set,&this->SetLayout,
             (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_18);
  return;
}

// RemoveAt @ 142188c00

void __thiscall FScriptSetHelper::RemoveAt(FScriptSetHelper *this,int param_1,int param_2)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  
  pTVar1 = this->Set;
  if ((-1 < param_1) && (param_1 < (pTVar1->Elements).AllocationFlags.NumBits)) {
    FVar8 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar8 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1)
        != 0) goto LAB_142188c6e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(InternalIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x172e,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_142188c6e:
  if (((this->Set->Elements).Data.ArrayMax < param_1 + param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex + Count <= Set->Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1731,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DestructItems(this,param_1,param_2);
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar7 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    do {
      pTVar1 = this->Set;
      if ((-1 < param_1) && (param_1 < (pTVar1->Elements).AllocationFlags.NumBits)) {
        if (((pTVar1->Elements).AllocationFlags.NumBits <= param_1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar8 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar6 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FVar6 = FVar8;
        }
        iVar5 = param_1;
        if (param_1 < 0) {
          iVar5 = param_1 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar6 + (longlong)(iVar5 >> 5) * 4) & uVar7) != 0) {
          TScriptSparseSet<FDefaultSetAllocator>::RemoveAt(this->Set,param_1,&this->SetLayout);
          param_2 = param_2 + -1;
        }
      }
      param_1 = param_1 + 1;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    } while (param_2 != 0);
  }
  return;
}

// FScriptSetHelper @ 142258680

FScriptSetHelper * __thiscall
FScriptSetHelper::FScriptSetHelper(FScriptSetHelper *this,FSetProperty *param_1,void *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  FScriptSetHelper *pFVar7;
  
  pFVar1 = param_1->ElementProp;
  this->ElementProp = pFVar1;
  this->Set = param_2;
  iVar3 = (param_1->SetLayout).HashIndexOffset;
  iVar4 = (param_1->SetLayout).Size;
  iVar5 = (param_1->SetLayout).SparseArrayLayout.Alignment;
  (this->SetLayout).HashNextIdOffset = (param_1->SetLayout).HashNextIdOffset;
  (this->SetLayout).HashIndexOffset = iVar3;
  (this->SetLayout).Size = iVar4;
  (this->SetLayout).SparseArrayLayout.Alignment = iVar5;
  (this->SetLayout).SparseArrayLayout.Size = (param_1->SetLayout).SparseArrayLayout.Size;
  if (pFVar1 == (FProperty *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FScriptSetHelper *)(*pcVar2)();
      return pFVar7;
    }
  }
  return this;
}

