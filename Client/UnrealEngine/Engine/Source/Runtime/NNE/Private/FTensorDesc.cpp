// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 1

// Make @ 1436ead30

FTensorDesc * __cdecl
UE::NNE::FTensorDesc::Make
          (FTensorDesc *__return_storage_ptr__,FString *param_1,FSymbolicTensorShape *param_2,
          ENNETensorDataType param_3)

{
  int *piVar1;
  FSymbolicTensorShape *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FTensorDesc *pFVar7;
  ForElementType<int> FVar8;
  
  piVar1 = &(__return_storage_ptr__->Shape).Data.ArrayMax;
  (__return_storage_ptr__->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Name).Data.ArrayNum = 0;
  (__return_storage_ptr__->Name).Data.ArrayMax = 0;
  (__return_storage_ptr__->Shape).Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->Shape).Data.ArrayNum = 0;
  *piVar1 = 8;
  ::FString::operator=(&__return_storage_ptr__->Name,param_1);
  __return_storage_ptr__->DataType = param_3;
  if (8 < (param_2->Data).ArrayNum) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OtherShape.Rank() <= MaxRank",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NNE\\Private\\NNETypes.cpp"
                       ,0x33,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FTensorDesc *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar2 = &__return_storage_ptr__->Shape;
  if (pFVar2 != param_2) {
    FVar8 = (param_2->Data).AllocatorInstance.SecondaryData;
    iVar3 = (param_2->Data).ArrayNum;
    iVar4 = *piVar1;
    if (FVar8 != (ForElementType<int>)0x0) {
      param_2 = (FSymbolicTensorShape *)FVar8;
    }
    (__return_storage_ptr__->Shape).Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 8;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,iVar3,iVar4,(ForElementType<int> *)pFVar2,iVar3,piVar1);
      FVar8 = (__return_storage_ptr__->Shape).Data.AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (FVar8 == (ForElementType<int>)0x0) {
          FVar8 = (ForElementType<int>)pFVar2;
        }
        memcpy((void *)FVar8,param_2,(longlong)iVar3 << 2);
      }
    }
  }
  return __return_storage_ptr__;
}

