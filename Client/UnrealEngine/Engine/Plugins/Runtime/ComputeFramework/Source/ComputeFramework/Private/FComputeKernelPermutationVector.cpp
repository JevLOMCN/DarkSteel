// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 5

// StaticStruct @ 1494bb1c0

UScriptStruct * __cdecl FComputeKernelPermutationVector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ComputeFramework();
    Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComputeKernelPermutationVector,(UObject *)pUVar1
                         ,L"ComputeKernelPermutationVector");
  }
  return Z_Registration_Info_UScriptStruct_FComputeKernelPermutationVector.OuterSingleton;
}

// AddPermutation @ 1494c90c0

void __thiscall
FComputeKernelPermutationVector::AddPermutation
          (FComputeKernelPermutationVector *this,FString *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined4 local_res18;
  
  if ((param_2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValues > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                         ,0xb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (param_1->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar9 = L"";
    iVar8 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  puVar7 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                       *)this,uVar6,param_1);
  if (*puVar7 == 0) {
    local_res18 = CONCAT22((short)param_2,(short)this->BitCount);
    *puVar7 = local_res18;
    uVar6 = 1;
    if (param_2 != 0) {
      uVar6 = param_2;
    }
    uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    this->BitCount = this->BitCount + (int)lVar3;
    if ((0x20 < this->BitCount) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BitCount <= 32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                           ,0x1d,L""), bVar5)) goto code_r0x0001494c91db;
  }
  else if (*puVar7 >> 0x10 != param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PermutationBits.NumValues == NumValues",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                       ,0x13,L"");
    if (!bVar5) {
      return;
    }
code_r0x0001494c91db:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// AddPermutationSet @ 1494c9200

void __thiscall
FComputeKernelPermutationVector::AddPermutationSet
          (FComputeKernelPermutationVector *this,FComputeKernelPermutationSet *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  int local_res20;
  
  iVar2 = (param_1->BooleanOptions).ArrayNum;
  pFVar10 = (param_1->BooleanOptions).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
  while( true ) {
    while( true ) {
      if ((param_1->BooleanOptions).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FComputeKernelPermutationBool_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar1) {
        return;
      }
      iVar8 = *(int *)(pFVar10 + 8) + -1;
      if (*(int *)(pFVar10 + 8) == 0) {
        pwVar9 = L"";
        iVar8 = 0;
      }
      else {
        pwVar9 = *(wchar_t **)pFVar10;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
      puVar7 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
               ::FindOrAddImpl<FString_const_&>
                         ((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                           *)this,uVar6,(FString *)pFVar10);
      if (*puVar7 == 0) break;
      if ((short)(*puVar7 >> 0x10) == 1) goto LAB_1494c930a;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationBits.NumValues == NumValues",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                         ,0x13,L"");
      if (bVar5) goto code_r0x0001494c9309;
      pFVar10 = pFVar10 + 0x18;
    }
    local_res18 = CONCAT22(1,(short)this->BitCount);
    *puVar7 = local_res18;
    for (lVar3 = 0x3f; 1UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    local_res20 = (int)lVar3;
    this->BitCount = this->BitCount + local_res20;
    if ((0x20 < this->BitCount) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("BitCount <= 32",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                           ,0x1d,L""), bVar5)) break;
LAB_1494c930a:
    pFVar10 = pFVar10 + 0x18;
  }
code_r0x0001494c9309:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetPermutationBits @ 1494d00f0

/* WARNING: Type propagation algorithm not settling */

uint __thiscall
FComputeKernelPermutationVector::GetPermutationBits
          (FComputeKernelPermutationVector *this,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  iVar4 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)this,uVar3,param_1);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)&this->Permutations;
    puVar7 = (uint *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (uint *)0x0;
    }
    if (puVar7 != (uint *)0x0) {
      uVar3 = *puVar7;
      if ((uVar3 >> 0x10 <= param_2) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6976506822765051954>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                             ,0x32,"Value < PermutationBits.NumValues"), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      return param_2 << ((byte)uVar3 & 0x1f);
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6976506822765051947>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                     ,0x2b,"PackedPermutationBits != nullptr");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// GetPermutationBits @ 1494d01f0

uint __thiscall
FComputeKernelPermutationVector::GetPermutationBits
          (FComputeKernelPermutationVector *this,FString *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  
  iVar3 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)this,param_2,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&this->Permutations;
    puVar6 = (uint *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      puVar6 = (uint *)0x0;
    }
    if (puVar6 != (uint *)0x0) {
      uVar4 = *puVar6;
      if (uVar4 >> 0x10 <= param_3) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6976506822765051954>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                           ,0x32,"Value < PermutationBits.NumValues");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
      }
      return param_3 << ((byte)uVar4 & 0x1f);
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6976506822765051947>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelPermutationVector.cpp"
                     ,0x2b,"PackedPermutationBits != nullptr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  return 0;
}

