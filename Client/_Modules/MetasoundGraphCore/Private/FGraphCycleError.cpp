// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FGraphCycleError @ 14ad39cc0

FGraphCycleError * __thiscall
Metasound::FGraphCycleError::FGraphCycleError
          (FGraphCycleError *this,TArrayView<Metasound::INode_const_*_const,int> *param_1,
          TArray<Metasound::FDataEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  ITextData *pIVar2;
  FDataEdge *pFVar3;
  code *pcVar4;
  INode **_Src;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FGraphCycleError *pFVar9;
  FText local_38;
  
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"MetasoundBuildError",L"GraphCycleError",L"Graph contains cycles.")
  ;
  *(undefined ***)this = &___7FBuildErrorBase_Metasound__6B_;
  uVar5 = ErrorType.Number;
  *(uint *)&this->field_0x8 = ErrorType.ComparisonIndex.Value;
  *(uint *)&this->field_0xc = uVar5;
  *(undefined8 *)&this->field_0x10 = 0;
  pIVar2 = (pFVar8->TextData).Reference;
  *(ITextData **)&this->field_0x10 = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  *(uint *)&this->field_0x18 = pFVar8->Flags;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  _Src = param_1->DataPtr;
  iVar1 = (int)*(undefined8 *)&param_1->ArrayNum;
  *(undefined ***)this = &___7FGraphCycleError_Metasound__6B_;
  if (((_Src == (INode **)0x0) && (iVar1 != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGraphCycleError *)(*pcVar4)();
    return pFVar9;
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,(ForAnyElementType *)&this->field_0x20,(int *)&this->field_0x28,
                     (int *)&this->field_0x2c);
  if (iVar1 != 0) {
    memcpy((void *)(*(longlong *)&this->field_0x20 + (longlong)iVar7 * 8),_Src,(longlong)iVar1 << 3)
    ;
  }
  iVar1 = param_2->ArrayNum;
  pFVar3 = (FDataEdge *)(param_2->AllocatorInstance).Data;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGraphCycleError *)(*pcVar4)();
    return pFVar9;
  }
  if (((pFVar3 == (FDataEdge *)0x0) && (iVar1 != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGraphCycleError *)(*pcVar4)();
    return pFVar9;
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar1,(ForAnyElementType *)&this->field_0x30,(int *)&this->field_0x38,
                     (int *)&this->field_0x3c);
  ConstructItems<Metasound::FDataEdge,Metasound::FDataEdge,int>
            ((void *)((longlong)iVar7 * 0x68 + *(longlong *)&this->field_0x30),pFVar3,iVar1);
  return this;
}

// ~FGraphCycleError @ 14ad3dc10

void __thiscall Metasound::FGraphCycleError::~FGraphCycleError(FGraphCycleError *this)

{
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  DestructItems<Metasound::FInputDataDestination,int>
            (*(FInputDataDestination **)&this->field_0x40,*(int *)&this->field_0x48);
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  DestructItems<Metasound::FDataEdge,int>
            (*(FDataEdge **)&this->field_0x30,*(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(longlong **)&this->field_0x10 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ad3d87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    return;
  }
  return;
}

