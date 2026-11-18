// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGAttributePropertySelectorAccessor @ 149e34fe0

FPCGAttributePropertySelectorAccessor * __thiscall
FPCGAttributePropertySelectorAccessor::FPCGAttributePropertySelectorAccessor
          (FPCGAttributePropertySelectorAccessor *this,FStructProperty *param_1,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FPCGAttributePropertySelectorAccessor *pFVar7;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__IPCGAttributeAccessorT_VFPCGAttributePropertySelectorAccessor____6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 9;
  IPCGPropertyChain::IPCGPropertyChain
            ((IPCGPropertyChain *)&this->_padding_,(FProperty *)param_1,param_2);
  this->Property = param_1;
  this->_padding_ =
       (longlong)&_vftable__for__IPCGAttributeAccessorT<FPCGAttributePropertySelectorAccessor>__;
  this->_padding_ = (longlong)&_vftable__for__IPCGPropertyChain__;
  if ((param_1 != (FStructProperty *)0x0) &&
     (pUVar2 = (param_1->Struct).field0_0x0.DebugPtr, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector,(UObject *)pUVar6
                           ,L"PCGAttributePropertySelector");
    }
    lVar3 = pUVar2->_padding_;
    iVar1 = *(int *)((Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton
                     )->_padding_ + 0x38);
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        (Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton)->_padding_
        + 0x30)) {
      return this;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5221889764680007226>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPropertyAccessor.h"
                     ,0x1c6,
                     "InProperty && InProperty->Struct && InProperty->Struct->IsA(FPCGAttributePropertySelector::StaticStruct()->GetClass())"
                    );
  if (!bVar5) {
    return this;
  }
  pcVar4 = (code *)swi(3);
  pFVar7 = (FPCGAttributePropertySelectorAccessor *)(*pcVar4)();
  return pFVar7;
}

// SetRangeImpl @ 149ea5970

bool __thiscall
FPCGAttributePropertySelectorAccessor::SetRangeImpl
          (FPCGAttributePropertySelectorAccessor *this,TArrayView<FString_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  FScriptContainerElement *local_38;
  TArrayView<void_*,int> local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_48,param_2,param_1->ArrayNum,param_3);
  if (local_48.ArrayNum == 0) {
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    return false;
  }
  local_38 = local_48.AllocatorInstance.Data;
  if ((local_48.ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_28.DataPtr = (void **)local_38;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_28);
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = param_1->DataPtr;
      uVar5 = 0;
      if ((int)uVar7 < local_48.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FPCGAttributePropertySelector::Update
                (*(FPCGAttributePropertySelector **)(local_48.AllocatorInstance.Data + lVar8),
                 pFVar1 + (int)uVar7);
      iVar6 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

