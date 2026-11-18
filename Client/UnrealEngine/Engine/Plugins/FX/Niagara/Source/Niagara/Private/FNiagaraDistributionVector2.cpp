// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 149416130

UScriptStruct * __cdecl FNiagaraDistributionVector2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionVector2,(UObject *)pUVar1,
                         L"NiagaraDistributionVector2");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.OuterSingleton;
}

// FNiagaraDistributionVector2 @ 1494268a0

FNiagaraDistributionVector2 * __thiscall
FNiagaraDistributionVector2::FNiagaraDistributionVector2
          (FNiagaraDistributionVector2 *this,TVector2<float> *param_1)

{
  byte *pbVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForAnyElementType local_28;
  undefined8 local_20;
  TVector2<float>_u_0 local_18;
  TVector2<float>_u_0 TStack_10;
  
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
  this->_padding_ = (longlong)&___7FNiagaraDistributionVector2__6B_;
  pTVar2 = &this->Values;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  local_18._s_0 = *(TVector2<float>_u_0_s_0 *)&param_1->field0_0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,2);
  TStack_10._s_0 = local_18._s_0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_28,2,(int *)((longlong)&local_20 + 4));
  *(TVector2<float>_u_0 *)local_28.Data = (TVector2<float>_u_0_s_0)local_18;
  ((TVector2<float>_u_0 *)(local_28.Data + 8))->_s_0 = (TVector2<float>_u_0_s_0)TStack_10;
  if (pTVar2 != (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&local_28) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_28.Data;
    (this->Values).ArrayNum = (int)local_20;
    (this->Values).ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  if ((TVector2<float>_u_0 *)local_28.Data != (TVector2<float>_u_0 *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return this;
}

// FNiagaraDistributionVector2 @ 1494269f0

FNiagaraDistributionVector2 * __thiscall
FNiagaraDistributionVector2::FNiagaraDistributionVector2(FNiagaraDistributionVector2 *this)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionVector2__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  return this;
}

// CalculateRange @ 14943d2e0

FNiagaraStatelessRange<UE::Math::TVector2<float>_> * __thiscall
FNiagaraDistributionVector2::CalculateRange
          (FNiagaraDistributionVector2 *this,
          FNiagaraStatelessRange<UE::Math::TVector2<float>_> *__return_storage_ptr__,
          TVector2<float> *param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  uint uVar7;
  FNiagaraStatelessRange<UE::Math::TVector2<float>_> *pFVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  __return_storage_ptr__->ParameterOffset = -1;
  (__return_storage_ptr__->Min).field0_0x0 = param_1->field0_0x0;
  (__return_storage_ptr__->Max).field0_0x0 = param_1->field0_0x0;
  if ((this->Values).ArrayNum < 1) {
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0 =
       *(TVector2<float>_u_0 *)(this->Values).AllocatorInstance.Data;
  if (((this->Values).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FNiagaraStatelessRange<UE::Math::TVector2<float>_> *)(*pcVar3)();
    return pFVar8;
  }
  uVar10 = 1;
  (__return_storage_ptr__->Max).field0_0x0 =
       *(TVector2<float>_u_0 *)(this->Values).AllocatorInstance.Data;
  if (1 < (this->Values).ArrayNum) {
    lVar9 = 1;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNiagaraStatelessRange<UE::Math::TVector2<float>_> *)(*pcVar3)();
        return pFVar8;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      fVar11 = *(float *)(pFVar2 + lVar9 * 8);
      fVar12 = *(float *)(pFVar2 + lVar9 * 8 + 4);
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
      if (fVar1 <= fVar11) {
        fVar11 = fVar1;
      }
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
      if (fVar1 <= fVar12) {
        fVar12 = fVar1;
      }
      TVar4._s_0.Y = fVar12;
      TVar4._s_0.X = fVar11;
      (__return_storage_ptr__->Min).field0_0x0 = TVar4;
      uVar7 = 0;
      if ((int)uVar10 < (this->Values).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNiagaraStatelessRange<UE::Math::TVector2<float>_> *)(*pcVar3)();
        return pFVar8;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      fVar11 = *(float *)(pFVar2 + lVar9 * 8);
      fVar12 = *(float *)(pFVar2 + lVar9 * 8 + 4);
      lVar9 = lVar9 + 1;
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      if (fVar11 <= fVar1) {
        fVar11 = fVar1;
      }
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (fVar12 <= fVar1) {
        fVar12 = fVar1;
      }
      TVar5._s_0.Y = fVar12;
      TVar5._s_0.X = fVar11;
      (__return_storage_ptr__->Max).field0_0x0 = TVar5;
    } while ((int)uVar10 < (this->Values).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitConstant @ 149451590

void __thiscall
FNiagaraDistributionVector2::InitConstant
          (FNiagaraDistributionVector2 *this,TVector2<float> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType local_28;
  undefined8 local_20;
  TVector2<float>_u_0 local_18;
  TVector2<float>_u_0 TStack_10;
  
  *(undefined1 *)&this->_padding_ = 4;
  local_18._s_0 = *(TVector2<float>_u_0_s_0 *)&param_1->field0_0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,2);
  TStack_10._s_0 = local_18._s_0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_28,2,(int *)((longlong)&local_20 + 4));
  pTVar2 = &this->Values;
  *(TVector2<float>_u_0 *)local_28.Data = (TVector2<float>_u_0_s_0)local_18;
  ((TVector2<float>_u_0 *)(local_28.Data + 8))->_s_0 = (TVector2<float>_u_0_s_0)TStack_10;
  if (pTVar2 != (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&local_28) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_28.Data;
    (this->Values).ArrayNum = (int)local_20;
    (this->Values).ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  if ((TVector2<float>_u_0 *)local_28.Data != (TVector2<float>_u_0 *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// InitConstant @ 149451660

void __thiscall
FNiagaraDistributionVector2::InitConstant(FNiagaraDistributionVector2 *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType local_28;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined1 *)&this->_padding_ = 3;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,2);
  local_18 = param_1;
  fStack_14 = param_1;
  fStack_10 = param_1;
  fStack_c = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_28,2,(int *)((longlong)&local_20 + 4));
  pTVar2 = &this->Values;
  *(ulonglong *)local_28.Data = CONCAT44(fStack_14,local_18);
  *(ulonglong *)(local_28.Data + 8) = CONCAT44(fStack_c,fStack_10);
  if (pTVar2 != (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&local_28) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_28.Data;
    (this->Values).ArrayNum = (int)local_20;
    (this->Values).ArrayMax = local_20._4_4_;
    local_20 = 0;
    local_28.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

