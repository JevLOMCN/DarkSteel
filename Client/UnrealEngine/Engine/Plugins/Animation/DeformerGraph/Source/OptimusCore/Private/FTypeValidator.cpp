// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// CheckLeaf @ 14e181c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EOptimusDataTypeUsageFlags __thiscall
`FOptimusDataTypeRegistry::GetStructTypeUsageFlag'::__l2::FTypeValidator::CheckLeaf
          (void *this,FProperty *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  EOptimusDataTypeUsageFlags EVar4;
  FOptimusDataTypeRegistry *pFVar5;
  FFieldClass *pFVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar5 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::FindType(pFVar5,&local_58,param_1);
  if (local_58.Object != (FOptimusDataType *)0x0) {
    pFVar6 = FBoolProperty::StaticClass();
    FVar1 = pFVar6->Name;
    if (local_58.Object == (FOptimusDataType *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    if ((local_58.Object)->TypeName != FVar1) {
      pFVar5 = FOptimusDataTypeRegistry::Get();
      FOptimusDataTypeRegistry::FindPropertyValueConvertFunc
                (pFVar5,(TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                         *)local_48,(local_58.Object)->TypeName);
      if (local_48._0_8_ != 0) {
        EVar4 = (local_58.Object)->UsageFlags & *(EOptimusDataTypeUsageFlags *)((longlong)this + 1);
        plVar7 = (longlong *)(local_48 + 0x10);
        if ((longlong *)local_48._40_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_48._40_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
        goto LAB_14e181cdb;
      }
    }
  }
  EVar4 = None;
LAB_14e181cdb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return EVar4;
}

// WalkArray @ 14e230ba0

EOptimusDataTypeUsageFlags __thiscall
`FOptimusDataTypeRegistry::GetStructTypeUsageFlag'::__l2::FTypeValidator::WalkArray
          (void *this,FArrayProperty *param_1)

{
  FArrayProperty *pFVar1;
  EOptimusDataTypeUsageFlags EVar2;
  
  *(byte *)((longlong)this + 1) = *(byte *)((longlong)this + 1) & 0xfe;
  if (*(char *)this != '\0') {
    return None;
  }
  *(undefined1 *)this = 0;
  pFVar1 = (FArrayProperty *)param_1->Inner;
  if (pFVar1 != (FArrayProperty *)0x0) {
    if ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      EVar2 = WalkStruct(this,*(UScriptStruct **)&pFVar1->ArrayFlags);
      goto LAB_14e230bff;
    }
    if ((pFVar1 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      EVar2 = WalkArray(this,pFVar1);
      goto LAB_14e230bff;
    }
  }
  EVar2 = CheckLeaf(this,(FProperty *)pFVar1);
LAB_14e230bff:
  if (EVar2 == None) {
    return None;
  }
  return *(EOptimusDataTypeUsageFlags *)((longlong)this + 1);
}

// WalkStruct @ 14e231320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EOptimusDataTypeUsageFlags __thiscall
`FOptimusDataTypeRegistry::GetStructTypeUsageFlag'::__l2::FTypeValidator::WalkStruct
          (void *this,UScriptStruct *param_1)

{
  int iVar1;
  FArrayProperty *pFVar2;
  undefined8 uVar3;
  uint uVar4;
  UScriptStruct *pUVar5;
  FOptimusDataTypeRegistry *pFVar6;
  UClass *pUVar7;
  ICppStructOps *pIVar8;
  ForElementType<FSetElementId> FVar9;
  EOptimusDataTypeUsageFlags EVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  FArrayProperty *pFStack_e8;
  undefined4 local_e0;
  undefined2 uStack_dc;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  FName local_d8;
  undefined8 local_d0;
  TSharedPtr<FOptimusDataType_const_,1> local_c8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_b8;
  undefined1 local_68 [16];
  ICppStructOps local_58;
  ICppStructOps *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar5 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  if (param_1 == pUVar5) {
    return None;
  }
  pFVar6 = FOptimusDataTypeRegistry::Get();
  FOptimusDataTypeRegistry::FindType(pFVar6,&local_c8,param_1);
  if (local_c8.Object == (FOptimusDataType *)0x0) {
    if ((FArrayProperty *)param_1->_padding_ != (FArrayProperty *)0x0) {
      local_b8.Elements._0_8_ = 0;
      local_b8.Elements._8_8_ = 0;
      local_b8.Elements._32_8_ = 0;
      local_b8.Elements._40_4_ = 0;
      local_b8.Elements._52_4_ = 0;
      local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_b8.HashSize = 0;
      uStack_da = 0;
      local_b8.Elements._44_4_ = 0x80;
      local_b8.Elements._48_4_ = 0xffffffff;
      local_e0 = 0xffffffff;
      uStack_dc = 0x101;
      local_f8._8_8_ = param_1;
      pFStack_e8 = (FArrayProperty *)param_1->_padding_;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)(local_f8 + 8));
      local_58.FakeVPtr =
           (FStructOpsFakeVTable *)
           CONCAT17(uStack_d9,CONCAT16(uStack_da,CONCAT24(uStack_dc,local_e0)));
      local_68._0_8_ = local_f8._8_8_;
      pFVar2 = pFStack_e8;
      while (local_68._8_8_ = pFVar2, pFVar2 != (FArrayProperty *)0x0) {
        pUVar7 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar7->_padding_)) && (param_1 != (UScriptStruct *)0x0)) {
          Optimus::GetMemberPropertyShaderName((UScriptStruct *)local_f8,(FProperty *)param_1);
          uVar3 = local_f8._0_8_;
          local_d0 = local_f8._0_8_;
          uVar4 = ::GetTypeHash((FNameEntryId)(uint)local_f8._0_8_);
          if (local_b8.Elements._8_4_ != local_b8.Elements._52_4_) {
            FVar9 = (ForElementType<FSetElementId>)&local_b8.Hash;
            if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar9 = local_b8.Hash.SecondaryData;
            }
            for (iVar1 = *(int *)((longlong)FVar9 +
                                 (ulonglong)(local_b8.HashSize - 1U & local_d0._4_4_ + uVar4) * 4);
                iVar1 != -1; iVar1 = *(int *)(local_b8.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10))
            {
              if (*(longlong *)(local_b8.Elements._0_8_ + (longlong)iVar1 * 0x10) == uVar3)
              goto LAB_14e2315ec;
            }
          }
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    (&local_b8,&local_d8,(bool *)local_f8);
        }
        if (pFVar2 == (FArrayProperty *)0x0) {
LAB_14e23155c:
          EVar10 = CheckLeaf(this,(FProperty *)pFVar2);
        }
        else if ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x14 & 1) == 0) {
          if (((pFVar2 == (FArrayProperty *)0x0) ||
              ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x15 & 1) == 0)) ||
             (pFVar2 == (FArrayProperty *)0x0)) goto LAB_14e23155c;
          EVar10 = WalkArray(this,pFVar2);
        }
        else {
          if (pFVar2 == (FArrayProperty *)0x0) goto LAB_14e23155c;
          EVar10 = WalkStruct(this,*(UScriptStruct **)&pFVar2->ArrayFlags);
        }
        if (EVar10 == None) {
LAB_14e2315ec:
          EVar10 = None;
          goto LAB_14e231592;
        }
        local_68._8_8_ = pFVar2->_padding_;
        TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_68);
        pFVar2 = (FArrayProperty *)local_68._8_8_;
      }
      EVar10 = *(EOptimusDataTypeUsageFlags *)((longlong)this + 1);
LAB_14e231592:
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      goto LAB_14e2315bc;
    }
  }
  else {
    pFVar6 = FOptimusDataTypeRegistry::Get();
    FOptimusDataTypeRegistry::FindPropertyValueConvertFunc
              (pFVar6,(TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                       *)local_68,(local_c8.Object)->TypeName);
    if ((UScriptStruct *)local_68._0_8_ != (UScriptStruct *)0x0) {
      EVar10 = (local_c8.Object)->UsageFlags & *(EOptimusDataTypeUsageFlags *)((longlong)this + 1);
      pIVar8 = &local_58;
      if (local_40 != (ICppStructOps *)0x0) {
        pIVar8 = local_40;
      }
      (**(code **)&(pIVar8->FakeVPtr->Capabilities).HasSerializerObjectReferences)();
      goto LAB_14e2315bc;
    }
  }
  EVar10 = None;
LAB_14e2315bc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return EVar10;
}

