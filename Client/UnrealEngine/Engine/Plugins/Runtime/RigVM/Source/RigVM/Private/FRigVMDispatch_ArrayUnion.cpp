// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a12b980

UScriptStruct * __cdecl FRigVMDispatch_ArrayUnion::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayUnion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayUnion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayUnion,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayUnion");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayUnion.OuterSingleton;
}

// GetOpCode @ 14a12b9c0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArrayUnion::GetOpCode(FRigVMDispatch_ArrayUnion *this)

{
  return ArrayUnion;
}

// GetDispatchFunctionImpl @ 14a12b9d0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayUnion::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayUnion *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// FRigVMDispatch_ArrayUnion @ 14a18b330

FRigVMDispatch_ArrayUnion * __thiscall
FRigVMDispatch_ArrayUnion::FRigVMDispatch_ArrayUnion(FRigVMDispatch_ArrayUnion *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined ***)this = &___7FRigVMDispatch_ArrayAppend__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayAppend.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayAppend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayAppend,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayAppend");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayAppend.OuterSingleton;
  *(undefined ***)this = &___7FRigVMDispatch_ArrayUnion__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayUnion.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayUnion.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayUnion,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayUnion");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayUnion.OuterSingleton;
  return this;
}

// Execute @ 14a19b9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMDispatch_ArrayUnion::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FRigVMMemoryHandle *pFVar12;
  FArrayProperty *pFVar13;
  uchar *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  byte bVar16;
  FScriptContainerElement *pFVar17;
  FProperty *pFVar18;
  undefined1 *puVar19;
  uchar *puVar20;
  uint *puVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  void *pvVar29;
  int iVar30;
  ulonglong uVar31;
  uint uVar32;
  FArrayProperty *pFVar33;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7 [7];
  FScriptArrayHelper local_2a0;
  ForAnyElementType local_280;
  undefined8 local_278;
  ForAnyElementType local_270;
  int local_268 [2];
  longlong *local_260;
  undefined8 uStack_258;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  int local_238;
  undefined4 uStack_234;
  uint local_230 [2];
  uint local_228;
  undefined1 uStack_224;
  undefined3 uStack_223;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_220;
  int local_200;
  int local_1fc;
  undefined8 local_1f8;
  FProperty *local_1f0;
  <lambda_1> local_1e8;
  undefined1 local_1d8 [12];
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FScriptArrayHelper local_178;
  TRangedForConstIterator local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  undefined4 local_ec;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [40];
  int local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_1f8 = 1;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar13 = (FArrayProperty *)pFVar12->Property;
  }
  else {
    pFVar13 = (FArrayProperty *)FRigVMPropertyPath::GetTailProperty(pFVar12->PropertyPath);
  }
  if ((pFVar13 == (FArrayProperty *)0x0) ||
     ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar13 = (FArrayProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,1);
  puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  EVar1 = pFVar13->ArrayFlags;
  uVar9 = (**(code **)(pFVar13->Inner->_padding_ + 0x168))(pFVar13->Inner);
  FScriptArrayHelper::FScriptArrayHelper
            (&local_178,Internal,pFVar13->Inner,puVar14,pFVar13->Inner->ElementSize,uVar9,EVar1);
  if (0 < (local_178.field1_0x8.FreezableArray)->ArrayNum) {
    pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
    pFVar33 = (FArrayProperty *)pFVar12->Property;
    if ((pFVar33 == (FArrayProperty *)0x0) ||
       ((*(uint *)(pFVar33->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
      pFVar33 = (FArrayProperty *)0x0;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0);
    puVar14 = FRigVMMemoryHandle::GetData_Internal(pFVar12,false,-1);
    EVar1 = pFVar33->ArrayFlags;
    uVar9 = (**(code **)(pFVar33->Inner->_padding_ + 0x168))(pFVar33->Inner);
    FScriptArrayHelper::FScriptArrayHelper
              (&local_2a0,Internal,pFVar33->Inner,puVar14,pFVar33->Inner->ElementSize,uVar9,EVar1);
    local_1f0 = pFVar13->Inner;
    pFVar2 = pFVar33->Inner;
    FRigVMDispatch_ArrayBase::GetArrayHash
              ((TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                *)local_e8,&local_2a0,pFVar33);
    FRigVMDispatch_ArrayBase::GetArrayHash
              ((TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                *)local_98,&local_178,pFVar13);
    iVar30 = local_e8._8_4_ - local_b4;
    uVar9 = local_98._8_4_ - local_64;
    local_280.Data = (FScriptContainerElement *)0x0;
    local_278 = 0;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (0 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,&local_280,0,(int *)((longlong)&local_278 + 4));
    }
    local_220.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_220._padding_._4_4_ = 1;
    local_220.UnvisitedBitMask = 0xffffffff;
    local_220._padding_._0_4_ = 0;
    local_220.CurrentBitIndex = 0;
    local_220.BaseBitIndex = 0;
    if (local_70 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_220);
    }
    uStack_258 = CONCAT44(local_220._padding_._4_4_,(undefined4)local_220._padding_);
    local_260 = (longlong *)local_98;
    uStack_248 = CONCAT44(local_220.CurrentBitIndex,local_220.UnvisitedBitMask);
    uStack_240 = CONCAT44(local_220._28_4_,local_220.BaseBitIndex);
    local_238 = local_98._8_4_ - local_64;
    pTStack_250 = local_220.Array;
    uStack_1b0._4_4_ = uStack_234;
    uStack_1b0._0_4_ = local_238;
    local_1c8 = local_220.Array;
    local_1d8._0_8_ = local_260;
    unique0x1000119b = uStack_258;
    uStack_1c0 = uStack_248;
    local_1b8 = uStack_240;
    pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_128,(TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),
                         local_70);
    local_260 = (longlong *)local_98;
    uStack_258 = pTVar15->_padding_;
    pTStack_250 = pTVar15->Array;
    uStack_248._0_4_ = pTVar15->UnvisitedBitMask;
    uStack_248._4_4_ = pTVar15->CurrentBitIndex;
    uStack_240 = *(longlong *)&pTVar15->BaseBitIndex;
    local_238 = local_98._8_4_ - local_64;
    local_158._44_4_ = uStack_234;
    local_158.InitialNum = local_238;
    local_158._padding_ = (longlong)local_260;
    local_158._padding_ = uStack_258;
    local_158._padding_ = (longlong)pTStack_250;
    local_158._padding_ = uStack_248;
    local_158._padding_ = uStack_240;
    bVar7 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!=((TRangedForConstIterator *)local_1d8,&local_158);
    if (bVar7) {
      do {
        puVar21 = (uint *)((longlong)uStack_1c0._4_4_ * 0x10 + *(longlong *)local_1d8._0_8_);
        local_230[0] = *puVar21;
        iVar10 = TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<unsigned_int>
                           ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                             *)local_e8,local_230[0],local_230);
        if (iVar10 == -1) {
          iVar30 = iVar30 + 1;
          bVar7 = FRigVMExtendedExecuteContext::IsValidArraySize(param_1,iVar30);
          if (!bVar7) break;
          pFVar17 = (FScriptContainerElement *)(puVar21 + 1);
          if (((local_280.Data <= pFVar17) &&
              (pFVar17 < local_280.Data + (longlong)local_278._4_4_ * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = (int)local_278;
          if ((int)local_278 == local_278._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_280,(int *)((longlong)&local_278 + 4));
          }
          local_278 = CONCAT44(local_278._4_4_,iVar10 + 1);
          *(uint *)(local_280.Data + (longlong)iVar10 * 4) = *(uint *)pFVar17;
        }
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 & ~uStack_1cc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1d8 + 8));
        bVar7 = TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!=
                          ((TRangedForConstIterator *)local_1d8,&local_158);
      } while (bVar7);
    }
    iVar10 = 0;
    local_228 = pFVar2->ArrayDim * pFVar2->ElementSize;
    _uStack_224 = CONCAT31(uStack_223,1);
    uVar9 = (local_2a0.field1_0x8.FreezableArray)->ArrayNum;
    if (local_228 == 0) {
      bVar5 = true;
      bVar7 = true;
    }
    else {
      uVar28 = uVar9;
      if ((int)uVar9 < 0) {
        uVar28 = -uVar9;
      }
      uVar32 = local_228;
      if ((int)local_228 < 0) {
        uVar32 = -local_228;
      }
      uVar24 = (uint)(byte)((byte)(uVar9 >> 0x1f) ^ 1);
      if (-1 < (int)local_228) {
        uVar24 = uVar9 >> 0x1f;
      }
      if ((uVar24 + 0x7fffffff) / uVar32 < uVar28) {
        bVar5 = false;
        iVar10 = 0;
        bVar7 = false;
      }
      else {
        bVar5 = true;
        iVar10 = uVar9 * local_228;
        bVar7 = true;
      }
    }
    bVar8 = FRigVMExtendedExecuteContext::IsValidArraySize(param_1,iVar30);
    if ((bVar8) && (bVar7)) {
      local_270.Data = (FScriptContainerElement *)0x0;
      uVar9 = (uint)local_1f8;
      local_268[0] = 0;
      local_268[1] = 0;
      iVar30 = 0;
      if (bVar5) {
        iVar30 = iVar10;
      }
      uVar28 = (local_2a0.field1_0x8.FreezableArray)->ArrayNum;
      uVar26 = (ulonglong)uVar28;
      iVar10 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (uVar9,uVar9,iVar30,&local_270,local_268,local_268 + 1);
      FVar22.Data = local_270.Data;
      memset(local_270.Data + iVar10,0,(longlong)iVar30);
      if (0 < (int)uVar28) {
        iVar30 = pFVar2->ElementSize;
        lVar25 = 0;
        iVar10 = pFVar2->ArrayDim;
        uVar31 = (ulonglong)uVar28;
        do {
          if (((uint)(int)pFVar2->PropertyFlags >> 9 & 1) == 0) {
            (**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,FVar22.Data);
          }
          else {
            memset(FVar22.Data,0,(longlong)iVar30 * (longlong)iVar10);
          }
          if ((local_2a0.field1_0x8.FreezableArray)->ArrayNum == 0) {
            pFVar17 = (FScriptContainerElement *)0x0;
          }
          else {
            uVar23 = (local_2a0.field1_0x8.FreezableArray)->_padding_;
            if (((local_2a0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar23 & 1) != 0))
            {
              uVar23 = (longlong)&(local_2a0.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar23 >> 0x18);
            }
            pFVar17 = (FScriptContainerElement *)(local_2a0.ElementSize * lVar25 + uVar23);
          }
          if (FVar22.Data != pFVar17) {
            if (((uint)(int)pFVar2->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,FVar22.Data,pFVar17,pFVar2->ArrayDim);
            }
            else {
              memcpy(FVar22.Data,pFVar17,(longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim)
              ;
            }
          }
          iVar10 = pFVar2->ArrayDim;
          lVar25 = lVar25 + 1;
          iVar30 = pFVar2->ElementSize;
          FVar22.Data = FVar22.Data + iVar10 * iVar30;
          uVar31 = uVar31 - 1;
        } while (uVar31 != 0);
      }
      uVar32 = (local_2a0.field1_0x8.FreezableArray)->ArrayNum;
      uVar31 = (ulonglong)uVar32;
      if ((int)uVar32 < 0) {
        FScriptArrayHelper::AddValues(&local_2a0,-uVar32);
      }
      else if (0 < (int)uVar32) {
        if (((local_2a0.field1_0x8.FreezableArray)->ArrayNum < (int)uVar32) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index + Count <= Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1128,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((local_2a0.InnerProperty)->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) ==
            CPF_None) {
          pFVar18 = local_2a0.InnerProperty;
          if ((local_2a0.field1_0x8.FreezableArray)->ArrayNum == 0) {
            uVar23 = 0;
          }
          else {
            uVar23 = (local_2a0.field1_0x8.FreezableArray)->_padding_;
            if (((local_2a0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar23 & 1) != 0))
            {
              uVar23 = (longlong)&(local_2a0.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar23 >> 0x18);
            }
          }
          do {
            if ((pFVar18->PropertyFlags & CPF_NoDestructor) == CPF_None) {
              (**(code **)(pFVar18->_padding_ + 0x138))(pFVar18,uVar23);
              pFVar18 = local_2a0.InnerProperty;
            }
            uVar23 = uVar23 + (longlong)local_2a0.ElementSize;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        local_1e8.__this = &local_2a0;
        local_1e8.Index = 0;
        local_1e8.Count = uVar32;
        FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                  (&local_2a0,&local_1e8);
      }
      uVar32 = local_c0;
      iVar30 = 0;
      iVar10 = 0;
      TStack_1a0.CurrentBitIndex = 0;
      if (local_c0 != 0) {
        puVar21 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar21 = local_c8;
        }
        uVar24 = *puVar21;
        while (uVar24 == 0) {
          lVar25 = (longlong)iVar30;
          iVar10 = iVar10 + 0x20;
          iVar30 = iVar30 + 1;
          TStack_1a0.CurrentBitIndex = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_14a19c193;
          uVar24 = (puVar21 + 1)[lVar25];
        }
        uVar9 = -uVar24 & uVar24;
        uVar31 = (ulonglong)uVar9 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_200 = (int)lVar25;
        TStack_1a0.CurrentBitIndex = iVar10 + -1 + local_200;
        if ((int)local_c0 < TStack_1a0.CurrentBitIndex) {
          TStack_1a0.CurrentBitIndex = local_c0;
        }
      }
LAB_14a19c193:
      local_260 = (longlong *)local_e8;
      pTStack_250 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      uVar24 = local_c0 & 0xffffffe0;
      local_238 = local_e8._8_4_ - local_b4;
      uStack_248 = CONCAT44(TStack_1a0.CurrentBitIndex,0xffffffff);
      uStack_258 = CONCAT44(uVar9,iVar30);
      uStack_240 = CONCAT44(local_ec,iVar10);
      TStack_1a0._padding_ = uStack_258;
      iVar30 = (int)local_c0 >> 5;
      uStack_180 = CONCAT44(uStack_234,local_238);
      bVar16 = (byte)local_c0;
      TStack_1a0.UnvisitedBitMask = 0xffffffff;
      TStack_1a0._24_8_ = uStack_240;
      local_1a8 = local_260;
      TStack_1a0.Array = pTStack_250;
      if (((int)local_c0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar22.Data = local_270.Data;
      if (uVar32 != local_c0) {
        puVar21 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar21 = local_c8;
        }
        uVar9 = -1 << (bVar16 & 0x1f) & puVar21[iVar30];
        while (uVar9 == 0) {
          lVar25 = (longlong)iVar30;
          uVar24 = uVar24 + 0x20;
          iVar30 = iVar30 + 1;
          uVar32 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_14a19c2b3;
          uVar9 = (puVar21 + 1)[lVar25];
        }
        uVar31 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_1fc = (int)lVar25;
        uVar32 = (uVar24 - 1) + local_1fc;
        if ((int)local_c0 < (int)uVar32) {
          uVar32 = local_c0;
        }
      }
LAB_14a19c2b3:
      while( true ) {
        plVar6 = local_1a8;
        if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
          local_2a8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
        }
        lVar25 = (longlong)TStack_1a0.CurrentBitIndex;
        if (((TStack_1a0.CurrentBitIndex == uVar32) &&
            (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (plVar6 == (longlong *)local_e8)) break;
        lVar3 = *plVar6;
        iVar10 = (local_2a0.field1_0x8.FreezableArray)->ArrayNum;
        iVar30 = iVar10 + 1;
        (local_2a0.field1_0x8.FreezableArray)->ArrayNum = iVar30;
        if ((local_2a0.ArrayFlags & UsesMemoryImageAllocator) == None) {
          if ((local_2a0.field1_0x8.FreezableArray)->ArrayMax < iVar30) {
            TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                      ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                       local_2a0.field1_0x8.HeapArray,iVar10,local_2a0.ElementSize,
                       local_2a0.ElementAlignment);
          }
        }
        else if ((local_2a0.field1_0x8.FreezableArray)->ArrayMax < iVar30) {
          TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                    (local_2a0.field1_0x8.FreezableArray,iVar10,local_2a0.ElementSize,
                     local_2a0.ElementAlignment);
        }
        if ((local_2a0.field1_0x8.FreezableArray)->ArrayNum == 0) {
          pvVar29 = (void *)0x0;
        }
        else {
          uVar31 = (local_2a0.field1_0x8.FreezableArray)->_padding_;
          if (((local_2a0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar31 & 1) != 0)) {
            uVar31 = (longlong)&(local_2a0.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar31 >> 0x18);
          }
          pvVar29 = (void *)((longlong)iVar10 * (longlong)local_2a0.ElementSize + uVar31);
        }
        if (((uint)(int)(local_2a0.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
          (**(code **)((local_2a0.InnerProperty)->_padding_ + 0x150))();
        }
        else {
          memset(pvVar29,0,(longlong)local_2a0.ElementSize);
        }
        if ((local_2a0.field1_0x8.FreezableArray)->ArrayNum == 0) {
          puVar14 = (uchar *)0x0;
        }
        else {
          uVar31 = (local_2a0.field1_0x8.FreezableArray)->_padding_;
          if (((local_2a0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar31 & 1) != 0)) {
            uVar31 = (longlong)&(local_2a0.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar31 >> 0x18);
          }
          puVar14 = (uchar *)((longlong)iVar10 * (longlong)local_2a0.ElementSize + uVar31);
        }
        URigVMMemoryStorage::CopyProperty
                  (pFVar2,puVar14,pFVar2,
                   (uchar *)(FVar22.Data +
                            *(int *)(lVar25 * 0x10 + lVar3 + 4) * pFVar2->ArrayDim *
                            pFVar2->ElementSize));
        TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      }
      if (0 < (int)uVar28) {
        do {
          if ((pFVar2->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            (**(code **)(pFVar2->_padding_ + 0x138))(pFVar2,FVar22.Data);
          }
          FVar22.Data = FVar22.Data + pFVar2->ArrayDim * pFVar2->ElementSize;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      pFVar18 = local_1f0;
      iVar30 = (int)local_278;
      uVar26 = (ulonglong)(int)local_278;
      pFVar17 = local_280.Data + uVar26 * 4;
      FVar27.Data = local_280.Data;
      while( true ) {
        if ((int)uVar26 != iVar30) {
          local_2a7[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2a7);
        }
        if (FVar27.Data == pFVar17) break;
        iVar10 = (local_2a0.field1_0x8.FreezableArray)->ArrayNum;
        iVar11 = iVar10 + 1;
        (local_2a0.field1_0x8.FreezableArray)->ArrayNum = iVar11;
        if ((local_2a0.ArrayFlags & UsesMemoryImageAllocator) == None) {
          if ((local_2a0.field1_0x8.FreezableArray)->ArrayMax < iVar11) {
            TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                      ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                       local_2a0.field1_0x8.HeapArray,iVar10,local_2a0.ElementSize,
                       local_2a0.ElementAlignment);
          }
        }
        else if ((local_2a0.field1_0x8.FreezableArray)->ArrayMax < iVar11) {
          TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                    (local_2a0.field1_0x8.FreezableArray,iVar10,local_2a0.ElementSize,
                     local_2a0.ElementAlignment);
        }
        if ((local_2a0.field1_0x8.FreezableArray)->ArrayNum == 0) {
          pvVar29 = (void *)0x0;
        }
        else {
          uVar26 = (local_2a0.field1_0x8.FreezableArray)->_padding_;
          if (((local_2a0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar26 & 1) != 0)) {
            uVar26 = (longlong)&(local_2a0.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar26 >> 0x18);
          }
          pvVar29 = (void *)((longlong)local_2a0.ElementSize * (longlong)iVar10 + uVar26);
        }
        if (((uint)(int)(local_2a0.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
          (**(code **)((local_2a0.InnerProperty)->_padding_ + 0x150))
                    (local_2a0.InnerProperty,pvVar29);
        }
        else {
          memset(pvVar29,0,(longlong)local_2a0.ElementSize);
        }
        if ((local_178.field1_0x8.FreezableArray)->ArrayNum == 0) {
          puVar14 = (uchar *)0x0;
        }
        else {
          puVar19 = (undefined1 *)(local_178.field1_0x8.FreezableArray)->_padding_;
          if (((local_178.ArrayFlags & UsesMemoryImageAllocator) != None) &&
             (((ulonglong)puVar19 & 1) != 0)) {
            puVar19 = &(local_178.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar19 >> 0x18);
          }
          puVar14 = puVar19 + (longlong)local_178.ElementSize * (longlong)(int)*(uint *)FVar27.Data;
        }
        if ((local_2a0.field1_0x8.FreezableArray)->ArrayNum == 0) {
          puVar20 = (uchar *)0x0;
        }
        else {
          uVar26 = (local_2a0.field1_0x8.FreezableArray)->_padding_;
          if (((local_2a0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar26 & 1) != 0)) {
            uVar26 = (longlong)&(local_2a0.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar26 >> 0x18);
          }
          puVar20 = (uchar *)((longlong)local_2a0.ElementSize * (longlong)iVar10 + uVar26);
        }
        URigVMMemoryStorage::CopyProperty(pFVar2,puVar20,pFVar18,puVar14);
        FVar27.Data = FVar27.Data + 4;
        uVar26 = local_278 & 0xffffffff;
      }
      if (local_270.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data);
      }
    }
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
  }
  return;
}

