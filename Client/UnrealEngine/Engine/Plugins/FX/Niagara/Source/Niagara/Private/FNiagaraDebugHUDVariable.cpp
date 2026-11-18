// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 1492629f0

UScriptStruct * __cdecl FNiagaraDebugHUDVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable,(UObject *)pUVar1,
                         L"NiagaraDebugHUDVariable");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.OuterSingleton;
}

// BuildVariableString @ 1492860e0

FString * __cdecl
FNiagaraDebugHUDVariable::BuildVariableString
          (FString *__return_storage_ptr__,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDebugHUDVariable_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*pFVar5 != (FScriptContainerElement)0x0) {
      iVar6 = 0;
      iVar3 = *(int *)(pFVar5 + 0x10) + -1;
      if (*(int *)(pFVar5 + 0x10) == 0) {
        iVar3 = iVar6;
      }
      if (0 < iVar3) {
        iVar3 = (__return_storage_ptr__->Data).ArrayNum;
        iVar4 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar4 = iVar6;
        }
        if (0 < iVar4) {
          ::FString::AppendChars(__return_storage_ptr__,L",",1);
        }
        iVar3 = *(int *)(pFVar5 + 0x10) + -1;
        if (*(int *)(pFVar5 + 0x10) == 0) {
          iVar3 = iVar6;
        }
        ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)(pFVar5 + 8),iVar3);
      }
    }
    pFVar5 = pFVar5 + 0x18;
  }
  return __return_storage_ptr__;
}

// InitFromString @ 1492ac480

void __cdecl
FNiagaraDebugHUDVariable::InitFromString
          (FString *param_1,TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType _Src;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_38,L",",true);
  iVar4 = local_38.ArrayNum;
  pFVar7 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar6.Data = local_38.AllocatorInstance.Data;
LAB_1492ac4e8:
  do {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar6.Data == pFVar7) {
      DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x18;
    DefaultConstructItems<FNiagaraDebugHUDVariable,int>(pFVar3,1);
    pFVar1 = pFVar3 + 8;
    *pFVar3 = (FScriptContainerElement)0x1;
    if (pFVar1 != FVar6.Data) {
      iVar5 = *(int *)(FVar6.Data + 8);
      pFVar2 = pFVar3 + 0x14;
                    /* WARNING: Load size is inaccurate */
      _Src.Data = *FVar6.Data;
      *(int *)(pFVar3 + 0x10) = iVar5;
      if ((iVar5 == 0) && (*(int *)pFVar2 == 0)) {
        *(int *)pFVar2 = 0;
        FVar6.Data = FVar6.Data + 0x10;
        goto LAB_1492ac4e8;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,*(int *)pFVar2,(ForAnyElementType *)pFVar1,iVar5,(int *)pFVar2);
      if (iVar5 != 0) {
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar1,_Src.Data,(longlong)iVar5 * 2);
      }
    }
    FVar6.Data = FVar6.Data + 0x10;
  } while( true );
}

