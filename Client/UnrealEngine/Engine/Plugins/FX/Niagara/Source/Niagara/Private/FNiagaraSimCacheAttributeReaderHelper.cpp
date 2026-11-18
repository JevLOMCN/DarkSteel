// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FindVariableIndex @ 148eb9020

int __cdecl
FNiagaraSimCacheAttributeReaderHelper::FindVariableIndex
          (UNiagaraSimCache *param_1,FNiagaraVariableBase *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  
  if ((param_3 < 0) || ((param_1->CacheLayout).EmitterLayouts.ArrayNum <= param_3)) {
    return -1;
  }
  uVar5 = 0;
  if (param_3 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar1 = (param_1->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
  pFVar2 = *(FName **)(pFVar1 + (longlong)param_3 * 0xb8 + 0x10);
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)*(int *)(pFVar1 + (longlong)param_3 * 0xb8 + 0x18) * 3) {
      return -1;
    }
    if ((*pFVar7 == param_2->Name) &&
       (pFVar7[1].ComparisonIndex.Value == (param_2->TypeDefHandle).RegisteredTypeIndex)) break;
    pFVar7 = pFVar7 + 3;
  }
  return (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x18);
}

// InternalReadFloat @ 148ec8ba0

float __thiscall
FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat
          (FNiagaraSimCacheAttributeReaderHelper *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  
  if (this->Variable == (FNiagaraSimCacheVariable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  pfVar3 = (float *)TArrayView<unsigned_char,int>::operator[]
                              (&this->DataBuffers->FloatData,
                               (((uint)this->Variable->FloatOffset + param_1) *
                                this->DataBuffers->NumInstances + param_2) * 4);
  return *pfVar3;
}

// ReadFloat3f @ 148ecc9f0

TVector<float> * __thiscall
FNiagaraSimCacheAttributeReaderHelper::ReadFloat3f
          (FNiagaraSimCacheAttributeReaderHelper *this,TVector<float> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TVector<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (this->Variable->FloatCount != 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xc9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  fVar4 = InternalReadFloat(this,2,param_1);
  fVar5 = InternalReadFloat(this,1,param_1);
  fVar6 = InternalReadFloat(this,0,param_1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar6;
  return __return_storage_ptr__;
}

// ReadInt @ 148eccab0

int __thiscall
FNiagaraSimCacheAttributeReaderHelper::ReadInt
          (FNiagaraSimCacheAttributeReaderHelper *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  if (this->Variable == (FNiagaraSimCacheVariable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  piVar4 = (int *)TArrayView<unsigned_char,int>::operator[]
                            (&this->DataBuffers->Int32Data,
                             (((uint)this->Variable->Int32Offset + param_2) *
                              this->DataBuffers->NumInstances + param_1) * 4);
  return *piVar4;
}

// Initialize @ 1493a9140

void __thiscall
FNiagaraSimCacheAttributeReaderHelper::Initialize
          (FNiagaraSimCacheAttributeReaderHelper *this,UNiagaraSimCache *param_1,FName param_2,
          FName param_3,int param_4)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FName *pFVar6;
  longlong lVar7;
  uint uVar8;
  FNiagaraSimCacheDataBuffersLayout *pFVar9;
  FNiagaraSimCacheFrame *pFVar10;
  
  this->CacheFrame = (FNiagaraSimCacheFrame *)0x0;
  this->DataBuffers = (FNiagaraSimCacheDataBuffers *)0x0;
  this->DataBuffersLayout = (FNiagaraSimCacheDataBuffersLayout *)0x0;
  this->Variable = (FNiagaraSimCacheVariable *)0x0;
  if (((*(longlong *)&(param_1->SoftNiagaraSystem).SoftObjectPtr.field_0x8 != 0) && (-1 < param_4))
     && (param_4 < (param_1->CacheFrames).ArrayNum)) {
    uVar5 = 0;
    if (param_4 < (param_1->CacheFrames).ArrayNum) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = &(param_1->CacheLayout).SystemLayout;
    pFVar10 = (FNiagaraSimCacheFrame *)
              ((param_1->CacheFrames).AllocatorInstance.Data + (longlong)param_4 * 0x160);
    this->CacheFrame = pFVar10;
    uVar5 = 0;
    if (param_2 == (FName)0x0) {
      this->DataBuffers = &(pFVar10->SystemData).SystemDataBuffers;
LAB_1493a9345:
      this->DataBuffersLayout = pFVar9;
      if (this->DataBuffers->NumInstances != 0) {
        pFVar1 = (FName *)(pFVar9->Variables).AllocatorInstance.Data;
        for (pFVar6 = pFVar1; pFVar6 != pFVar1 + (longlong)(pFVar9->Variables).ArrayNum * 3;
            pFVar6 = pFVar6 + 3) {
          if (*pFVar6 == param_3) {
            lVar7 = ((longlong)pFVar6 - (longlong)pFVar1) / 6 +
                    ((longlong)pFVar6 - (longlong)pFVar1 >> 0x3f);
            uVar8 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
            if (uVar8 == 0xffffffff) {
              return;
            }
            if ((int)uVar8 < (pFVar9->Variables).ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this->Variable =
                 (FNiagaraSimCacheVariable *)
                 ((pFVar9->Variables).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x18);
            return;
          }
        }
      }
    }
    else {
      pFVar1 = (FName *)(param_1->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
      for (pFVar6 = pFVar1;
          pFVar6 != pFVar1 + (longlong)(param_1->CacheLayout).EmitterLayouts.ArrayNum * 0x17;
          pFVar6 = pFVar6 + 0x17) {
        if (*pFVar6 == param_2) {
          lVar7 = ((longlong)pFVar6 - (longlong)pFVar1) +
                  SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816((longlong)pFVar6 - (longlong)pFVar1)
                         ,8);
          uVar8 = (int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f);
          if (uVar8 == 0xffffffff) {
            return;
          }
          uVar4 = uVar5;
          if ((int)uVar8 < (pFVar10->EmitterData).ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this->DataBuffers =
               (FNiagaraSimCacheDataBuffers *)
               ((pFVar10->EmitterData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xd8 + 0x40);
          uVar4 = uVar5;
          if ((int)uVar8 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (FNiagaraSimCacheDataBuffersLayout *)
                   ((param_1->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                   (longlong)(int)uVar8 * 0xb8);
          goto LAB_1493a9345;
        }
      }
    }
  }
  return;
}

