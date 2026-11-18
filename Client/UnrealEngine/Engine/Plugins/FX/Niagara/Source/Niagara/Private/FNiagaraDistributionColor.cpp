// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// StaticStruct @ 1494168a0

UScriptStruct * __cdecl FNiagaraDistributionColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionColor,(UObject *)pUVar1,
                         L"NiagaraDistributionColor");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.OuterSingleton;
}

// FNiagaraDistributionColor @ 149425bb0

FNiagaraDistributionColor * __thiscall
FNiagaraDistributionColor::FNiagaraDistributionColor
          (FNiagaraDistributionColor *this,FLinearColor *param_1)

{
  byte *pbVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar4;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  *(undefined1 *)&this->_padding_ = 4;
  this->_padding_ = (longlong)&___7FNiagaraDistributionColor__6B_;
  pTVar2 = &this->Values;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  local_48 = *(undefined8 *)&param_1->field0_0x0;
  uStack_40 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,2);
  local_38 = local_48;
  uStack_30 = uStack_40;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&local_58,2,(int *)((longlong)&local_50 + 4));
  *(undefined8 *)local_58.Data = local_48;
  *(undefined8 *)(local_58.Data + 8) = uStack_40;
  *(undefined8 *)(local_58.Data + 0x10) = local_38;
  *(undefined8 *)(local_58.Data + 0x18) = uStack_30;
  if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)&local_58) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_58.Data;
    (this->Values).ArrayNum = (int)local_50;
    (this->Values).ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return this;
}

// FNiagaraDistributionColor @ 149425d00

FNiagaraDistributionColor * __thiscall
FNiagaraDistributionColor::FNiagaraDistributionColor(FNiagaraDistributionColor *this)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  this->_padding_ = (longlong)&___7FNiagaraDistributionColor__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  return this;
}

// CalculateRange @ 14943cbe0

FNiagaraStatelessRange<FLinearColor> * __thiscall
FNiagaraDistributionColor::CalculateRange
          (FNiagaraDistributionColor *this,
          FNiagaraStatelessRange<FLinearColor> *__return_storage_ptr__,FLinearColor *param_1)

{
  float fVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FNiagaraStatelessRange<FLinearColor> *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  
  iVar2 = (this->Values).ArrayNum;
  uVar5 = *(undefined8 *)&param_1->field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  __return_storage_ptr__->ParameterOffset = -1;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar5;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar6;
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar5;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar6;
  if (iVar2 < 1) {
    return __return_storage_ptr__;
  }
  pFVar3 = (this->Values).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar3 + 8);
  iVar2 = (this->Values).ArrayNum;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = *(undefined8 *)pFVar3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar5;
  if ((iVar2 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
    return pFVar9;
  }
  pFVar3 = (this->Values).AllocatorInstance.Data;
  uVar10 = 1;
  uVar5 = *(undefined8 *)(pFVar3 + 8);
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = *(undefined8 *)pFVar3;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar5;
  if (1 < (this->Values).ArrayNum) {
    lVar12 = 0x10;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12);
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.R;
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.R = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12 + 4);
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.G;
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.G = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12 + 8);
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.B;
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.B = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12 + 0xc);
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.A;
      if (fVar1 <= fVar13) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.A = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12);
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.R;
      if (fVar13 <= fVar1) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.R = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12 + 4);
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.G;
      if (fVar13 <= fVar1) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.G = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12 + 8);
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.B;
      if (fVar13 <= fVar1) {
        fVar13 = fVar1;
      }
      uVar8 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar8 = uVar11;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.B = fVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FNiagaraStatelessRange<FLinearColor> *)(*pcVar4)();
        return pFVar9;
      }
      uVar10 = uVar10 + 1;
      fVar13 = *(float *)((this->Values).AllocatorInstance.Data + lVar12 + 0xc);
      lVar12 = lVar12 + 0x10;
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.A;
      if (fVar13 <= fVar1) {
        fVar13 = fVar1;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.A = fVar13;
    } while ((int)uVar10 < (this->Values).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitConstant @ 149451310

void __thiscall
FNiagaraDistributionColor::InitConstant(FNiagaraDistributionColor *this,FLinearColor *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *(undefined1 *)&this->_padding_ = 4;
  local_48 = *(undefined8 *)&param_1->field0_0x0;
  uStack_40 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,2);
  local_38 = local_48;
  uStack_30 = uStack_40;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&local_58,2,(int *)((longlong)&local_50 + 4));
  pTVar2 = &this->Values;
  *(undefined8 *)local_58.Data = local_48;
  *(undefined8 *)(local_58.Data + 8) = uStack_40;
  *(undefined8 *)(local_58.Data + 0x10) = local_38;
  *(undefined8 *)(local_58.Data + 0x18) = uStack_30;
  if (pTVar2 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)&local_58) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_58.Data;
    (this->Values).ArrayNum = (int)local_50;
    (this->Values).ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

