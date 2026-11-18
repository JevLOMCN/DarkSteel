// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// ~FRigVMNodeLayout @ 14a07bed0

void __thiscall FRigVMNodeLayout::~FRigVMNodeLayout(FRigVMNodeLayout *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->DisplayNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DisplayNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DisplayNames);
  *(undefined4 *)&(this->PinIndexInCategory).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PinIndexInCategory).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PinIndexInCategory);
  DestructItems<FRigVMPinCategory,int>
            ((FRigVMPinCategory *)(this->Categories).AllocatorInstance.Data,
             (this->Categories).ArrayNum);
  pFVar2 = (this->Categories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticStruct @ 14a0acdc0

UScriptStruct * __cdecl FRigVMNodeLayout::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMNodeLayout,(UObject *)pUVar1,
                         L"RigVMNodeLayout");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMNodeLayout.OuterSingleton;
}

// operator= @ 14a0c5630

FRigVMNodeLayout * __thiscall
FRigVMNodeLayout::operator=(FRigVMNodeLayout *this,FRigVMNodeLayout *param_1)

{
  int *piVar1;
  int iVar2;
  FRigVMPinCategory *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigVMPinCategory,int>
              ((FRigVMPinCategory *)(this->Categories).AllocatorInstance.Data,
               (this->Categories).ArrayNum);
    iVar2 = (param_1->Categories).ArrayNum;
    piVar1 = &(this->Categories).ArrayMax;
    pFVar3 = (FRigVMPinCategory *)(param_1->Categories).AllocatorInstance.Data;
    (this->Categories).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FRigVMPinCategory,FRigVMPinCategory,int>
                ((this->Categories).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&this->PinIndexInCategory,
            (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&param_1->PinIndexInCategory);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->DisplayNames,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->DisplayNames);
  return this;
}

// FindCategory @ 14a0d85b0

FString * __thiscall FRigVMNodeLayout::FindCategory(FRigVMNodeLayout *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Categories).ArrayNum;
  pFVar6 = (this->Categories).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  do {
    if ((this->Categories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMPinCategory_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return (FString *)0x0;
    }
    pFVar5 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6[0x10].field_0x0)->
             AllocatorInstance).Data;
    pFVar7 = pFVar5 + (longlong)*(int *)(pFVar6 + 0x18) * 0x10;
    for (; pFVar5 != pFVar7; pFVar5 = pFVar5 + 0x10) {
      iVar4 = *(int *)(pFVar5 + 8);
      iVar3 = (param_1->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return (FString *)pFVar6;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar4 + iVar3 == 1;
      }
      if (bVar8) {
        return (FString *)pFVar6;
      }
    }
    pFVar6 = pFVar6 + 0x28;
  } while( true );
}

// FindDisplayName @ 14a0d8a80

FString * __thiscall FRigVMNodeLayout::FindDisplayName(FRigVMNodeLayout *this,FString *param_1)

{
  FString *pFVar1;
  
  pFVar1 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->DisplayNames,param_1);
  return pFVar1;
}

// IsValid @ 14a0f9f60

bool __thiscall FRigVMNodeLayout::IsValid(FRigVMNodeLayout *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Categories).ArrayNum;
  pFVar3 = (this->Categories).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Categories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMPinCategory_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)(pFVar3 + 0x18) != 0) {
      return true;
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return false;
}

