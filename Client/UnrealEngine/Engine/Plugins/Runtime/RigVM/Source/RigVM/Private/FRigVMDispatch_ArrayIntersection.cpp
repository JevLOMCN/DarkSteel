// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a12cdd0

UScriptStruct * __cdecl FRigVMDispatch_ArrayIntersection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIntersection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIntersection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayIntersection,
                         (UObject *)pUVar1,L"RigVMDispatch_ArrayIntersection");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIntersection.OuterSingleton;
}

// GetOpCode @ 14a12ce40

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall
FRigVMDispatch_ArrayIntersection::GetOpCode(FRigVMDispatch_ArrayIntersection *this)

{
  return ArrayIntersection;
}

// GetDispatchFunctionImpl @ 14a12cec0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayIntersection::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayIntersection *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// FRigVMDispatch_ArrayIntersection @ 14a18b1f0

FRigVMDispatch_ArrayIntersection * __thiscall
FRigVMDispatch_ArrayIntersection::FRigVMDispatch_ArrayIntersection
          (FRigVMDispatch_ArrayIntersection *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined ***)this = &___7FRigVMDispatch_ArrayDifference__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayDifference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayDifference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayDifference,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayDifference");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayDifference.OuterSingleton;
  *(undefined ***)this = &___7FRigVMDispatch_ArrayIntersection__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIntersection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIntersection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayIntersection,
                         (UObject *)pUVar1,L"RigVMDispatch_ArrayIntersection");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayIntersection.OuterSingleton;
  return this;
}

// Execute @ 14a199e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMDispatch_ArrayIntersection::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  int iVar3;
  FRigVMPropertyPath *pFVar4;
  FProperty *pFVar5;
  code *pcVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined8 uVar8;
  FProperty *pFVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  FArrayProperty *pFVar13;
  FScriptArrayHelper_u_8 FVar14;
  FArrayProperty *pFVar15;
  uchar *puVar16;
  FRigVMMemoryHandle *pFVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  uchar *puVar21;
  uint *puVar22;
  void *_Dst;
  FArrayProperty *pFVar23;
  FArrayProperty *pFVar24;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8 [8];
  FScriptArrayHelper local_1f0;
  FScriptArrayHelper local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  FProperty *local_190;
  longlong *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  undefined1 local_158 [40];
  int local_130;
  undefined4 uStack_12c;
  longlong local_120;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  FScriptArrayHelper local_f8;
  undefined1 local_d8 [40];
  int local_b0;
  int local_a4;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [72];
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar23 = (FArrayProperty *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = param_2->DataPtr->PropertyPath;
  if (pFVar4 == (FRigVMPropertyPath *)0x0) {
    pFVar13 = (FArrayProperty *)param_2->DataPtr->Property;
  }
  else {
    pFVar13 = (FArrayProperty *)FRigVMPropertyPath::GetTailProperty(pFVar4);
  }
  if (((pFVar13 == (FArrayProperty *)0x0) ||
      ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar13 = pFVar23,
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17->PropertyPath == (FRigVMPropertyPath *)0x0) {
    FVar14.HeapArray = (FScriptArray *)pFVar17->Ptr;
  }
  else {
    FVar14.HeapArray =
         (FScriptArray *)
         FRigVMPropertyPath::GetData_Internal(pFVar17->PropertyPath,pFVar17->Ptr,pFVar17->Property);
  }
  EVar1 = pFVar13->ArrayFlags;
  local_1d0.ElementAlignment = (**(code **)(pFVar13->Inner->_padding_ + 0x168))();
  pFVar5 = pFVar13->Inner;
  local_1d0.ElementSize = pFVar5->ElementSize;
  local_1d0.InnerProperty = pFVar5;
  local_1d0.field1_0x8 = FVar14;
  local_1d0.ArrayFlags = EVar1;
  if ((local_1d0.ElementSize < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar5 == (FProperty *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = param_2->DataPtr[1].PropertyPath;
  if (pFVar4 == (FRigVMPropertyPath *)0x0) {
    pFVar15 = (FArrayProperty *)param_2->DataPtr[1].Property;
  }
  else {
    pFVar15 = (FArrayProperty *)FRigVMPropertyPath::GetTailProperty(pFVar4);
  }
  if (((pFVar15 == (FArrayProperty *)0x0) ||
      ((*(uint *)(pFVar15->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar15 = pFVar23,
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar17 = param_2->DataPtr;
  if (pFVar17[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar16 = pFVar17[1].Ptr;
  }
  else {
    puVar16 = FRigVMPropertyPath::GetData_Internal
                        (pFVar17[1].PropertyPath,pFVar17[1].Ptr,pFVar17[1].Property);
  }
  EVar1 = pFVar15->ArrayFlags;
  uVar12 = (**(code **)(pFVar15->Inner->_padding_ + 0x168))();
  FScriptArrayHelper::FScriptArrayHelper
            (&local_f8,Internal,pFVar15->Inner,puVar16,pFVar15->Inner->ElementSize,uVar12,EVar1);
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  pFVar24 = (FArrayProperty *)pFVar17->Property;
  if (((pFVar24 == (FArrayProperty *)0x0) ||
      ((*(uint *)(pFVar24->_padding_ + 0x18) >> 0x15 & 1) == 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CastResult",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                          ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar24 = pFVar23,
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar17 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar17,false,-1);
  EVar1 = pFVar24->ArrayFlags;
  uVar12 = (**(code **)(pFVar24->Inner->_padding_ + 0x168))();
  FScriptArrayHelper::FScriptArrayHelper
            (&local_1f0,Internal,pFVar24->Inner,puVar16,pFVar24->Inner->ElementSize,uVar12,EVar1);
  local_190 = pFVar24->Inner;
  pFVar5 = pFVar13->Inner;
  iVar2 = (local_1f0.field1_0x8.FreezableArray)->ArrayNum;
  if (iVar2 < 0) {
    FScriptArrayHelper::AddValues(&local_1f0,-iVar2);
  }
  else if (0 < iVar2) {
    FScriptArrayHelper::RemoveValues(&local_1f0,0,iVar2);
  }
  FRigVMDispatch_ArrayBase::GetArrayHash
            ((TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
              *)local_d8,&local_1d0,pFVar13);
  FRigVMDispatch_ArrayBase::GetArrayHash
            ((TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
              *)local_88,&local_f8,pFVar15);
  local_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  local_1b0._padding_._0_4_ = 0;
  local_1b0._padding_._4_4_ = 1;
  local_1b0.UnvisitedBitMask = 0xffffffff;
  local_1b0.CurrentBitIndex = 0;
  local_1b0.BaseBitIndex = 0;
  if (local_b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
  }
  TStack_180._padding_ = CONCAT44(local_1b0._padding_._4_4_,(undefined4)local_1b0._padding_);
  local_188 = (longlong *)local_d8;
  TStack_180.CurrentBitIndex = local_1b0.CurrentBitIndex;
  TStack_180.UnvisitedBitMask = local_1b0.UnvisitedBitMask;
  TStack_180._28_4_ = local_1b0._28_4_;
  TStack_180.BaseBitIndex = local_1b0.BaseBitIndex;
  local_130 = local_d8._8_4_ - local_a4;
  local_158._16_8_ = local_1b0.Array;
  uStack_160 = CONCAT44(uStack_12c,local_130);
  TStack_180.Array = local_1b0.Array;
  local_158._0_8_ = local_188;
  local_158._8_8_ = TStack_180._padding_;
  local_158._24_8_ = TStack_180._16_8_;
  local_158._32_8_ = TStack_180._24_8_;
  pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_158,
                       (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),local_b0);
  pFVar9 = local_190;
  local_120 = pTVar18->_padding_;
  pTVar7 = pTVar18->Array;
  uVar8._0_4_ = pTVar18->UnvisitedBitMask;
  uVar8._4_4_ = pTVar18->CurrentBitIndex;
  uStack_108 = *(undefined8 *)&pTVar18->BaseBitIndex;
  pTStack_118 = pTVar7;
  local_110 = uVar8;
  do {
    plVar10 = local_188;
    if ((int)local_188[1] - *(int *)((longlong)local_188 + 0x34) != (int)uStack_160) {
      local_1f8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    if (((TStack_180.CurrentBitIndex == uVar8._4_4_) && (TStack_180.Array == pTVar7)) &&
       (plVar10 == (longlong *)local_d8)) {
      local_40 = 0;
      if ((undefined1 *)local_88._64_8_ != (undefined1 *)0x0) {
        FMemory::Free((void *)local_88._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
    puVar22 = (uint *)((longlong)TStack_180.CurrentBitIndex * 0x10 + *plVar10);
    uVar12 = *puVar22;
    if (local_88._8_4_ != local_88._52_4_) {
      puVar20 = local_88 + 0x38;
      if ((undefined1 *)local_88._64_8_ != (undefined1 *)0x0) {
        puVar20 = (undefined1 *)local_88._64_8_;
      }
      for (iVar2 = *(int *)(puVar20 + (ulonglong)(local_40 - 1U & uVar12) * 4); iVar2 != -1;
          iVar2 = *(int *)(local_88._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
        if (*(uint *)(local_88._0_8_ + (longlong)iVar2 * 0x10) == uVar12) {
          iVar3 = (local_1f0.field1_0x8.FreezableArray)->ArrayNum;
          iVar2 = iVar3 + 1;
          (local_1f0.field1_0x8.FreezableArray)->ArrayNum = iVar2;
          if ((local_1f0.ArrayFlags & UsesMemoryImageAllocator) == None) {
            if ((local_1f0.field1_0x8.FreezableArray)->ArrayMax < iVar2) {
              TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                        ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                         local_1f0.field1_0x8.HeapArray,iVar3,local_1f0.ElementSize,
                         local_1f0.ElementAlignment);
            }
          }
          else if ((local_1f0.field1_0x8.FreezableArray)->ArrayMax < iVar2) {
            TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                      (local_1f0.field1_0x8.FreezableArray,iVar3,local_1f0.ElementSize,
                       local_1f0.ElementAlignment);
          }
          if ((local_1f0.field1_0x8.FreezableArray)->ArrayNum == 0) {
            _Dst = (void *)0x0;
          }
          else {
            uVar19 = (local_1f0.field1_0x8.FreezableArray)->_padding_;
            if (((local_1f0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar19 & 1) != 0))
            {
              uVar19 = (longlong)&(local_1f0.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar19 >> 0x18);
            }
            _Dst = (void *)((longlong)local_1f0.ElementSize * (longlong)iVar3 + uVar19);
          }
          if (((uint)(int)(local_1f0.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
            (**(code **)((local_1f0.InnerProperty)->_padding_ + 0x150))();
          }
          else {
            memset(_Dst,0,(longlong)local_1f0.ElementSize);
          }
          if ((FVar14.FreezableArray)->ArrayNum == 0) {
            puVar16 = (uchar *)0x0;
          }
          else {
            puVar16 = (uchar *)(FVar14.FreezableArray)->_padding_;
            if (((local_1d0.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)puVar16 & 1) != 0)) {
              puVar16 = &(FVar14.HeapArray)->field_0x0 + ((longlong)puVar16 >> 0x18);
            }
            puVar16 = puVar16 + (longlong)(int)puVar22[1] * (longlong)local_1d0.ElementSize;
          }
          if ((local_1f0.field1_0x8.FreezableArray)->ArrayNum == 0) {
            puVar21 = (uchar *)0x0;
          }
          else {
            uVar19 = (local_1f0.field1_0x8.FreezableArray)->_padding_;
            if (((local_1f0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar19 & 1) != 0))
            {
              uVar19 = (longlong)&(local_1f0.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar19 >> 0x18);
            }
            puVar21 = (uchar *)((longlong)local_1f0.ElementSize * (longlong)iVar3 + uVar19);
          }
          URigVMMemoryStorage::CopyProperty(pFVar9,puVar21,pFVar5,puVar16);
          break;
        }
      }
    }
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  } while( true );
}

