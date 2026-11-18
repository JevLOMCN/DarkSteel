// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticStruct @ 149416250

UScriptStruct * __cdecl FNiagaraDistributionVector3::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionVector3,(UObject *)pUVar1,
                         L"NiagaraDistributionVector3");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.OuterSingleton;
}

// FNiagaraDistributionVector3 @ 149426a70

FNiagaraDistributionVector3 * __thiscall
FNiagaraDistributionVector3::FNiagaraDistributionVector3
          (FNiagaraDistributionVector3 *this,TVector<float> *param_1)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionVector3__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  InitConstant(this,param_1);
  return this;
}

// FNiagaraDistributionVector3 @ 149426b10

FNiagaraDistributionVector3 * __thiscall
FNiagaraDistributionVector3::FNiagaraDistributionVector3(FNiagaraDistributionVector3 *this)

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
  this->_padding_ = (longlong)&___7FNiagaraDistributionVector3__6B_;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  (this->ValuesTimeRange).field0_0x0._s_0.X = 0.0;
  (this->ValuesTimeRange).field0_0x0._s_0.Y = 1.0;
  return this;
}

// CalculateRange @ 14943d4b0

FNiagaraStatelessRange<UE::Math::TVector<float>_> * __thiscall
FNiagaraDistributionVector3::CalculateRange
          (FNiagaraDistributionVector3 *this,
          FNiagaraStatelessRange<UE::Math::TVector<float>_> *__return_storage_ptr__,
          TVector<float> *param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraStatelessRange<UE::Math::TVector<float>_> *pFVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  __return_storage_ptr__->ParameterOffset = -1;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if ((this->Values).ArrayNum < 1) {
    return __return_storage_ptr__;
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  *(undefined8 *)&(__return_storage_ptr__->Min).field0_0x0 = *(undefined8 *)pFVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *(float *)(pFVar2 + 8);
  if (((this->Values).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraStatelessRange<UE::Math::TVector<float>_> *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (this->Values).AllocatorInstance.Data;
  uVar7 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Max).field0_0x0 = *(undefined8 *)pFVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = *(float *)(pFVar2 + 8);
  if (1 < (this->Values).ArrayNum) {
    lVar8 = 0xc;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Values).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNiagaraStatelessRange<UE::Math::TVector<float>_> *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      fVar9 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
      if (*(float *)(pFVar2 + lVar8) <= fVar9) {
        fVar9 = *(float *)(pFVar2 + lVar8);
      }
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
      fVar10 = *(float *)(pFVar2 + lVar8 + 4);
      if (fVar1 <= *(float *)(pFVar2 + lVar8 + 4)) {
        fVar10 = fVar1;
      }
      fVar1 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
      fVar11 = *(float *)(pFVar2 + lVar8 + 8);
      if (fVar1 <= *(float *)(pFVar2 + lVar8 + 8)) {
        fVar11 = fVar1;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = fVar9;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = fVar10;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = fVar11;
      uVar5 = 0;
      if ((int)uVar7 < (this->Values).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNiagaraStatelessRange<UE::Math::TVector<float>_> *)(*pcVar3)();
        return pFVar6;
      }
      pFVar2 = (this->Values).AllocatorInstance.Data;
      uVar7 = uVar7 + 1;
      fVar9 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      if (fVar9 <= *(float *)(pFVar2 + lVar8)) {
        fVar9 = *(float *)(pFVar2 + lVar8);
      }
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      fVar10 = *(float *)(pFVar2 + lVar8 + 4);
      if (*(float *)(pFVar2 + lVar8 + 4) <= fVar1) {
        fVar10 = fVar1;
      }
      fVar1 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      fVar11 = *(float *)(pFVar2 + lVar8 + 8);
      if (*(float *)(pFVar2 + lVar8 + 8) <= fVar1) {
        fVar11 = fVar1;
      }
      lVar8 = lVar8 + 0xc;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = fVar9;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = fVar10;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = fVar11;
    } while ((int)uVar7 < (this->Values).ArrayNum);
  }
  return __return_storage_ptr__;
}

// InitConstant @ 149451730

void __thiscall
FNiagaraDistributionVector3::InitConstant(FNiagaraDistributionVector3 *this,TVector<float> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  ForAnyElementType local_38;
  undefined8 local_30;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  
  *(undefined1 *)&this->_padding_ = 4;
  fStack_20 = (param_1->field0_0x0)._s_0.Z;
  uStack_1c = (undefined4)*(undefined8 *)&param_1->field0_0x0;
  uVar2 = uStack_1c;
  uStack_18 = (undefined4)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  uVar3 = uStack_18;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,2);
  fStack_14 = fStack_20;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,2,0,&local_38,2,(int *)((longlong)&local_30 + 4));
  pTVar4 = &this->Values;
  *(undefined4 *)local_38.Data = uVar2;
  *(undefined4 *)(local_38.Data + 4) = uVar3;
  *(float *)(local_38.Data + 8) = fStack_20;
  *(undefined4 *)(local_38.Data + 0xc) = uStack_1c;
  *(ulonglong *)(local_38.Data + 0x10) = CONCAT44(fStack_14,uStack_18);
  if (pTVar4 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_38) {
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar4->AllocatorInstance).Data = local_38.Data;
    (this->Values).ArrayNum = (int)local_30;
    (this->Values).ArrayMax = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// InitConstant @ 149451830

void __thiscall
FNiagaraDistributionVector3::InitConstant(FNiagaraDistributionVector3 *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType local_48;
  undefined8 local_40;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  *(undefined1 *)&this->_padding_ = 3;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,2);
  local_30 = param_1;
  fStack_2c = param_1;
  fStack_28 = param_1;
  fStack_24 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,2,0,&local_48,2,(int *)((longlong)&local_40 + 4));
  pTVar2 = &this->Values;
  *(float *)local_48.Data = param_1;
  *(float *)(local_48.Data + 4) = param_1;
  *(float *)(local_48.Data + 8) = local_30;
  *(float *)(local_48.Data + 0xc) = fStack_2c;
  *(ulonglong *)(local_48.Data + 0x10) = CONCAT44(fStack_24,fStack_28);
  if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_48) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_48.Data;
    (this->Values).ArrayNum = (int)local_40;
    (this->Values).ArrayMax = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// InitCurve @ 149451960

void __thiscall
FNiagaraDistributionVector3::InitCurve
          (FNiagaraDistributionVector3 *this,initializer_list<float> *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  
  pfVar4 = param_1->_Last;
  pTVar1 = &this->Values;
  pfVar8 = param_1->_First;
  *(undefined1 *)&this->_padding_ = 7;
  uVar9 = (longlong)pfVar4 - (longlong)pfVar8 >> 2;
  iVar6 = (int)uVar9;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
  }
  piVar2 = &(this->Values).ArrayMax;
  (this->Values).ArrayNum = 0;
  if ((this->Values).ArrayMax < iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar6,&pTVar1->AllocatorInstance,0,piVar2);
  }
  for (; pfVar8 != pfVar4; pfVar8 = pfVar8 + 1) {
    iVar6 = (this->Values).ArrayNum;
    fVar3 = *pfVar8;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Values).ArrayNum = iVar6 + 1;
    lVar7 = (longlong)iVar6;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    *(float *)(pFVar5 + lVar7 * 0xc) = fVar3;
    *(float *)(pFVar5 + lVar7 * 0xc + 4) = fVar3;
    *(float *)(pFVar5 + lVar7 * 0xc + 8) = fVar3;
  }
  return;
}

// InitCurve @ 149451a40

void __thiscall
FNiagaraDistributionVector3::InitCurve
          (FNiagaraDistributionVector3 *this,initializer_list<UE::Math::TVector<float>_> *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  TVector<float> *pTVar2;
  FScriptContainerElement *pFVar3;
  TVector<float> *_Src;
  longlong lVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  _Src = param_1->_First;
  pTVar2 = param_1->_Last;
  *(undefined1 *)&this->_padding_ = 8;
  lVar4 = (longlong)pTVar2 - (longlong)_Src;
  local_18.Data = (FScriptContainerElement *)0x0;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  iVar5 = (int)(lVar4 >> 1) - (int)(lVar4 >> 0x3f);
  local_10 = CONCAT44(local_10._4_4_,iVar5);
  if (iVar5 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&local_18,iVar5,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar5 * 0xc);
  }
  pTVar1 = &this->Values;
  if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_18) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = local_18.Data;
    (this->Values).ArrayNum = (int)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    (this->Values).ArrayMax = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

