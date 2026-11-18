// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a129420

UScriptStruct * __cdecl FRigVMDispatch_ArrayReverse::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReverse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReverse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayReverse,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayReverse");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReverse.OuterSingleton;
}

// GetOpCode @ 14a1294c0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMDispatch_ArrayReverse::GetOpCode(FRigVMDispatch_ArrayReverse *this)

{
  return ArrayReverse;
}

// GetDispatchFunctionImpl @ 14a129570

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatch_ArrayReverse::GetDispatchFunctionImpl
          (FRigVMDispatch_ArrayReverse *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return Execute;
}

// FRigVMDispatch_ArrayReverse @ 14a18b290

FRigVMDispatch_ArrayReverse * __thiscall
FRigVMDispatch_ArrayReverse::FRigVMDispatch_ArrayReverse(FRigVMDispatch_ArrayReverse *this)

{
  UPackage *pUVar1;
  
  FRigVMDispatchFactory::FRigVMDispatchFactory((FRigVMDispatchFactory *)this);
  *(undefined ***)this = &___7FRigVMDispatch_ArrayReset__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayReset,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayReset");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReset.OuterSingleton;
  *(undefined ***)this = &___7FRigVMDispatch_ArrayReverse__6B_;
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReverse.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReverse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_ArrayReverse,(UObject *)pUVar1,
                         L"RigVMDispatch_ArrayReverse");
  }
  *(UScriptStruct **)&this->field_0x28 =
       Z_Registration_Info_UScriptStruct_FRigVMDispatch_ArrayReverse.OuterSingleton;
  return this;
}

// Execute @ 14a19b280

void __cdecl
FRigVMDispatch_ArrayReverse::Execute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  FProperty *pFVar11;
  FProperty *pFVar12;
  ulong64 uVar13;
  
  pFVar11 = (FProperty *)0x0;
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = param_2->DataPtr->Property;
  if (((pFVar12 == (FProperty *)0x0) || ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar11,
        bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar4 = pFVar12[1]._padding_;
  puVar1 = (ulonglong *)param_2->DataPtr->Ptr;
  (**(code **)(*(longlong *)pFVar12[1]._padding_ + 0x168))();
  lVar2 = pFVar12[1]._padding_;
  iVar9 = *(int *)(lVar2 + 0x34);
  uVar13 = (ulong64)iVar9;
  if ((iVar9 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = (int)puVar1[1] + -1;
  if (0 < iVar9) {
    do {
      iVar10 = (int)pFVar11;
      if ((lVar4 & 1) == 0) {
        pvVar7 = (void *)((longlong)iVar10 * uVar13 + *puVar1);
        pvVar8 = (void *)((longlong)iVar9 * uVar13 + *puVar1);
      }
      else {
        uVar6 = *puVar1;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)puVar1;
        }
        pvVar7 = (void *)(uVar6 + (longlong)iVar10 * uVar13);
        pvVar8 = (void *)(uVar13 * (longlong)iVar9 + uVar6);
      }
      FGenericPlatformMemory::Memswap(pvVar7,pvVar8,uVar13);
      pFVar11 = (FProperty *)(ulonglong)(iVar10 + 1U);
      iVar9 = iVar9 + -1;
    } while ((int)(iVar10 + 1U) < iVar9);
  }
  return;
}

