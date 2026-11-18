// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGLinearColorAccessor @ 149e352e0

FPCGLinearColorAccessor * __thiscall
FPCGLinearColorAccessor::FPCGLinearColorAccessor
          (FPCGLinearColorAccessor *this,FStructProperty *param_1,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  FPCGLinearColorAccessor *pFVar4;
  bool bVar5;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__IPCGAttributeAccessorT_VFPCGLinearColorAccessor____6B_;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 6;
  IPCGPropertyChain::IPCGPropertyChain
            ((IPCGPropertyChain *)&this->_padding_,(FProperty *)param_1,param_2);
  this->Property = param_1;
  this->_padding_ = (longlong)&_vftable__for__IPCGAttributeAccessorT<FPCGLinearColorAccessor>__;
  this->_padding_ = (longlong)&_vftable__for__IPCGPropertyChain__;
  if ((param_1 != (FStructProperty *)0x0) &&
     ((param_1->Struct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pUVar3 = TBaseStructure<FLinearColor>::Get();
    pUVar1 = (param_1->Struct).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar5 = pUVar3 == (UScriptStruct *)0x0;
    }
    else {
      bVar5 = pUVar1 == pUVar3;
    }
    if (bVar5) {
      return this;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5221889764680007188>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Metadata\\Accessors\\PCGPropertyAccessor.h"
                     ,0x1ec,
                     "InProperty && InProperty->Struct && InProperty->Struct == TBaseStructure<FLinearColor>::Get()"
                    );
  if (!bVar5) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FPCGLinearColorAccessor *)(*pcVar2)();
  return pFVar4;
}

// GetRangeImpl @ 149e69400

bool __thiscall
FPCGLinearColorAccessor::GetRangeImpl
          (FPCGLinearColorAccessor *this,TArrayView<UE::Math::TVector4<double>,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  TVector4<double> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  TArray<void_const_*,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<void_const_*,int> local_58 [4];
  
  PCGPropertyAccessor::GetContainerKeys(&local_78,param_2,param_1->ArrayNum,param_3);
  uVar14 = local_78._8_8_;
  iVar13 = local_78.ArrayNum;
  if (iVar13 == 0) {
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return false;
  }
  local_68 = local_78.AllocatorInstance.Data;
  if ((iVar13 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_58[0]._12_4_ = uStack_5c;
  local_58[0].ArrayNum = iVar13;
  local_58[0].DataPtr = (void **)local_68;
  iStack_60 = iVar13;
  PCGPropertyAccessor::AddressOffset<void_const_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_58);
  uVar11 = 0;
  if (0 < param_1->ArrayNum) {
    lVar12 = 0;
    lVar15 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (int)uVar14) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pfVar3 = *(float **)(local_78.AllocatorInstance.Data + lVar15);
      uVar10 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      fVar1 = *pfVar3;
      fVar2 = pfVar3[3];
      uVar14 = *(undefined8 *)(pfVar3 + 1);
      dVar7 = (double)(float)((ulonglong)uVar14 >> 0x20);
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pTVar4 = param_1->DataPtr;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 8;
      *(double *)((longlong)&pTVar4->field0_0x0 + lVar12) = (double)fVar1;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = (double)(float)uVar14;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])((longlong)&pTVar4->field0_0x0 + lVar12 + 8) = auVar6;
      *(double *)((longlong)&pTVar4->field0_0x0 + lVar12 + 0x18) = (double)fVar2;
      lVar12 = lVar12 + 0x20;
      uVar14 = local_78._8_8_;
    } while ((int)uVar11 < param_1->ArrayNum);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return true;
}

// SetRangeImpl @ 149ea5d20

bool __thiscall
FPCGLinearColorAccessor::SetRangeImpl
          (FPCGLinearColorAccessor *this,TArrayView<UE::Math::TVector4<double>_const_,int> *param_1,
          int param_2,IPCGAttributeAccessorKeys *param_3,EPCGAttributeAccessorFlags param_4)

{
  TVector4<double> *pTVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FLinearColor *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  TArrayView<void_*,int> local_38;
  FLinearColor local_28;
  
  PCGPropertyAccessor::GetContainerKeys(&local_58,param_2,param_1->ArrayNum,param_3);
  if (local_58.ArrayNum == 0) {
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    return false;
  }
  local_48 = local_58.AllocatorInstance.Data;
  if ((local_58.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_38.DataPtr = (void **)local_48;
  PCGPropertyAccessor::AddressOffset<void_*>
            ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_38);
  iVar9 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar9) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pTVar1 = param_1->DataPtr;
      uVar7 = 0;
      if ((int)uVar10 < local_58.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      puVar2 = *(undefined8 **)(local_58.AllocatorInstance.Data + lVar11);
      pFVar8 = FLinearColor::FLinearColor(&local_28,pTVar1 + (int)uVar10);
      iVar9 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
      uVar4 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
      *puVar2 = *(undefined8 *)&pFVar8->field0_0x0;
      puVar2[1] = uVar4;
    } while ((int)uVar10 < iVar9);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return true;
}

