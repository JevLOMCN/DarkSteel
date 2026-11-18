// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a127ec0

UScriptStruct * __cdecl FRigVMDispatch_ArrayInsert::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInsert.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInsert.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayInsert,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayInsert");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInsert.OuterSingleton;
}

// GetOpCode @ 14a127f00

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArrayInsert::GetOpCode(FRigVMDispatch_ArrayInsert *this)

{
  return ArrayInsert;
}

// GetDispatchFunctionImpl @ 14a127fa0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayInsert::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayInsert *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// FRigVMDispatch_ArrayInsert @ 14a18b150

FRigVMDispatch_ArrayInsert * __thiscall
FRigVMDispatch_ArrayInsert::FRigVMDispatch_ArrayInsert(FRigVMDispatch_ArrayInsert *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined ***)this = &___7FRigVMDispatch_ArraySetAtIndex__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetAtIndex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetAtIndex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArraySetAtIndex,(UObject *)pUVar1,
                         L"RigVMDispatch_ArraySetAtIndex");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArraySetAtIndex.OuterSingleton;
  *(undefined ***)this = &___7FRigVMDispatch_ArrayInsert__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInsert.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInsert.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayInsert,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayInsert");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayInsert.OuterSingleton;
  return this;
}

// Execute @ 14a199b00

void __cdecl
FRigVMDispatch_ArrayInsert::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  EArrayPropertyFlags EVar1;
  FScriptArrayHelper_u_8 FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  FProperty *pFVar8;
  undefined1 *puVar9;
  FProperty *pFVar10;
  int iVar11;
  FProperty *pFVar12;
  FScriptArrayHelper *local_48;
  int local_40;
  undefined4 local_3c;
  FScriptArrayHelper local_38;
  
  pFVar10 = (FProperty *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = param_2->DataPtr->Property;
  if (((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar10,
        bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar1 = (EArrayPropertyFlags)pFVar12[1]._padding_;
  FVar2 = *(FScriptArrayHelper_u_8 *)param_2->DataPtr;
  local_38.ElementAlignment = (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
  local_38.InnerProperty = (FProperty *)pFVar12[1]._padding_;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = FVar2;
  local_38.ArrayFlags = EVar1;
  if ((local_38.ElementSize < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = param_2->ArrayNum;
  if ((iVar5 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar11 = *(int *)param_2->DataPtr[1].Ptr;
  if ((iVar5 < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  bVar4 = FRigVMExtendedExecuteContext::IsValidArraySize
                    (param_1,(local_38.field1_0x8.FreezableArray)->ArrayNum + 1);
  if (bVar4) {
    if (iVar11 < 0) {
      iVar11 = iVar11 + (local_38.field1_0x8.FreezableArray)->ArrayNum;
    }
    iVar5 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
    if (iVar11 < (local_38.field1_0x8.FreezableArray)->ArrayNum) {
      iVar5 = iVar11;
    }
    iVar11 = 0;
    if (0 < iVar5) {
      iVar11 = iVar5;
    }
    if (((iVar11 < 0) || ((local_38.field1_0x8.FreezableArray)->ArrayNum < iVar11)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index <= Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x110b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_48 = &local_38;
    local_3c = 1;
    local_40 = iVar11;
    FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::InsertValues_::__l2::<lambda_1>_>
              (&local_38,(<lambda_1> *)&local_48);
    FScriptArrayHelper::ConstructItems(&local_38,iVar11,1);
    if ((local_38.field1_0x8.FreezableArray)->ArrayNum != 0) {
      puVar9 = (undefined1 *)(local_38.field1_0x8.FreezableArray)->_padding_;
      if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) &&
         (((ulonglong)puVar9 & 1) != 0)) {
        puVar9 = &(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar9 >> 0x18);
      }
      pFVar10 = (FProperty *)(puVar9 + (longlong)local_38.ElementSize * (longlong)iVar11);
    }
    pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,2);
    if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
      pFVar8 = pFVar7->Property;
    }
    else {
      pFVar8 = FRigVMPropertyPath::GetTailProperty(pFVar7->PropertyPath);
    }
    URigVMMemoryStorage::CopyProperty
              ((FProperty *)pFVar12[1]._padding_,(uchar *)pFVar10,pFVar8,puVar6);
  }
  return;
}

