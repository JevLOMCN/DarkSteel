// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 11

// FStructTracker @ 141f66690

FStructTracker * __thiscall
FStructTracker::FStructTracker(FStructTracker *this,TFunction<UStruct_*___cdecl(void)> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  (this->DebugStructTypeNamesList).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->DebugStructTypeNamesList).ArrayNum = 0;
  (this->DebugStructTypeNamesList).ArrayMax = 0x40;
  *(undefined8 *)&(this->StructTypeToIndexSet).Elements = 0;
  *(undefined8 *)&(this->StructTypeToIndexSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructTypeToIndexSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x34 = 0;
  (this->StructTypeToIndexSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructTypeToIndexSet).HashSize = 0;
  (this->StructTypesList).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0;
  (this->StructTypesList).ArrayNum = 0;
  *(undefined8 *)&(this->StructTypesList).ArrayMax = 0x40;
  this->bIsSerializable = 1;
  lVar2 = *(longlong *)param_1;
  *(longlong *)&this->BaseStructGetter = lVar2;
  *(undefined8 *)&(this->BaseStructGetter).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,&(this->BaseStructGetter).field_0x10);
  }
  *(undefined8 *)&this->TypeVerification = 0;
  *(undefined8 *)&(this->TypeVerification).field_0x28 = 0;
  *(undefined ***)&(this->TypeVerification).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_5_>,0,0>::_vftable_;
  puVar1 = &(this->TypeVerification).field_0x18;
  *(FStructTracker **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->TypeVerification =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FStructTracker::FStructTracker'::__l1::<lambda_5_>,bool,UStruct_const_*>
         ::Call;
  }
  return this;
}

// FStructTracker @ 141f667a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStructTracker * __thiscall
FStructTracker::FStructTracker
          (FStructTracker *this,UStruct *param_1,TFunction<bool___cdecl(UStruct_const_*)> *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  code *local_88;
  undefined **local_78;
  FStructTracker *local_70;
  undefined ***local_60;
  longlong local_58;
  undefined **local_48 [3];
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (this->DebugStructTypeNamesList).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->DebugStructTypeNamesList).ArrayNum = 0;
  (this->DebugStructTypeNamesList).ArrayMax = 0x40;
  *(undefined8 *)&(this->StructTypeToIndexSet).Elements = 0;
  *(undefined8 *)&(this->StructTypeToIndexSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructTypeToIndexSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructTypeToIndexSet).Elements.field_0x34 = 0;
  (this->StructTypeToIndexSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructTypeToIndexSet).HashSize = 0;
  (this->StructTypesList).AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0;
  (this->StructTypesList).ArrayNum = 0;
  *(undefined8 *)&(this->StructTypesList).ArrayMax = 0x40;
  this->bIsSerializable = 1;
  *(undefined8 *)&this->BaseStructGetter = 0;
  *(undefined8 *)&(this->BaseStructGetter).field_0x28 = 0;
  local_98 = 0;
  if (*(longlong *)param_2 == 0) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStructTracker::FStructTracker'::`1'::<lambda_6_>,0,0>::
                _vftable_;
    local_70 = this;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,bool,UStruct_const_*>
               ::Call;
    pppuVar4 = &local_78;
    *(code **)&this->TypeVerification =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FStructTracker::FStructTracker'::__l1::<lambda_6_>,bool,UStruct_const_*>
         ::Call;
    bVar2 = false;
    bVar1 = true;
    *(undefined8 *)&(this->TypeVerification).field_0x28 = 0;
  }
  else {
    local_30 = (undefined ***)0x0;
    puVar3 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_2->field_0x28;
    }
    local_58 = *(longlong *)param_2;
    (**(code **)*puVar3)(puVar3,local_48);
    *(longlong *)&this->TypeVerification = local_58;
    pppuVar4 = local_48;
    *(undefined8 *)&(this->TypeVerification).field_0x28 = 0;
    bVar2 = true;
    bVar1 = false;
    if (local_58 == 0) goto LAB_141f66948;
  }
  if ((undefined ***)pppuVar4[3] != (undefined ***)0x0) {
    pppuVar4 = (undefined ***)pppuVar4[3];
  }
  (*(code *)**pppuVar4)();
  if ((bVar1) && (local_88 != (code *)0x0)) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((bVar2) && (local_58 != 0)) {
    pppuVar4 = local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar4 = local_30;
    }
    (*(code *)(*pppuVar4)[2])();
  }
LAB_141f66948:
  this->BaseType = param_1;
  return this;
}

// ~FStructTracker @ 141f68d20

void __thiscall FStructTracker::~FStructTracker(FStructTracker *this)

{
  longlong *plVar1;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar2;
  ForElementType<FSetElementId> FVar3;
  ForElementType<FName> FVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
              *)&FBitSetSerializationDictionary::TrackerMap);
  local_18 = (TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
              *)&FBitSetSerializationDictionary::TrackerMap;
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar9 = local_78._28_4_;
  if ((int)uVar9 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(FStructTracker **)(*local_48 + 8 + (longlong)(int)uVar7 * 0x18) == this) {
        TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar9);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar9 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar6 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_18->HashSize < iVar6)) || (iVar6 < local_18->HashSize)) {
        local_18->HashSize = iVar6;
        TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  if (*(longlong *)&this->TypeVerification != 0) {
    plVar1 = *(longlong **)&(this->TypeVerification).field_0x28;
    plVar8 = (longlong *)&(this->TypeVerification).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->BaseStructGetter != 0) {
    plVar1 = *(longlong **)&(this->BaseStructGetter).field_0x28;
    plVar8 = (longlong *)&(this->BaseStructGetter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar8 = plVar1;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FVar2 = (this->StructTypesList).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->StructTypeToIndexSet).HashSize = 0;
  FVar3 = (this->StructTypeToIndexSet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StructTypeToIndexSet).Elements);
  FVar4 = (this->DebugStructTypeNamesList).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  return;
}

// operator() @ 141f6ab40

bool __thiscall
`FStructTracker::FStructTracker'::__l1::<lambda_5_>::operator()(void *this,UStruct *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1 == (UStruct *)0x0) {
    return false;
  }
  lVar1 = *(longlong *)this;
  lVar5 = *(longlong *)(lVar1 + 0x4e0);
  if (lVar5 == 0) {
    if (*(void **)(lVar1 + 0x480) == (void *)0x0) {
      return false;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x480));
    pcVar2 = *(code **)(lVar1 + 0x480);
    plVar6 = (longlong *)(lVar1 + 0x490);
    if (*(longlong **)(lVar1 + 0x4a8) != (longlong *)0x0) {
      plVar6 = *(longlong **)(lVar1 + 0x4a8);
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    lVar5 = (*pcVar2)(uVar4);
    *(longlong *)(lVar1 + 0x4e0) = lVar5;
    if (lVar5 == 0) {
      return false;
    }
  }
  if (((int)param_1->_padding_ < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return false;
  }
  return true;
}

// operator() @ 141f6ac00

bool __thiscall
`FStructTracker::FStructTracker'::__l1::<lambda_6_>::operator()(void *this,UStruct *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_1 == (UStruct *)0x0) {
    return false;
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x4e0) == 0) {
    if (*(void **)(lVar1 + 0x480) == (void *)0x0) {
      return false;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x480));
    pcVar2 = *(code **)(lVar1 + 0x480);
    plVar6 = (longlong *)(lVar1 + 0x490);
    if (*(longlong **)(lVar1 + 0x4a8) != (longlong *)0x0) {
      plVar6 = *(longlong **)(lVar1 + 0x4a8);
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    lVar5 = (*pcVar2)(uVar4);
    *(longlong *)(lVar1 + 0x4e0) = lVar5;
    if (lVar5 == 0) {
      return false;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x4e0);
  if (lVar1 != 0) {
    if (((int)param_1->_padding_ < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// DebugFindTypeByPartialName @ 141f78670

UStruct * __thiscall
FStructTracker::DebugFindTypeByPartialName(FStructTracker *this,FString *param_1)

{
  ForElementType<FName> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UStruct *pUVar6;
  FString *this_00;
  size_t sVar7;
  ForElementType<FName> FVar8;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar9;
  uint uVar10;
  wchar_t *_Str;
  FString local_38;
  
  iVar5 = (this->DebugStructTypeNamesList).ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar10 < iVar5) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UStruct *)(*pcVar2)();
        return pUVar6;
      }
      FVar1 = (this->DebugStructTypeNamesList).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FName>)this;
      if (FVar1 != (ForElementType<FName>)0x0) {
        FVar8 = FVar1;
      }
      this_00 = ::FName::ToString((FName *)((longlong)FVar8 + (longlong)(int)uVar10 * 8),&local_38);
      if ((param_1->Data).ArrayNum == 0) {
        _Str = L"";
LAB_141f78744:
        sVar7 = wcslen(_Str);
        iVar5 = ::FString::Find(this_00,_Str,(int)sVar7,IgnoreCase,FromStart,-1);
      }
      else {
        _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_141f78744;
        iVar5 = -1;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (iVar5 != -1) {
        uVar4 = 0;
        if ((int)uVar10 < (this->StructTypesList).ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UStruct *)(*pcVar2)();
          return pUVar6;
        }
        FVar9 = (this->StructTypesList).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar9 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
                  &this->StructTypesList;
        }
        pUVar6 = (UStruct *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)FVar9 + (longlong)(int)uVar10 * 8)
                                    );
        return pUVar6;
      }
      iVar5 = (this->DebugStructTypeNamesList).ArrayNum;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar5);
  }
  return (UStruct *)0x0;
}

// FindOrAddStructTypeIndex @ 141f7c630

int __thiscall FStructTracker::FindOrAddStructTypeIndex(FStructTracker *this,UStruct *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if (*(int *)&(this->StructTypeToIndexSet).Elements.field_0x8 !=
      *(int *)&(this->StructTypeToIndexSet).Elements.field_0x34) {
    FVar3 = (this->StructTypeToIndexSet).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->StructTypeToIndexSet).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->StructTypeToIndexSet).HashSize - 1U & uVar4) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->StructTypeToIndexSet).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == uVar4) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = RegisterImplementation(this,param_1,false);
  return iVar2;
}

// FindStructTypeIndex @ 141f7ccd0

int __thiscall FStructTracker::FindStructTypeIndex(FStructTracker *this,UStruct *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (*(int *)&(this->StructTypeToIndexSet).Elements.field_0x8 !=
      *(int *)&(this->StructTypeToIndexSet).Elements.field_0x34) {
    FVar4 = (this->StructTypeToIndexSet).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->StructTypeToIndexSet).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->StructTypeToIndexSet).HashSize - 1U & uVar3) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->StructTypeToIndexSet).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == uVar3) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// RegisterImplementation @ 141f95f80

int __thiscall
FStructTracker::RegisterImplementation(FStructTracker *this,UStruct *param_1,bool param_2)

{
  TArray<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  ForElementType<FName> FVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  UStruct *pUVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  ForElementType<FName> FVar13;
  uint uVar14;
  int iVar15;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar16;
  longlong *plVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  wchar_t *pwVar23;
  undefined1 local_res8 [8];
  int local_res10 [4];
  uint local_res20 [2];
  FWeakObjectPtr local_a8;
  longlong local_a0;
  uint local_98 [2];
  TPairInitializer<unsigned_int_const_&,FStructTracker_const_*_&&> local_90;
  UStruct *local_80;
  UStruct *local_78;
  FStructTracker *local_70;
  uint *local_68;
  FStructTracker **local_60;
  FString local_58;
  FString local_48;
  
  local_90.Value = (FStructTracker **)param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->TypeVerification);
  pcVar3 = *(code **)&this->TypeVerification;
  plVar4 = *(longlong **)&(this->TypeVerification).field_0x28;
  plVar17 = (longlong *)&(this->TypeVerification).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar17 = plVar4;
  }
  uVar9 = (**(code **)(*plVar17 + 8))();
  cVar6 = (*pcVar3)(uVar9,&local_90.Value);
  if ((cVar6 == '\0') &&
     (local_80 = param_1,
     bVar7 = `FStructTracker::RegisterImplementation'::__l3::<lambda_1>::operator()(&local_80),
     !bVar7)) {
    return -1;
  }
  uVar14 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  local_res20[0] = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  local_res20[0] = local_res20[0] >> 0x10 ^ local_res20[0];
  if ((param_2) &&
     (*(int *)&(this->StructTypeToIndexSet).Elements.field_0x8 !=
      *(int *)&(this->StructTypeToIndexSet).Elements.field_0x34)) {
    FVar19 = (this->StructTypeToIndexSet).Hash.SecondaryData;
    if (FVar19 == (ForElementType<FSetElementId>)0x0) {
      FVar19 = (ForElementType<FSetElementId>)&(this->StructTypeToIndexSet).Hash;
    }
    iVar8 = *(int *)((longlong)FVar19 +
                    (ulonglong)((this->StructTypeToIndexSet).HashSize - 1U & local_res20[0]) * 4);
    if (iVar8 != -1) {
      lVar20 = *(longlong *)&(this->StructTypeToIndexSet).Elements;
      do {
        if (*(uint *)(lVar20 + (longlong)iVar8 * 0xc) == local_res20[0]) {
          return iVar8;
        }
        iVar8 = *(int *)(lVar20 + 4 + (longlong)iVar8 * 0xc);
      } while (iVar8 != -1);
    }
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  EmplaceByHash<unsigned_int_const_&>
            (&this->StructTypeToIndexSet,(uint)local_res10,(uint *)(ulonglong)local_res20[0],
             (bool *)local_res20);
  pwVar23 = L"";
  if ((local_res10[0] == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementId.IsValidId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\StructTypeBitSet.cpp"
                         ,0x7a,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  pTVar1 = &this->StructTypesList;
  if (((this->StructTypesList).ArrayNum != local_res10[0]) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructTypesList.Num() == NewIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\StructTypeBitSet.cpp"
                         ,0x7d,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_78 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_78);
  FVar16 = (this->StructTypesList).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar16 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)pTVar1;
  }
  if ((((ulonglong)FVar16 <= &local_a8) &&
      (&local_a8 <
       (FWeakObjectPtr *)((longlong)FVar16 + (longlong)(this->StructTypesList).ArrayMax * 8))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  iVar8 = (this->StructTypesList).ArrayNum;
  piVar2 = &(this->StructTypesList).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>_>
                      (0x408,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->StructTypesList).ArrayNum = iVar8 + 1;
  FVar16 = (this->StructTypesList).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar16 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)pTVar1;
  }
  *(FWeakObjectPtr *)((longlong)FVar16 + (longlong)iVar8 * 8) = local_a8;
  if (this->bIsSerializable != 0) {
    iVar8 = 0;
    if (this->SerializationHash == 0) {
      if (((this->StructTypesList).ArrayNum != 1) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5739311325301964933>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\StructTypeBitSet.cpp"
                             ,0x85,"StructTypesList.Num() == 1"), bVar7)) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
      pUVar10 = this->BaseType;
      if ((this->BaseType == (UStruct *)0x0) &&
         (pUVar10 = (UStruct *)0x0, *(void **)&this->BaseStructGetter != (void *)0x0)) {
        UE::Core::Private::Function::CheckCallable(*(void **)&this->BaseStructGetter);
        pcVar3 = *(code **)&this->BaseStructGetter;
        plVar4 = *(longlong **)&(this->BaseStructGetter).field_0x28;
        plVar17 = (longlong *)&(this->BaseStructGetter).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar17 = plVar4;
        }
        uVar9 = (**(code **)(*plVar17 + 8))();
        pUVar10 = (UStruct *)(*pcVar3)(uVar9);
        this->BaseType = pUVar10;
      }
      pFVar11 = UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)pUVar10,&local_58,(UObject *)0x0,None);
      iVar15 = (pFVar11->Data).ArrayNum;
      if (iVar15 == 0) {
        pwVar12 = L"";
        iVar15 = iVar8;
      }
      else {
        pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        iVar15 = iVar15 + -1;
      }
      uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar12);
      this->SerializationHash = uVar14;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar11 = UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
    iVar15 = (pFVar11->Data).ArrayNum;
    if (iVar15 != 0) {
      pwVar23 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      iVar8 = iVar15 + -1;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar23);
    uVar21 = this->SerializationHash - uVar14 ^ uVar14 >> 0xd;
    uVar18 = (-0x61c88647 - uVar14) - uVar21 ^ uVar21 << 8;
    uVar22 = (uVar14 - uVar18) - uVar21 ^ uVar18 >> 0xd;
    uVar21 = (uVar21 - uVar22) - uVar18 ^ uVar22 >> 0xc;
    uVar14 = (uVar18 - uVar21) - uVar22 ^ uVar21 << 0x10;
    uVar22 = (uVar22 - uVar14) - uVar21 ^ uVar14 >> 5;
    uVar18 = (uVar21 - uVar22) - uVar14 ^ uVar22 >> 3;
    uVar14 = (uVar14 - uVar18) - uVar22 ^ uVar18 << 10;
    this->SerializationHash = (uVar22 - uVar14) - uVar18 ^ uVar14 >> 0xf;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_98[0] = this->SerializationHash;
    if (FBitSetSerializationDictionary::TrackerMap._8_4_ !=
        FBitSetSerializationDictionary::TrackerMap._52_4_) {
      lVar20 = 0x154b88a98;
      if (FBitSetSerializationDictionary::TrackerMap._64_8_ != 0) {
        lVar20 = FBitSetSerializationDictionary::TrackerMap._64_8_;
      }
      iVar8 = *(int *)(lVar20 + (ulonglong)
                                (FBitSetSerializationDictionary::TrackerMap._72_4_ - 1 & local_98[0]
                                ) * 4);
      while (iVar8 != -1) {
        lVar20 = FBitSetSerializationDictionary::TrackerMap._0_8_ + (longlong)iVar8 * 0x18;
        if (*(uint *)(FBitSetSerializationDictionary::TrackerMap._0_8_ + (longlong)iVar8 * 0x18) ==
            local_98[0]) {
          pUVar10 = (UStruct *)(lVar20 + 8);
          if (lVar20 == 0) {
            pUVar10 = (UStruct *)0x0;
          }
          if (((pUVar10 != (UStruct *)0x0) &&
              ((FStructTracker *)pUVar10->_padding_ != (FStructTracker *)0x0)) &&
             ((FStructTracker *)pUVar10->_padding_ != this)) {
            local_res8[0] = 0;
            `FBitSetSerializationDictionary::RegisterHash'::__l5::<lambda_1>::operator()(local_res8)
            ;
          }
          break;
        }
        iVar8 = *(int *)(lVar20 + 0x10);
      }
    }
    local_68 = local_98;
    local_60 = &local_70;
    local_70 = this;
    TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FStructTracker_const_*_&&>_>
              ((TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
                *)&FBitSetSerializationDictionary::TrackerMap,&local_90,(bool *)&local_68);
  }
  local_a0 = param_1->_padding_;
  FVar5 = (this->DebugStructTypeNamesList).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<FName>)this;
  if (FVar5 != (ForElementType<FName>)0x0) {
    FVar13 = FVar5;
  }
  if ((ulonglong)FVar13 <= &local_a0) {
    FVar13 = (ForElementType<FName>)this;
    if (FVar5 != (ForElementType<FName>)0x0) {
      FVar13 = FVar5;
    }
    if ((&local_a0 <
         (longlong *)((longlong)FVar13 + (longlong)(this->DebugStructTypeNamesList).ArrayMax * 8))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar3 = (code *)swi(3);
      iVar8 = (*pcVar3)();
      return iVar8;
    }
  }
  iVar8 = (this->DebugStructTypeNamesList).ArrayNum;
  piVar2 = &(this->DebugStructTypeNamesList).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,(ForElementType<FName> *)this,piVar2);
  }
  (this->DebugStructTypeNamesList).ArrayNum = iVar8 + 1;
  FVar5 = (this->DebugStructTypeNamesList).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<FName>)this;
  if (FVar5 != (ForElementType<FName>)0x0) {
    FVar13 = FVar5;
  }
  *(longlong *)((longlong)FVar13 + (longlong)iVar8 * 8) = local_a0;
  if ((*(int *)&(this->StructTypeToIndexSet).Elements.field_0x8 -
       *(int *)&(this->StructTypeToIndexSet).Elements.field_0x34 !=
       (this->DebugStructTypeNamesList).ArrayNum) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5739311325301964947>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\StructTypeBitSet.cpp"
                         ,0x93,"StructTypeToIndexSet.Num() == DebugStructTypeNamesList.Num()"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  return local_res10[0];
}

// Serialize @ 141f9c190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStructTracker::Serialize(FStructTracker *this,FArchive *param_1,FBitSetContainer *param_2)

{
  ForAnyElementType *pFVar1;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> FVar2;
  code *pcVar3;
  ForElementType<FSetElementId> FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  UStruct *pUVar11;
  longlong *plVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  UStruct *pUVar15;
  UStruct *pUVar16;
  UStruct *pUVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  ForElementType<unsigned_int> FVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  ForElementType<FSetElementId> FVar25;
  uint uVar26;
  ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_> this_00;
  longlong lVar27;
  ForElementType<unsigned_int> FVar28;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [4];
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined1 local_124 [4];
  uint local_120 [2];
  ForElementType<unsigned_int> local_118;
  uint local_110 [2];
  undefined8 local_108;
  FTopLevelAssetPath local_100;
  FTopLevelAssetPath local_f0;
  FTopLevelAssetPath local_e0;
  FName local_d0;
  FName FStack_c8;
  undefined1 local_c0 [16];
  uint *local_b0;
  ForAnyElementType *local_a8;
  FName local_a0;
  FTopLevelAssetPath local_98;
  FTopLevelAssetPath local_88;
  FString local_78;
  undefined1 local_68 [16];
  ForElementType<unsigned_int> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->bIsSerializable == 0) && ((param_1->field_0x28 & 4) != 0)) {
    return;
  }
  plVar12 = *(longlong **)&param_1->field_0x8;
  local_138[0] = 0;
  local_118 = (ForElementType<unsigned_int>)param_2;
  if ((undefined1 *)plVar12[1] < (undefined1 *)*plVar12 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_138,1);
  }
  else {
    local_138[0] = *(undefined1 *)*plVar12;
    *plVar12 = *plVar12 + 1;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    ::operator<<(param_1,&this->SerializationHash);
    local_118 = (ForElementType<unsigned_int>)(**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar12 = *(longlong **)&param_1->field_0x8;
    local_134 = 0;
    if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_134,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_134);
      }
    }
    else {
      local_134 = *(uint *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    local_108 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    pUVar11 = this->BaseType;
    if ((this->BaseType == (UStruct *)0x0) &&
       (pUVar11 = (UStruct *)0x0, *(void **)&this->BaseStructGetter != (void *)0x0)) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->BaseStructGetter);
      pcVar3 = *(code **)&this->BaseStructGetter;
      plVar12 = *(longlong **)&(this->BaseStructGetter).field_0x28;
      plVar22 = (longlong *)&(this->BaseStructGetter).field_0x10;
      if (plVar12 != (longlong *)0x0) {
        plVar22 = plVar12;
      }
      uVar10 = (**(code **)(*plVar22 + 8))();
      pUVar11 = (UStruct *)(*pcVar3)(uVar10);
      this->BaseType = pUVar11;
    }
    local_f0.PackageName.ComparisonIndex.Value = 0;
    local_f0.PackageName.Number = 0;
    local_f0.AssetName.ComparisonIndex.Value = 0;
    local_f0.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_f0,(UObject *)pUVar11);
    plVar12 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_f0);
    (**(code **)(*plVar12 + 0x178))(plVar12,&local_f0.AssetName);
    plVar12 = *(longlong **)&param_1->field_0x8;
    local_120[0] = (this->StructTypesList).ArrayNum;
    if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_120,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_120);
      }
    }
    else {
      local_120[0] = *(uint *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    this_00 = (this->StructTypesList).AllocatorInstance.SecondaryData;
    if (this_00 == (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)0x0) {
      this_00 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
                &this->StructTypesList;
    }
    iVar7 = (this->StructTypesList).ArrayNum;
    FVar2 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
            ((longlong)this_00 + (longlong)iVar7 * 8);
    while( true ) {
      if ((this->StructTypesList).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_124);
      }
      if (this_00 == FVar2) break;
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_e0.PackageName.ComparisonIndex.Value = 0;
      local_e0.PackageName.Number = 0;
      local_e0.AssetName.ComparisonIndex.Value = 0;
      local_e0.AssetName.Number = 0;
      FTopLevelAssetPath::TrySetPath(&local_e0,pUVar13);
      plVar12 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_e0);
      (**(code **)(*plVar12 + 0x178))(plVar12,&local_e0.AssetName);
      this_00 = (ForElementType<TWeakObjectPtr<UStruct_const_,FWeakObjectPtr>_>)
                ((longlong)this_00 + 8);
    }
    uVar10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_118);
    plVar12 = *(longlong **)&param_1->field_0x8;
    local_134 = (int)uVar10 - (int)local_108;
    if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_134,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_134);
      }
    }
    else {
      local_134 = *(uint *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar10);
    operator<<<FDefaultBitArrayAllocator>(param_1,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
    return;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  plVar12 = *(longlong **)&param_1->field_0x8;
  pUVar11 = (UStruct *)0x0;
  local_12c = 0;
  if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_12c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_12c);
    }
  }
  else {
    local_12c = *(uint *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  plVar12 = *(longlong **)&param_1->field_0x8;
  local_128 = 0;
  if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_128,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_128);
    }
  }
  else {
    local_128 = *(uint *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  if (FBitSetSerializationDictionary::TrackerMap._8_4_ !=
      FBitSetSerializationDictionary::TrackerMap._52_4_) {
    lVar24 = 0x154b88a98;
    if (FBitSetSerializationDictionary::TrackerMap._64_8_ != 0) {
      lVar24 = FBitSetSerializationDictionary::TrackerMap._64_8_;
    }
    iVar7 = *(int *)(lVar24 + (ulonglong)
                              (FBitSetSerializationDictionary::TrackerMap._72_4_ - 1 & local_12c) *
                              4);
    while (iVar7 != -1) {
      lVar24 = FBitSetSerializationDictionary::TrackerMap._0_8_ + (longlong)iVar7 * 0x18;
      if (*(uint *)(FBitSetSerializationDictionary::TrackerMap._0_8_ + (longlong)iVar7 * 0x18) ==
          local_12c) {
        pUVar16 = (UStruct *)(lVar24 + 8);
        if (lVar24 == 0) {
          pUVar16 = pUVar11;
        }
        if ((pUVar16 != (UStruct *)0x0) && ((FStructTracker *)pUVar16->_padding_ == this)) {
          lVar24 = *(longlong *)param_1;
          lVar27 = (longlong)(int)local_128;
          lVar18 = (**(code **)(lVar24 + 0x28))(param_1);
          (**(code **)(lVar24 + 0x1b8))(param_1,lVar27 + lVar18);
          operator<<<FDefaultBitArrayAllocator>
                    (param_1,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
          return;
        }
        break;
      }
      iVar7 = *(int *)(lVar24 + 0x10);
    }
  }
  local_100.PackageName.ComparisonIndex.Value = 0;
  local_100.PackageName.Number = 0;
  local_100.AssetName.ComparisonIndex.Value = 0;
  local_100.AssetName.Number = 0;
  plVar12 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_100);
  (**(code **)(*plVar12 + 0x178))(plVar12,&local_100.AssetName);
  local_c0._0_4_ = local_100.PackageName.ComparisonIndex.Value;
  local_c0._4_4_ = local_100.PackageName.Number;
  local_c0._8_4_ = local_100.AssetName.ComparisonIndex.Value;
  local_c0._12_4_ = local_100.AssetName.Number;
  pUVar14 = UStruct::StaticClass();
  local_88.PackageName.ComparisonIndex.Value = local_c0._0_4_;
  local_88.PackageName.Number = local_c0._4_4_;
  local_88.AssetName.ComparisonIndex.Value = local_c0._8_4_;
  local_88.AssetName.Number = local_c0._12_4_;
  pUVar15 = (UStruct *)StaticFindObject(pUVar14,&local_88,None);
  pUVar16 = this->BaseType;
  if ((this->BaseType == (UStruct *)0x0) &&
     (pUVar16 = pUVar11, *(void **)&this->BaseStructGetter != (void *)0x0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BaseStructGetter);
    pcVar3 = *(code **)&this->BaseStructGetter;
    plVar12 = *(longlong **)&(this->BaseStructGetter).field_0x28;
    plVar22 = (longlong *)&(this->BaseStructGetter).field_0x10;
    if (plVar12 != (longlong *)0x0) {
      plVar22 = plVar12;
    }
    uVar10 = (**(code **)(*plVar22 + 8))();
    pUVar16 = (UStruct *)(*pcVar3)(uVar10);
    this->BaseType = pUVar16;
  }
  if (pUVar15 == pUVar16) {
    local_110[0] = local_12c;
    if (FBitSetSerializationDictionary::BitMappings._8_4_ !=
        FBitSetSerializationDictionary::BitMappings._52_4_) {
      lVar24 = 0x154b88ae8;
      if (FBitSetSerializationDictionary::BitMappings._64_8_ != 0) {
        lVar24 = FBitSetSerializationDictionary::BitMappings._64_8_;
      }
      uVar6 = *(uint *)(lVar24 + (ulonglong)
                                 (FBitSetSerializationDictionary::BitMappings._72_4_ - 1 & local_12c
                                 ) * 4);
      while (uVar6 != 0xffffffff) {
        puVar20 = (uint *)((longlong)(int)uVar6 * 0x20 +
                          FBitSetSerializationDictionary::BitMappings._0_8_);
        if (*puVar20 == local_12c) {
          if (puVar20 != (uint *)0x0) goto LAB_141f9c721;
          break;
        }
        uVar6 = puVar20[6];
      }
    }
    local_b0 = local_110;
    TSet<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&FBitSetSerializationDictionary::BitMappings,(uint)&local_108,
               (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_12c,(bool *)&local_b0);
    puVar20 = (uint *)((longlong)(int)local_108 * 0x20 +
                      FBitSetSerializationDictionary::BitMappings._0_8_);
LAB_141f9c721:
    pFVar1 = (ForAnyElementType *)(puVar20 + 2);
    uVar6 = 0;
    local_a8 = pFVar1;
    if (puVar20[4] == 0) {
      plVar12 = *(longlong **)&param_1->field_0x8;
      local_130 = 0;
      if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_130,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_130);
        }
      }
      else {
        local_130 = *(uint *)*plVar12;
        *plVar12 = *plVar12 + 4;
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_130,pFVar1,(int *)(puVar20 + 4),(int *)(puVar20 + 5));
      pUVar16 = pUVar11;
      pUVar15 = pUVar11;
      if (0 < (int)local_130) {
        do {
          local_d0.ComparisonIndex.Value = 0;
          local_d0.Number = 0;
          FStack_c8.ComparisonIndex.Value = 0;
          FStack_c8.Number = 0;
          plVar12 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_d0);
          (**(code **)(*plVar12 + 0x178))(plVar12,&FStack_c8);
          local_98.PackageName = local_d0;
          local_98.AssetName = FStack_c8;
          pUVar14 = UStruct::StaticClass();
          pUVar17 = (UStruct *)StaticFindObject(pUVar14,&local_98,None);
          uVar8 = (uint)pUVar16;
          if (pUVar17 == (UStruct *)0x0) {
            uVar23 = uVar6;
            if ((int)uVar8 < (int)puVar20[4]) {
              uVar23 = ~uVar8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined4 *)(pFVar1->Data + (longlong)&pUVar15->_padding_) = 0xffffffff;
          }
          else {
            uVar23 = ((uint)((ulonglong)pUVar17 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar17 >> 4))
                     * -0x7a143595;
            uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
            uVar23 = uVar23 >> 0x10 ^ uVar23;
            if (*(int *)&(this->StructTypeToIndexSet).Elements.field_0x8 !=
                *(int *)&(this->StructTypeToIndexSet).Elements.field_0x34) {
              FVar4 = (this->StructTypeToIndexSet).Hash.SecondaryData;
              FVar25 = (ForElementType<FSetElementId>)&(this->StructTypeToIndexSet).Hash;
              if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                FVar25 = FVar4;
              }
              iVar7 = *(int *)((longlong)FVar25 +
                              (ulonglong)((this->StructTypeToIndexSet).HashSize - 1U & uVar23) * 4);
              if (iVar7 != -1) {
                lVar24 = *(longlong *)&(this->StructTypeToIndexSet).Elements;
                do {
                  if (*(uint *)(lVar24 + (longlong)iVar7 * 0xc) == uVar23) goto LAB_141f9c8a6;
                  iVar7 = *(int *)(lVar24 + 4 + (longlong)iVar7 * 0xc);
                } while (iVar7 != -1);
              }
            }
            iVar7 = RegisterImplementation(this,pUVar17,false);
LAB_141f9c8a6:
            uVar23 = uVar6;
            if ((int)uVar8 < (int)puVar20[4]) {
              uVar23 = ~uVar8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(int *)(pFVar1->Data + (longlong)&pUVar15->_padding_) = iVar7;
          }
          pUVar16 = (UStruct *)(ulonglong)(uVar8 + 1);
          pUVar15 = (UStruct *)((longlong)&pUVar15->_padding_ + 4);
        } while ((int)(uVar8 + 1) < (int)local_130);
      }
    }
    else {
      lVar24 = *(longlong *)param_1;
      lVar27 = (longlong)(int)local_128;
      lVar18 = (**(code **)(lVar24 + 0x28))(param_1);
      (**(code **)(lVar24 + 0x1b8))(param_1,lVar27 + lVar18);
    }
    local_58 = (ForElementType<unsigned_int>)0x0;
    local_50 = 0;
    local_4c = 0x80;
    operator<<<FDefaultBitArrayAllocator>(param_1,(TBitArray<FDefaultBitArrayAllocator> *)local_68);
    FVar28 = local_118;
    iVar7 = *(int *)&(this->StructTypeToIndexSet).Elements.field_0x8 -
            *(int *)&(this->StructTypeToIndexSet).Elements.field_0x34;
    uVar8 = iVar7 + 0x1f;
    uVar23 = uVar8 >> 5;
    *(int *)((longlong)local_118 + 0x18) = iVar7;
    if (uVar8 >> 5 != 0) {
      if (*(int *)((longlong)local_118 + 0x1c) + 0x1fU >> 5 < uVar23) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation((ForElementType<unsigned_int> *)local_118,0,uVar23,4);
        *(uint *)((longlong)FVar28 + 0x1c) = uVar23 << 5;
      }
      FVar21 = FVar28;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar21 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
      }
      memset((void *)FVar21,0,(ulonglong)uVar23 << 2);
      uVar23 = *(int *)((longlong)FVar28 + 0x18) >> 0x1f & 0x1f;
      uVar8 = *(int *)((longlong)FVar28 + 0x18) + uVar23;
      iVar7 = (uVar8 & 0x1f) - uVar23;
      if (iVar7 != 0) {
        FVar21 = FVar28;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
        }
        puVar20 = (uint *)((longlong)FVar21 + (longlong)((int)uVar8 >> 5) * 4);
        *puVar20 = *puVar20 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
    uVar8 = 1;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58;
    pUVar16 = pUVar11;
    iVar7 = local_50;
    if (0 < local_50) {
      do {
        pFVar1 = local_a8;
        FVar21 = (ForElementType<unsigned_int>)local_68;
        if ((ForElementType<unsigned_int>)local_78.Data.AllocatorInstance.Data !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = (ForElementType<unsigned_int>)local_78.Data.AllocatorInstance.Data;
        }
        uVar23 = (uint)pUVar11;
        if ((*(uint *)((longlong)FVar21 + (longlong)(int)pUVar16 * 4) & uVar8) != 0) {
          uVar26 = uVar6;
          if ((int)uVar23 < *(int *)&local_a8[1].Data) {
            uVar26 = ~uVar23 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar26 = *(uint *)(pFVar1->Data + (longlong)(int)uVar23 * 4);
          if (((int)uVar26 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                                 ,0xe5,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (uVar26 - *(int *)((longlong)FVar28 + 0x18)) + 1;
          FVar28 = local_118;
          if (0 < iVar7) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                              ((TBitArray<FDefaultBitArrayAllocator> *)local_118,iVar7);
            FVar28 = local_118;
            TBitArray<FDefaultBitArrayAllocator>::SetRange
                      ((TBitArray<FDefaultBitArrayAllocator> *)local_118,iVar9,iVar7,false);
          }
          FVar21 = FVar28;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar21 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
          }
          uVar19 = uVar26 & 0x1f;
          if ((int)uVar26 < 0) {
            uVar26 = uVar26 + 0x1f;
            uVar19 = uVar19 - 0x20;
          }
          puVar20 = (uint *)((longlong)FVar21 + (longlong)((int)uVar26 >> 5) * 4);
          *puVar20 = ~(1 << ((byte)uVar19 & 0x1f)) & *puVar20 | 1 << (uVar19 & 0x1f);
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_58;
          iVar7 = local_50;
        }
        pUVar11 = (UStruct *)(ulonglong)(uVar23 + 1);
        uVar26 = uVar8 * 2;
        if (uVar26 == 0) {
          pUVar16 = (UStruct *)(ulonglong)((int)pUVar16 + 1);
        }
        uVar8 = 1;
        if (uVar26 != 0) {
          uVar8 = uVar26;
        }
      } while ((int)(uVar23 + 1) < iVar7);
    }
    goto joined_r0x000141f9cc86;
  }
  if ((byte)LogStructUtils._0_1_ < 2) {
    return;
  }
  FTopLevelAssetPath::ToString(&local_100,&local_78);
  pUVar11 = this->BaseType;
  if (pUVar11 == (UStruct *)0x0) {
    if (*(void **)&this->BaseStructGetter != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->BaseStructGetter);
      pcVar3 = *(code **)&this->BaseStructGetter;
      plVar12 = *(longlong **)&(this->BaseStructGetter).field_0x28;
      plVar22 = (longlong *)&(this->BaseStructGetter).field_0x10;
      if (plVar12 != (longlong *)0x0) {
        plVar22 = plVar12;
      }
      uVar10 = (**(code **)(*plVar22 + 8))();
      pUVar11 = (UStruct *)(*pcVar3)(uVar10);
      this->BaseType = pUVar11;
      if (pUVar11 != (UStruct *)0x0) goto LAB_141f9cc28;
    }
    ::FString::FString((FString *)local_c0,L"None");
  }
  else {
LAB_141f9cc28:
    local_a0 = (FName)pUVar11->_padding_;
    ::FName::ToString(&local_a0,(FString *)local_c0);
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStructUtils);
  if ((FName)local_c0._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_c0._0_8_);
  }
joined_r0x000141f9cc86:
  if ((ForElementType<unsigned_int>)local_78.Data.AllocatorInstance.Data !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150483490

bool __thiscall `FStructTracker::RegisterImplementation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5739311325301964905>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5739311325301964905>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150483505;
    }
  }
  bVar2 = false;
LAB_150483505:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

