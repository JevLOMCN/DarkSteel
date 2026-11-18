// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 149415f90

UScriptStruct * __cdecl FNiagaraDistributionFloat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionFloat,(UObject *)pUVar1,
                         L"NiagaraDistributionFloat");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.OuterSingleton;
}

// FNiagaraDistributionFloat @ 149426110

FNiagaraDistributionFloat * __thiscall
FNiagaraDistributionFloat::FNiagaraDistributionFloat(FNiagaraDistributionFloat *this,float param_1)

{
  byte *pbVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForAnyElementType local_28;
  undefined8 local_20;
  
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
  this->_padding_ = (longlong)&___7FNiagaraDistributionFloat__6B_;
  pTVar2 = &this->Values;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  *(undefined1 *)&this->_padding_ = 3;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_28,2,(int *)((longlong)&local_20 + 4));
  *(ulonglong *)local_28.Data = CONCAT44(param_1,param_1);
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_28) {
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
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return this;
}

// FNiagaraDistributionFloat @ 149426250

FNiagaraDistributionFloat * __thiscall
FNiagaraDistributionFloat::FNiagaraDistributionFloat
          (FNiagaraDistributionFloat *this,initializer_list<float> *param_1)

{
  byte *pbVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  float *pfVar4;
  float *_Src;
  int iVar5;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
  *(undefined1 *)&this->_padding_ = 3;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  iVar5 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)&this->_padding_ + 4),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)&this->_padding_ + 4) = iVar5;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->_padding_);
  pfVar4 = param_1->_Last;
  pTVar2 = &this->Values;
  _Src = param_1->_First;
  this->_padding_ = (longlong)&___7FNiagaraDistributionFloat__6B_;
  (this->Values).ArrayMax = 0;
  piVar3 = &(this->Values).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  *(undefined1 *)&this->_padding_ = 7;
  iVar5 = (int)((longlong)pfVar4 - (longlong)_Src >> 2);
  (this->Values).ArrayNum = iVar5;
  if ((iVar5 == 0) && (*piVar3 == 0)) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,*piVar3,&pTVar2->AllocatorInstance,iVar5,piVar3);
    if (iVar5 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
    }
  }
  return this;
}

// FNiagaraDistributionFloat @ 149426350

FNiagaraDistributionFloat * __thiscall
FNiagaraDistributionFloat::FNiagaraDistributionFloat(FNiagaraDistributionFloat *this)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionFloat__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  return this;
}

// CalculateRange @ 14943cfa0

FNiagaraStatelessRange<float> * __thiscall
FNiagaraDistributionFloat::CalculateRange
          (FNiagaraDistributionFloat *this,FNiagaraStatelessRange<float> *__return_storage_ptr__,
          float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNiagaraStatelessRange<float> *pFVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  iVar1 = (this->Values).ArrayNum;
  __return_storage_ptr__->Min = param_1;
  __return_storage_ptr__->Max = param_1;
  __return_storage_ptr__->ParameterOffset = -1;
  if (iVar1 < 1) {
    return __return_storage_ptr__;
  }
  iVar1 = (this->Values).ArrayNum;
  __return_storage_ptr__->Min = *(float *)(this->Values).AllocatorInstance.Data;
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FNiagaraStatelessRange<float> *)(*pcVar2)();
    return pFVar5;
  }
  uVar6 = 1;
  __return_storage_ptr__->Max = *(float *)(this->Values).AllocatorInstance.Data;
  if (1 < (this->Values).ArrayNum) {
    lVar7 = 4;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Values).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNiagaraStatelessRange<float> *)(*pcVar2)();
        return pFVar5;
      }
      fVar8 = *(float *)((this->Values).AllocatorInstance.Data + lVar7);
      if (__return_storage_ptr__->Min <= fVar8) {
        fVar8 = __return_storage_ptr__->Min;
      }
      uVar4 = 0;
      if ((int)uVar6 < (this->Values).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      __return_storage_ptr__->Min = fVar8;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FNiagaraStatelessRange<float> *)(*pcVar2)();
        return pFVar5;
      }
      uVar6 = uVar6 + 1;
      fVar8 = *(float *)((this->Values).AllocatorInstance.Data + lVar7);
      lVar7 = lVar7 + 4;
      if (fVar8 <= __return_storage_ptr__->Max) {
        fVar8 = __return_storage_ptr__->Max;
      }
      __return_storage_ptr__->Max = fVar8;
    } while ((int)uVar6 < (this->Values).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitConstant @ 1494513f0

void __thiscall
FNiagaraDistributionFloat::InitConstant(FNiagaraDistributionFloat *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  *(undefined1 *)&this->_padding_ = 3;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,2);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_18,2,(int *)((longlong)&local_10 + 4));
  pTVar2 = &this->Values;
  *(ulonglong *)local_18.Data = CONCAT44(param_1,param_1);
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_18) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Values).ArrayNum = (int)local_10;
    (this->Values).ArrayMax = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// InitCurve @ 149451930

void __thiscall
FNiagaraDistributionFloat::InitCurve
          (FNiagaraDistributionFloat *this,initializer_list<float> *param_1)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = param_1->_Last;
  pfVar2 = param_1->_First;
  *(undefined1 *)&this->_padding_ = 7;
  TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
            (&this->Values,pfVar2,(int)((longlong)pfVar1 - (longlong)pfVar2 >> 2),
             (this->Values).ArrayMax);
  return;
}

