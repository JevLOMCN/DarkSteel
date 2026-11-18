// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 3

// CopyToEmpty<FAudioParameter,int> @ 14b2a3270

void __thiscall
TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::CopyToEmpty<FAudioParameter,int>
          (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this,FAudioParameter *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FAudioParameter,FAudioParameter,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// InsertUninitializedImpl @ 14b2b20f0

void __thiscall
TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FName,Metasound::MetasoundGeneratorPrivate::FParameterSetter>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// Pop @ 14b2b4c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FOperatorAndInputs * __thiscall
TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_>::Pop
          (TArray<Metasound::FOperatorAndInputs,TSizedDefaultAllocator<32>_> *this,
          FOperatorAndInputs *__return_storage_ptr__,EAllowShrinking param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FOperatorAndInputs *pFVar5;
  int iVar6;
  uint uVar7;
  
  if (this->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FOperatorAndInputs *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar6 = this->ArrayNum;
  pFVar2 = (this->AllocatorInstance).Data;
  (__return_storage_ptr__->Operator).Ptr = *(IOperator **)(pFVar2 + (longlong)iVar6 * 0x40 + -0x40);
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x40) = 0;
  FVar1 = pFVar2[(longlong)iVar6 * 0x40 + -0x38];
  (__return_storage_ptr__->Inputs).Bindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Inputs).bIsVertexInterfaceFrozen = (bool)FVar1;
  (__return_storage_ptr__->Inputs).Bindings.AllocatorInstance.Data =
       *(FScriptContainerElement **)(pFVar2 + (longlong)iVar6 * 0x40 + -0x30);
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x30) = 0;
  (__return_storage_ptr__->Inputs).Bindings.ArrayNum =
       *(int *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x28);
  (__return_storage_ptr__->Inputs).Bindings.ArrayMax =
       *(int *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x24);
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x28) = 0;
  (__return_storage_ptr__->Inputs).SubInterfaces.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Inputs).SubInterfaces.AllocatorInstance.Data =
       *(FScriptContainerElement **)(pFVar2 + (longlong)iVar6 * 0x40 + -0x20);
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x20) = 0;
  (__return_storage_ptr__->Inputs).SubInterfaces.ArrayNum =
       *(int *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x18);
  (__return_storage_ptr__->Inputs).SubInterfaces.ArrayMax =
       *(int *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x14);
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x18) = 0;
  (__return_storage_ptr__->RenderCost).Object =
       *(FGraphRenderCost **)(pFVar2 + (longlong)iVar6 * 0x40 + -0x10);
  (__return_storage_ptr__->RenderCost).SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar6 * 0x40 + -8);
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -8) = 0;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x40 + -0x10) = 0;
  uVar7 = this->ArrayNum - 1;
  pFVar5 = (FOperatorAndInputs *)((this->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x40);
  Metasound::FOperatorAndInputs::~FOperatorAndInputs(pFVar5);
  iVar6 = this->ArrayNum + ~uVar7;
  if (iVar6 != 0) {
    memmove(pFVar5,pFVar5 + 1,(longlong)iVar6 << 6);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return __return_storage_ptr__;
}

