// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 15

// FScriptMapHelper @ 141e86140

FScriptMapHelper * __thiscall
FScriptMapHelper::FScriptMapHelper(FScriptMapHelper *this,FMapProperty *param_1,void *param_2)

{
  EMapPropertyFlags EVar1;
  FProperty *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FScriptMapHelper *pFVar9;
  
  pFVar2 = param_1->KeyProp;
  pFVar3 = param_1->ValueProp;
  EVar1 = param_1->MapFlags;
  this->KeyProp = pFVar2;
  this->ValueProp = pFVar3;
  iVar5 = (param_1->MapLayout).SetLayout.HashNextIdOffset;
  iVar6 = (param_1->MapLayout).SetLayout.HashIndexOffset;
  iVar7 = (param_1->MapLayout).SetLayout.Size;
  (this->MapLayout).ValueOffset = (param_1->MapLayout).ValueOffset;
  (this->MapLayout).SetLayout.HashNextIdOffset = iVar5;
  (this->MapLayout).SetLayout.HashIndexOffset = iVar6;
  (this->MapLayout).SetLayout.Size = iVar7;
  (this->MapLayout).SetLayout.SparseArrayLayout = (param_1->MapLayout).SetLayout.SparseArrayLayout;
  this->MapFlags = EVar1;
  if ((pFVar2 == (FProperty *)0x0) || (pFVar3 == (FProperty *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InKeyProp && InValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1558,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FScriptMapHelper *)(*pcVar4)();
      return pFVar9;
    }
  }
  (this->field2_0x10).HeapMap = param_2;
  if ((this->KeyProp == (FProperty *)0x0) || (this->ValueProp == (FProperty *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyProp && ValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1564,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FScriptMapHelper *)(*pcVar4)();
      return pFVar9;
    }
  }
  return this;
}

// GetKeyPtr @ 141ea0c30

uchar * __thiscall
FScriptMapHelper::GetKeyPtr
          (FScriptMapHelper *this,TScriptContainerIterator<FScriptMapHelper> *param_1)

{
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uchar *puVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  uVar3 = param_1->InternalIndex;
  pTVar1 = (this->field2_0x10).FreezableMap;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    local_res10[0] = uVar3;
    bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (param_1->Container,(<lambda_1> *)local_res10);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1321,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar2)();
        return puVar5;
      }
    }
    return (uchar *)((longlong)(uVar3 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                    (pTVar1->Pairs).Elements.Data._padding_);
  }
  local_res8[0] = uVar3;
  bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (param_1->Container,(<lambda_1> *)local_res8);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1321,L"Invalid Iterator. Test Iterator before calling this method.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  uVar6 = (pTVar1->Pairs).Elements.Data._padding_;
  if ((uVar6 & 1) != 0) {
    uVar6 = (longlong)&(pTVar1->Pairs).Elements.Data._padding_ + ((longlong)uVar6 >> 0x18);
  }
  return (uchar *)((longlong)(uVar3 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar6);
}

// GetValuePtr @ 141ea3130

uchar * __thiscall
FScriptMapHelper::GetValuePtr
          (FScriptMapHelper *this,TScriptContainerIterator<FScriptMapHelper> *param_1)

{
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uchar *puVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  uVar3 = param_1->InternalIndex;
  pTVar1 = (this->field2_0x10).FreezableMap;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    local_res10[0] = uVar3;
    bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (param_1->Container,(<lambda_1> *)local_res10);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x133f,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar2)();
        return puVar5;
      }
    }
    return (uchar *)((longlong)(uVar3 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                     (longlong)(this->MapLayout).ValueOffset +
                    (pTVar1->Pairs).Elements.Data._padding_);
  }
  local_res8[0] = uVar3;
  bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (param_1->Container,(<lambda_1> *)local_res8);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x133f,L"Invalid Iterator. Test Iterator before calling this method.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  uVar6 = (pTVar1->Pairs).Elements.Data._padding_;
  if ((uVar6 & 1) != 0) {
    uVar6 = (longlong)&(pTVar1->Pairs).Elements.Data._padding_ + ((longlong)uVar6 >> 0x18);
  }
  return (uchar *)((longlong)(this->MapLayout).ValueOffset +
                  (longlong)(uVar3 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar6);
}

// DestructItems @ 1420f5e70

void __thiscall FScriptMapHelper::DestructItems(FScriptMapHelper *this,int param_1,int param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  EPropertyFlags EVar5;
  longlong lVar6;
  ulonglong uVar7;
  EPropertyFlags EVar8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x158c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Count >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x158d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  EVar5 = this->ValueProp->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData);
  EVar8 = this->KeyProp->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData);
  if ((EVar8 == CPF_None) || (EVar5 == CPF_None)) {
    uVar7 = (ulonglong)(uint)(this->MapLayout).SetLayout.Size;
    if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
      lVar6 = (longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
              (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_;
    }
    else {
      uVar4 = (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_;
      if ((uVar4 & 1) != 0) {
        uVar4 = (longlong)&(((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_ +
                ((longlong)uVar4 >> 0x18);
      }
      lVar6 = (longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar4;
    }
    if (EVar8 == CPF_None) {
      if (EVar5 == CPF_None) {
        do {
          local_res10[0] = param_1;
          bVar3 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (this,(<lambda_1> *)local_res10);
          if (bVar3) {
            pFVar1 = this->KeyProp;
            if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
              if ((pFVar1->ArrayDim < 1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((lVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*pcVar2)(pFVar1,pFVar1->Offset_Internal + lVar6);
            }
            pFVar1 = this->ValueProp;
            if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
              if ((pFVar1->ArrayDim < 1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((lVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*pcVar2)(pFVar1,pFVar1->Offset_Internal + lVar6);
            }
            param_2 = param_2 + -1;
          }
          lVar6 = lVar6 + uVar7;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
      else {
        do {
          local_res18[0] = param_1;
          bVar3 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (this,(<lambda_1> *)local_res18);
          if (bVar3) {
            pFVar1 = this->KeyProp;
            if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
              if ((pFVar1->ArrayDim < 1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((lVar6 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (*pcVar2)(pFVar1,pFVar1->Offset_Internal + lVar6);
            }
            param_2 = param_2 + -1;
          }
          lVar6 = lVar6 + uVar7;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
    }
    else {
      do {
        local_res20[0] = param_1;
        bVar3 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (this,(<lambda_1> *)local_res20);
        if (bVar3) {
          pFVar1 = this->ValueProp;
          if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
            if ((pFVar1->ArrayDim < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((lVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(pFVar1,pFVar1->Offset_Internal + lVar6);
          }
          param_2 = param_2 + -1;
        }
        lVar6 = lVar6 + uVar7;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
  }
  return;
}

// GetKeyPtr @ 1420fa9b0

uchar * __thiscall FScriptMapHelper::GetKeyPtr(FScriptMapHelper *this,int param_1)

{
  int iVar1;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  pTVar2 = (this->field2_0x10).FreezableMap;
  iVar1 = (pTVar2->Pairs).Elements.Data.ArrayNum;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    if (iVar1 != *(int *)&(pTVar2->Pairs).field_0x34) {
      local_res8[0] = param_1;
      bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this,(<lambda_1> *)local_res8);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x12dd,
                           L"Invalid internal index. Use IsValidIndex before calling this method.");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uchar *)(*pcVar3)();
          return puVar5;
        }
      }
      return (uchar *)((longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                      (pTVar2->Pairs).Elements.Data._padding_);
    }
  }
  else if (iVar1 != (pTVar2->Pairs).Elements.NumFreeIndices) {
    local_res10[0] = param_1;
    bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (this,(<lambda_1> *)local_res10);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(InternalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x12dd,
                         L"Invalid internal index. Use IsValidIndex before calling this method.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar3)();
        return puVar5;
      }
    }
    uVar6 = (pTVar2->Pairs).Elements.Data._padding_;
    if ((uVar6 & 1) != 0) {
      uVar6 = (longlong)&(pTVar2->Pairs).Elements.Data._padding_ + ((longlong)uVar6 >> 0x18);
    }
    return (uchar *)((longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                    uVar6);
  }
  if (param_1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x12d9,
                       L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar3)();
      return puVar5;
    }
  }
  return (uchar *)0x0;
}

// operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_> @ 142124bc0

void __thiscall
`FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::
operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
          (void *this,
          TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
          *param_1)

{
  TScriptBitArray<TMemoryImageAllocator<0>,void> *pTVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)((longlong)this + 8);
  if ((-1 < (int)uVar8) && ((int)uVar8 < (param_1->Pairs).Elements.AllocationFlags.NumBits)) {
    FVar6 = (param_1->Pairs).Elements.AllocationFlags.AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForElementType<unsigned_int>)
              ((longlong)&(param_1->Pairs).Elements.AllocationFlags.AllocatorInstance.field_0x0 +
              ((longlong)FVar6 >> 0x18));
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) goto LAB_142124c49;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Map->IsValidIndex(InternalIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x13e6,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_142124c49:
  if (((param_1->Pairs).Elements.Data.ArrayMax <
       *(int *)((longlong)this + 0xc) + *(int *)((longlong)this + 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex + Count <= Map->Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x13e9,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FScriptMapHelper::DestructItems
            (*(FScriptMapHelper **)this,*(int *)((longlong)this + 8),*(int *)((longlong)this + 0xc))
  ;
  iVar9 = *(int *)((longlong)this + 0xc);
  iVar7 = *(int *)((longlong)this + 8);
  if (iVar9 != 0) {
    bVar3 = (byte)iVar7 & 0x1f;
    uVar8 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    do {
      if ((-1 < iVar7) && (iVar7 < (param_1->Pairs).Elements.AllocationFlags.NumBits)) {
        pTVar1 = &(param_1->Pairs).Elements.AllocationFlags;
        if (((param_1->Pairs).Elements.AllocationFlags.NumBits <= iVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar6 = pTVar1->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForElementType<unsigned_int>)
                  ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        iVar5 = iVar7;
        if (iVar7 < 0) {
          iVar5 = iVar7 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar6 + (longlong)(iVar5 >> 5) * 4) & uVar8) != 0) {
          TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
          ::RemoveAt(&param_1->Pairs,iVar7,(FScriptSparseSetLayout *)(*(longlong *)this + 0x1c));
          iVar9 = iVar9 + -1;
        }
      }
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
    } while (iVar9 != 0);
  }
  return;
}

// operator()<FScriptMap> @ 142124d50

void __thiscall
`FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::operator()<FScriptMap>
          (void *this,FScriptMap *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)((longlong)this + 8);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&param_1->field_0x28)) {
    puVar6 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_142124dcd;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Map->IsValidIndex(InternalIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x13e6,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142124dcd:
  if ((*(int *)&param_1->field_0xc < *(int *)((longlong)this + 0xc) + *(int *)((longlong)this + 8))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("InternalIndex + Count <= Map->Max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x13e9,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FScriptMapHelper::DestructItems
            (*(FScriptMapHelper **)this,*(int *)((longlong)this + 8),*(int *)((longlong)this + 0xc))
  ;
  iVar8 = *(int *)((longlong)this + 0xc);
  iVar5 = *(int *)((longlong)this + 8);
  if (iVar8 != 0) {
    bVar2 = (byte)iVar5 & 0x1f;
    uVar7 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    do {
      if ((-1 < iVar5) && (iVar5 < *(int *)&param_1->field_0x28)) {
        if ((*(int *)&param_1->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar6 = &param_1->field_0x10;
        if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_1->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if ((*(uint *)(puVar6 + (longlong)(iVar4 >> 5) * 4) & uVar7) != 0) {
          TScriptSparseSet<FDefaultSetAllocator>::RemoveAt
                    ((TScriptSparseSet<FDefaultSetAllocator> *)param_1,iVar5,
                     (FScriptSparseSetLayout *)(*(longlong *)this + 0x1c));
          iVar8 = iVar8 + -1;
        }
      }
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    } while (iVar8 != 0);
  }
  return;
}

// ConstructItem @ 14216ccc0

void __thiscall FScriptMapHelper::ConstructItem(FScriptMapHelper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  void *_Dst;
  undefined4 uVar5;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  bVar2 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (this,(<lambda_1> *)local_res10);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(InternalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x156f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = (int)this->KeyProp->PropertyFlags & CPF_ZeroConstructor;
  uVar4 = (int)this->ValueProp->PropertyFlags & CPF_ZeroConstructor;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    _Dst = (void *)((longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                   (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_);
  }
  else {
    uVar3 = (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_;
    if ((uVar3 & 1) != 0) {
      uVar3 = (longlong)&(((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_ +
              ((longlong)uVar3 >> 0x18);
    }
    _Dst = (void *)((longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar3
                   );
  }
  if (((uVar5 == CPF_None) && (uVar4 == CPF_None)) ||
     (memset(_Dst,0,(longlong)(this->MapLayout).SetLayout.Size), uVar5 == CPF_None)) {
    FProperty::InitializeValue_InContainer(this->KeyProp,_Dst);
  }
  if (uVar4 == CPF_None) {
    FProperty::InitializeValue_InContainer(this->ValueProp,_Dst);
  }
  return;
}

// EmptyValues @ 142175bc0

void __thiscall FScriptMapHelper::EmptyValues(FScriptMapHelper *this,int param_1)

{
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar1;
  int iVar2;
  <lambda_1> local_18;
  
  pTVar1 = (this->field2_0x10).FreezableMap;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    iVar2 = *(int *)&(pTVar1->Pairs).field_0x34;
  }
  else {
    iVar2 = (pTVar1->Pairs).Elements.NumFreeIndices;
  }
  iVar2 = (pTVar1->Pairs).Elements.Data.ArrayNum - iVar2;
  if (iVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
  }
  else {
    DestructItems(this,0,iVar2);
  }
  local_18.__this = this;
  local_18.Slack = param_1;
  WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>(this,&local_18);
  return;
}

// FindMapPairIndexFromHash @ 142177aa0

int __thiscall FScriptMapHelper::FindMapPairIndexFromHash(FScriptMapHelper *this,void *param_1)

{
  FProperty **ppFVar1;
  int iVar2;
  FProperty *local_res8;
  FProperty *local_res10 [3];
  code *local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_res8 = this->KeyProp;
  local_10 = &local_res8;
  local_20 = local_res10;
  local_res10[0] = local_res8;
  if ((this->MapFlags & UsesMemoryImageAllocator) != None) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
               ::Call;
    ppFVar1 = (FProperty **)local_20;
    local_20 = local_10;
    local_10 = ppFVar1;
    iVar2 = TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
            ::FindPairIndex((this->field2_0x10).FreezableMap,param_1,&this->MapLayout,
                            (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_18,
                            (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_28);
    return iVar2;
  }
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindMapPairIndexFromHash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
  iVar2 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex
                    ((TScriptMap<FDefaultSetAllocator,FScriptMap> *)(this->field2_0x10).FreezableMap
                     ,param_1,&this->MapLayout,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_28,
                     (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_18);
  return iVar2;
}

// FindMapPairPtrWithKey @ 142177b50

uchar * __thiscall
FScriptMapHelper::FindMapPairPtrWithKey(FScriptMapHelper *this,void *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  int local_res18 [4];
  FScriptMapHelper *local_28;
  void *local_20;
  int *local_18;
  
  local_18 = local_res18;
  local_res18[0] = param_2;
  local_28 = this;
  local_20 = param_1;
  iVar1 = WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                    (this,(<lambda_1> *)&local_28);
  if (iVar1 < 0) {
    return (uchar *)0x0;
  }
  if ((this->MapFlags & UsesMemoryImageAllocator) != None) {
    uVar2 = (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_;
    if ((uVar2 & 1) != 0) {
      uVar2 = (longlong)&(((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_ +
              ((longlong)uVar2 >> 0x18);
    }
    return (uchar *)((longlong)(iVar1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar2)
    ;
  }
  return (uchar *)((longlong)(iVar1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                  (((this->field2_0x10).FreezableMap)->Pairs).Elements.Data._padding_);
}

// FindOrAdd @ 142177fa0

void * __thiscall FScriptMapHelper::FindOrAdd(FScriptMapHelper *this,void *param_1)

{
  int iVar1;
  TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
  *this_00;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  FProperty *local_res8;
  FProperty *local_res10;
  code *local_78;
  FProperty **local_70;
  code *local_68;
  FProperty **local_60;
  code *local_58;
  FProperty **local_50;
  FProperty *local_48;
  FProperty *local_40;
  void *local_38;
  FProperty *local_30;
  FProperty *local_28;
  void *local_20;
  
  local_res8 = this->KeyProp;
  local_40 = this->ValueProp;
  this_00 = &((this->field2_0x10).FreezableMap)->Pairs;
  local_res10 = local_res8;
  if ((this->MapFlags & UsesMemoryImageAllocator) != None) {
    local_30 = (FProperty *)
               UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_3>,void,void_*,void_*>
               ::Call;
    local_28 = (FProperty *)&local_48;
    local_70 = &local_30;
    iVar1 = (this->MapLayout).ValueOffset;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>::FindOrAdd'::__l2::<lambda_1>,void,void_*>
               ::Call;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
               ::Call;
    local_60 = &local_res8;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
    local_50 = &local_res10;
    local_20 = (void *)CONCAT44(local_20._4_4_,iVar1);
    local_48 = local_res8;
    local_38 = param_1;
    iVar2 = TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
            ::FindOrAdd(this_00,param_1,&(this->MapLayout).SetLayout,
                        (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_58,
                        (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_68,
                        (TFunctionRef<void___cdecl(void_*)> *)&local_78);
    uVar4 = (this_00->Elements).Data._padding_;
    if ((uVar4 & 1) != 0) {
      uVar4 = (longlong)&(this_00->Elements).Data._padding_ + ((longlong)uVar4 >> 0x18);
    }
    return (void *)((longlong)(iVar2 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar4 +
                   (longlong)iVar1);
  }
  local_50 = &local_30;
  local_70 = &local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>,void,void_*,void_*>
             ::Call;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_60 = &local_res8;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
             ::Call;
  local_30 = local_res8;
  local_28 = local_40;
  local_20 = param_1;
  pvVar3 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindOrAdd
                     ((TScriptMap<FDefaultSetAllocator,FScriptMap> *)this_00,param_1,
                      &this->MapLayout,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_78
                      ,(TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_68,
                      (TFunctionRef<void___cdecl(void_*,void_*)> *)&local_58);
  return pvVar3;
}

// GetPairPtr @ 14217d0c0

uchar * __thiscall FScriptMapHelper::GetPairPtr(FScriptMapHelper *this,int param_1)

{
  int iVar1;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  pTVar2 = (this->field2_0x10).FreezableMap;
  iVar1 = (pTVar2->Pairs).Elements.Data.ArrayNum;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    if (iVar1 != *(int *)&(pTVar2->Pairs).field_0x34) {
      local_res8[0] = param_1;
      bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (this,(<lambda_1> *)local_res8);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x12b9,
                           L"Invalid internal index. Use IsValidIndex before calling this method.");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          puVar5 = (uchar *)(*pcVar3)();
          return puVar5;
        }
      }
      return (uchar *)((longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                      (pTVar2->Pairs).Elements.Data._padding_);
    }
  }
  else if (iVar1 != (pTVar2->Pairs).Elements.NumFreeIndices) {
    local_res10[0] = param_1;
    bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (this,(<lambda_1> *)local_res10);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(InternalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x12b9,
                         L"Invalid internal index. Use IsValidIndex before calling this method.");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar3)();
        return puVar5;
      }
    }
    uVar6 = (pTVar2->Pairs).Elements.Data._padding_;
    if ((uVar6 & 1) != 0) {
      uVar6 = (longlong)&(pTVar2->Pairs).Elements.Data._padding_ + ((longlong)uVar6 >> 0x18);
    }
    return (uchar *)((longlong)(param_1 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                    uVar6);
  }
  if (param_1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x12b5,
                       L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar3)();
      return puVar5;
    }
  }
  return (uchar *)0x0;
}

// GetPairPtr @ 14217d1e0

uchar * __thiscall
FScriptMapHelper::GetPairPtr
          (FScriptMapHelper *this,TScriptContainerIterator<FScriptMapHelper> *param_1)

{
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uchar *puVar5;
  ulonglong uVar6;
  int local_res8 [2];
  int local_res10 [2];
  
  uVar3 = param_1->InternalIndex;
  pTVar1 = (this->field2_0x10).FreezableMap;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    local_res10[0] = uVar3;
    bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (param_1->Container,(<lambda_1> *)local_res10);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1303,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        puVar5 = (uchar *)(*pcVar2)();
        return puVar5;
      }
    }
    return (uchar *)((longlong)(uVar3 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) +
                    (pTVar1->Pairs).Elements.Data._padding_);
  }
  local_res8[0] = uVar3;
  bVar4 = WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    (param_1->Container,(<lambda_1> *)local_res8);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Iterator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1303,L"Invalid Iterator. Test Iterator before calling this method.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  uVar6 = (pTVar1->Pairs).Elements.Data._padding_;
  if ((uVar6 & 1) != 0) {
    uVar6 = (longlong)&(pTVar1->Pairs).Elements.Data._padding_ + ((longlong)uVar6 >> 0x18);
  }
  return (uchar *)((longlong)(uVar3 * (this->MapLayout).SetLayout.SparseArrayLayout.Size) + uVar6);
}

// Rehash @ 142188950

void __thiscall FScriptMapHelper::Rehash(FScriptMapHelper *this)

{
  FScriptSparseSetLayout *pFVar1;
  FScriptMapHelper *local_res8 [4];
  code *local_18;
  FScriptMapHelper **local_10;
  
  pFVar1 = &(this->MapLayout).SetLayout;
  local_res8[0] = this;
  if ((this->MapFlags & UsesMemoryImageAllocator) != None) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
    local_10 = local_res8;
    TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
    ::Rehash((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
              *)(this->field2_0x10).HeapMap,pFVar1,
             (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_18);
    return;
  }
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
             ::Call;
  local_10 = local_res8;
  TScriptSparseSet<FDefaultSetAllocator>::Rehash
            ((TScriptSparseSet<FDefaultSetAllocator> *)(this->field2_0x10).HeapMap,pFVar1,
             (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_18);
  return;
}

