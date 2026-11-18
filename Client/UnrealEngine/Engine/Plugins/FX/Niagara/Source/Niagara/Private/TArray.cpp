// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 136

// AddUniqueImpl<FNiagaraVariableBase_const_&> @ 148e443f0

int __thiscall
TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FNiagaraVariableBase_const_&>
          (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *this,
          FNiagaraVariableBase *param_1)

{
  FNiagaraVariableBase *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraVariableBase *pFVar6;
  
  pFVar1 = (FNiagaraVariableBase *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if ((pFVar6->Name == param_1->Name) &&
         ((pFVar6->TypeDefHandle).RegisteredTypeIndex ==
          (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0xc);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar2 = (this->AllocatorInstance).Data;
  *(FName *)(pFVar2 + (longlong)iVar5 * 0xc) = param_1->Name;
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = (param_1->TypeDefHandle).RegisteredTypeIndex;
  return iVar5;
}

// AddUniqueImpl<FNiagaraVariableBase> @ 148e44530

int __thiscall
TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNiagaraVariableBase>
          (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *this,
          FNiagaraVariableBase *param_1)

{
  FNiagaraVariableBase *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraVariableBase *pFVar6;
  
  pFVar1 = (FNiagaraVariableBase *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar6 = pFVar1;
    do {
      if ((pFVar6->Name == param_1->Name) &&
         ((pFVar6->TypeDefHandle).RegisteredTypeIndex ==
          (param_1->TypeDefHandle).RegisteredTypeIndex)) {
        iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar1) / 0xc);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar2 = (this->AllocatorInstance).Data;
  *(FName *)(pFVar2 + (longlong)iVar5 * 0xc) = param_1->Name;
  *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = (param_1->TypeDefHandle).RegisteredTypeIndex;
  return iVar5;
}

// operator= @ 148e56b20

TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *this,
          TArray<FNDIDistributionIntArrayEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 148e56bc0

TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FNiagaraMeshRendererMeshPropertiesBase *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FNiagaraMeshRendererMeshPropertiesBase *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FNiagaraMeshRendererMeshPropertiesBase,FNiagaraMeshRendererMeshPropertiesBase,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// operator= @ 148e56c50

TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// RemoveAtImpl @ 148e7b9c0

void __thiscall
TArray<FNDIRenderTargetSimCacheFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNDIRenderTargetSimCacheFrame,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FNDIRenderTargetSimCacheFrame *_Dst;
  
  _Dst = (FNDIRenderTargetSimCacheFrame *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FNDIRenderTargetSimCacheFrame,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 148e7ba40

void __thiscall
TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar1;
  int iVar2;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *_Dst;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)this;
  if (FVar1 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)
         ((longlong)param_1 * 0x10 + (longlong)FVar3);
  DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 148e7ca40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char_*,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<unsigned_char_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 148e7cb80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNDIDataChannelRead_EmitterSpawnInfo,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 148e7ccc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNiagaraMeshRendererMeshPropertiesBase,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x58,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x58;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x58,(longlong)iVar5 * 0x58);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 148e7ce00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      this = (TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    memset((void *)((longlong)iVar6 * 0x10 + (longlong)this),0,(longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumUninitialized @ 148e7cf40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FNiagaraMeshRendererMeshPropertiesBase,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x58;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x58,(longlong)iVar4 * 0x58);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 148e7d070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FNDIDataChannelRead_EmitterSpawnInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<FName_const_,int> @ 148e8b3c0

TArray<FName,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FName,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::operator=<FName_const_,int>
          (TArray<FName,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<FName_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FName *_Src;
  ForElementType<FName> FVar3;
  ForElementType<FName> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0x10;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
            (8,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FName>)this;
  if (FVar3 != (ForElementType<FName>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// operator= @ 148ea6e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<AActor> *)pFVar2,iVar1);
  }
  return this;
}

// SetNum @ 148ecfce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<NDIDynamicMeshLocal::FNDIInstanceSection,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 148ecfe30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMemoryImageName,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 8),0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> @ 148f7e2a0

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> @ 148f81320

void __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 148f82230

TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// RemoveAtSwapImpl @ 148fcac70

void __thiscall
TArray<TSharedPtr<FStaticMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FStaticMeshUvMapping,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// AddUniqueImpl<TObjectPtr<UNiagaraComponent>_> @ 148fe9030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UNiagaraComponent>_>
          (TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UNiagaraComponent> *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UNiagaraComponent **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UNiagaraComponent **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UNiagaraSystem>_> @ 148fe9140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UNiagaraSystem>_>
          (TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UNiagaraSystem> *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraSystem *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UNiagaraSystem **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UNiagaraSystem **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// operator= @ 149026950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UNiagaraComponent>,TObjectPtr<UNiagaraComponent>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UNiagaraComponent> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 1490269e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraSystem>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UNiagaraSystem> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 149026a70

TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraVariable *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNiagaraVariable,int>
              ((FNiagaraVariable *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FNiagaraVariable *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FNiagaraVariable,FNiagaraVariable,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// RemoveSingleSwap @ 149063100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
RemoveSingleSwap(TArray<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 *this,TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *param_1,
                EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar4 = this->ArrayNum;
  this_00 = pFVar1;
  while( true ) {
    if (this_00 == pFVar1 + (longlong)iVar4 * 8) {
      return 0;
    }
    bVar3 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals<UNiagaraComponent,bool>
                      ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  uVar6 = (uint)((longlong)this_00 - (longlong)pFVar1 >> 3);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  uVar5 = 0;
  if ((int)(uVar6 + 1) <= this->ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar4 = this->ArrayNum + ~uVar6;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
            (longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return 1;
}

// TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> @ 1490aeb30

TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> @ 1490b4ce0

void __thiscall
TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_>::
~TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraCollisionTrace,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraCollisionTrace,int>
            ((FNiagaraCollisionTrace *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1490b93c0

TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 1490b9460

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 1490b9500

TArray<FNiagaraID,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraID,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 1490b95a0

TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// AddDefaulted @ 1490cb210

int __thiscall
TArray<FNDIArraySimCacheDataFrame,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FNDIArraySimCacheDataFrame,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  DefaultConstructItems<FNDIArraySimCacheDataFrame,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 8,param_1);
  return iVar1;
}

// InsertUninitializedImpl @ 149117260

void __thiscall
TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  memmove(_Src + (longlong)param_2 * 0xc,_Src,(longlong)(iVar1 - param_1) * 0xc);
  return;
}

// RemoveAt @ 14912aa70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>::
RemoveAt(TArray<TTuple<int,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)iVar4 * 0xc);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14912ab50

void __thiscall
TArray<FNiagaraDataChannelDebugUtilities::FFrameDebugData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraDataChannelDebugUtilities::FFrameDebugData,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FFrameDebugData *_Dst;
  int iVar1;
  
  _Dst = (FFrameDebugData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FNiagaraDataChannelDebugUtilities::FFrameDebugData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14912abd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TArray<FNDCIsland,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNDCIsland,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FNDCIsland *_Dst;
  
  _Dst = (FNDCIsland *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x60);
  DestructItems<FNDCIsland,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x60);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14912ac50

void __thiscall
TArray<FNiagaraDataChannelVariableBuffer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraDataChannelVariableBuffer,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FNiagaraDataChannelVariableBuffer *_Dst;
  int iVar1;
  
  _Dst = (FNiagaraDataChannelVariableBuffer *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<FNiagaraDataChannelVariableBuffer,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14912acd0

void __thiscall
TArray<UNiagaraDataChannelHandler::FChannelSubscription,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<UNiagaraDataChannelHandler::FChannelSubscription,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = pFVar1 + (longlong)param_1 * 0x58;
  FInstancedStruct::Reset((FInstancedStruct *)(this_00 + 0x40));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x58,(longlong)iVar2 * 0x58);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14912ad60

void __thiscall
TArray<TWeakPtr<FNiagaraDataChannelData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<FNiagaraDataChannelData,1>,TSizedDefaultAllocator<32>_> *this,int param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x10;
  plVar3 = *(longlong **)(_Dst + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x10,(longlong)iVar4 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 1491306c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x40,(longlong)iVar4 << 6);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1491307f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0xc,(longlong)iVar4 * 0xc);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 1491309b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x10,(longlong)iVar4 << 4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,0x10,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149130ae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraID,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FNiagaraID,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 149130c10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<FNiagaraPosition,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0xc,(longlong)iVar4 * 0xc);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// RemoveAtImpl @ 14918ab30

void __thiscall
TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<FNDI_Landscape_SharedResource,1> *_Dst;
  
  _Dst = (TSharedPtr<FNDI_Landscape_SharedResource,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FNDI_Landscape_SharedResource,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14918abb0

void __thiscall
TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FNDI_Landscape_SharedResource,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 14918adc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UObject> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(UObject **)((this->AllocatorInstance).Data + lVar7) == (param_1->field0_0x0).DebugPtr) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// AddUniqueImpl<AActor_*_const_&> @ 149199f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<AActor_*_const_&>
          (TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *this,
          AActor **param_1)

{
  ForElementType<AActor_*> FVar1;
  ForElementType<AActor_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<AActor_*> FVar6;
  ForElementType<AActor_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<AActor_*>)this;
  if (FVar2 != (ForElementType<AActor_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<AActor_*>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(AActor **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<AActor_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<AActor_*>)this;
  if (FVar2 != (ForElementType<AActor_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<AActor_*>)this;
    if (FVar2 != (ForElementType<AActor_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (AActor **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<AActor_*>)0x0) {
    this = (TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(AActor **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<TWeakObjectPtr<AActor,FWeakObjectPtr>_> @ 14919a030

int __thiscall
TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<AActor,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<AActor,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// AddUniqueImpl<FPrimitiveComponentId> @ 14919a0f0

int __thiscall
TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPrimitiveComponentId>
          (TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *this,
          FPrimitiveComponentId *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(uint *)&pFVar5->field_0x0 == param_1->PrimIDValue) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 4);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 4)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(uint *)(pFVar1 + (longlong)iVar4 * 4) = param_1->PrimIDValue;
  return iVar4;
}

// operator= @ 1491ad810

TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *this,
          TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// Find @ 1491c33d0

int __thiscall
TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TWeakObjectPtr<AActor,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// Init @ 1491d1e40

void __thiscall
TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *this,
          TVector4<float> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)*piVar1 * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar6 = this->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1010,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar6 + 1;
      uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      pFVar2 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar2 = *(undefined8 *)&param_1->field0_0x0;
      *(undefined8 *)(pFVar2 + 8) = uVar4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// SetNum @ 1491df4b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1491df600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMemoryImageName,TMemoryImageAllocator<0>_>::SetNum
          (TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    DefaultConstructItems<FMemoryImageName,int>
              ((void *)((longlong)FVar6 + (longlong)iVar4 * 8),param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 8);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 8),(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1491df760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>::SetNum
          (void *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  piVar1 = (int *)((longlong)this + 8);
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (1,1,param_1 - iVar5,this,piVar1,(int *)((longlong)this + 0xc));
    uVar6 = *(ulonglong *)this;
    if ((uVar6 & 1) != 0) {
      uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)this;
    }
    memset((void *)((longlong)iVar4 + uVar6),0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        uVar6 = *(ulonglong *)this;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)this;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)(uVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)(uVar6 + (longlong)param_1)),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,this,iVar5 - uVar7,(int *)((longlong)this + 0xc));
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1491dfca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>::SetNumZeroed
          (void *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  piVar1 = (int *)((longlong)this + 8);
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (1,1,param_1 - iVar5,this,piVar1,(int *)((longlong)this + 0xc));
    uVar6 = *(ulonglong *)this;
    if ((uVar6 & 1) != 0) {
      uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)this;
    }
    memset((void *)((longlong)iVar4 + uVar6),0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        uVar6 = *(ulonglong *)this;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)this;
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)(uVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)(uVar6 + (longlong)param_1)),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,this,iVar5 - uVar7,(int *)((longlong)this + 0xc));
        }
      }
    }
  }
  return;
}

// TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> @ 149211e30

TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> @ 149214860

void __thiscall
TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddDefaulted @ 14921c960

int __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<float>,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x30,param_1);
  return iVar1;
}

// Empty @ 14922cf80

void __thiscall
TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 14924b260

void __thiscall
TArray<FSkeletalMeshSkinningData::FLODData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FSkeletalMeshSkinningData::FLODData,TSizedDefaultAllocator<32>_> *this,int param_1
          ,int param_2)

{
  FLODData *_Dst;
  int iVar1;
  
  _Dst = (FLODData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<FSkeletalMeshSkinningData::FLODData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14924b2e0

void __thiscall
TArray<TSharedPtr<FSkeletalMeshConnectivity,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FSkeletalMeshConnectivity,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14924b360

void __thiscall
TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FSkeletalMeshUvMapping,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 14924d4e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TMemoryImageAllocator<0>_>::SetNum
          (TArray<unsigned_char,TMemoryImageAllocator<0>_> *this,int param_1,EAllowShrinking param_2
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)iVar4 + (longlong)FVar6),0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator= @ 14927ad40

TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraDebugHUDVariable *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNiagaraDebugHUDVariable,int>
              ((FNiagaraDebugHUDVariable *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FNiagaraDebugHUDVariable *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FNiagaraDebugHUDVariable,FNiagaraDebugHUDVariable,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddDefaulted @ 149283f60

int __thiscall
TArray<TSharedPtr<FNiagaraDataSetReadback,1>,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TSharedPtr<FNiagaraDataSetReadback,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// Remove @ 1492b36d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UNiagaraSimulationStageBase> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UNiagaraSimulationStageBase **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UNiagaraSimulationStageBase **)(pFVar1 + lVar6 * 8) !=
                     (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 1492b3840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 1492b3910

void __thiscall
TArray<FNiagaraParameterDirectBinding<int>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraParameterDirectBinding<int>,TSizedDefaultAllocator<32>_> *this,int param_1
          ,int param_2)

{
  int iVar1;
  FNiagaraParameterDirectBinding<int> *_Dst;
  
  _Dst = (FNiagaraParameterDirectBinding<int> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<FNiagaraParameterDirectBinding<int>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1492b3980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<FNiagaraEventHandlingInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraEventHandlingInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FNiagaraEventHandlingInfo *_Dst;
  
  _Dst = (FNiagaraEventHandlingInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x78);
  DestructItems<FNiagaraEventHandlingInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x78);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1492b39f0

void __thiscall
TArray<FNiagaraScriptExecutionContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraScriptExecutionContext,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FNiagaraScriptExecutionContext *_Dst;
  
  _Dst = (FNiagaraScriptExecutionContext *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x2b0);
  DestructItems<FNiagaraScriptExecutionContext,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x2b0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1492b5900

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNiagaraSpawnInfo,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNiagaraSpawnInfo,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 1492b5a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<double,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<double,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_><FNiagaraTypeDefinition_const_,int> @ 1492c7140

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_><FNiagaraTypeDefinition_const_,int>
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FNiagaraTypeDefinition_const_,int> *param_1)

{
  int iVar1;
  FNiagaraTypeDefinition *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<FNiagaraTypeDefinition,FNiagaraTypeDefinition,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// AddUniqueImpl<FNiagaraVariable_const_&> @ 1492c92f0

int __thiscall
TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNiagaraVariable_const_&>
          (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *this,FNiagaraVariable *param_1)

{
  FNiagaraVariable *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraVariable *pFVar5;
  
  pFVar1 = (FNiagaraVariable *)(this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar5 = pFVar1;
    do {
      if ((pFVar5->_padding_ == param_1->_padding_) &&
         ((int)pFVar5->_padding_ == (int)param_1->_padding_)) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 5);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  FNiagaraVariable::FNiagaraVariable
            ((FNiagaraVariable *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20),param_1);
  return iVar4;
}

// IndexOfByKey<FNiagaraFunctionSignature> @ 1492cd6a0

int __thiscall
TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_>::
IndexOfByKey<FNiagaraFunctionSignature>
          (TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_> *this,
          FNiagaraFunctionSignature *param_1)

{
  short sVar1;
  FNiagaraFunctionSignature *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FNiagaraFunctionSignature *this_00;
  longlong lVar15;
  FNiagaraFunctionSignature *local_50;
  FNiagaraFunctionSignature *local_48;
  
  iVar10 = this->ArrayNum;
  pFVar2 = (FNiagaraFunctionSignature *)(this->AllocatorInstance).Data;
  this_00 = pFVar2;
  do {
    if (this_00 == pFVar2 + iVar10) {
      return -1;
    }
    local_50 = param_1;
    local_48 = this_00;
    bVar8 = `FNiagaraFunctionSignature::operator=='::__l2::<lambda_1>::operator()(&local_50);
    sVar1 = this_00->RequiredInputs;
    bVar6 = true;
    if ((sVar1 != -1) || (this_00->RequiredOutputs != -1)) {
      iVar12 = (this_00->Inputs).ArrayNum;
      if (((param_1->Inputs).ArrayNum == iVar12) && (sVar1 == param_1->RequiredInputs)) {
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
      if (((param_1->Outputs).ArrayNum != (this_00->Outputs).ArrayNum) ||
         (this_00->RequiredOutputs != param_1->RequiredOutputs)) {
        bVar6 = false;
      }
      bVar6 = (bool)(bVar6 & bVar7);
      if (bVar6) {
        if ((sVar1 != -1) &&
           (uVar14 = (ulonglong)this_00->RequiredInputs, this_00->RequiredInputs < iVar12)) {
          lVar15 = uVar14 << 5;
          bVar6 = true;
          do {
            uVar13 = (uint)uVar14;
            uVar11 = 0;
            if ((int)uVar13 < (this_00->Inputs).ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              iVar10 = (*pcVar5)();
              return iVar10;
            }
            pFVar3 = (this_00->Inputs).AllocatorInstance.Data;
            uVar11 = 0;
            if ((int)uVar13 < (param_1->Inputs).ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              iVar10 = (*pcVar5)();
              return iVar10;
            }
            pFVar4 = (param_1->Inputs).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar3 + lVar15) == *(longlong *)(pFVar4 + lVar15)) &&
               (*(int *)(pFVar3 + lVar15 + 8) == *(int *)(pFVar4 + lVar15 + 8))) {
              bVar7 = 1;
            }
            else {
              bVar7 = 0;
            }
            bVar6 = (bool)(bVar6 & bVar7);
            uVar14 = (ulonglong)(uVar13 + 1);
            lVar15 = lVar15 + 0x20;
          } while ((int)(uVar13 + 1) < (this_00->Inputs).ArrayNum);
          if (!bVar6) goto LAB_1492cd933;
        }
        sVar1 = this_00->RequiredOutputs;
        uVar14 = (ulonglong)sVar1;
        if ((sVar1 != -1) && (iVar12 = (this_00->Outputs).ArrayNum, sVar1 < iVar12)) {
          lVar15 = uVar14 * 0xc;
          do {
            uVar13 = (uint)uVar14;
            uVar11 = 0;
            if ((int)uVar13 < iVar12) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              iVar10 = (*pcVar5)();
              return iVar10;
            }
            pFVar3 = (this_00->Outputs).AllocatorInstance.Data;
            uVar11 = 0;
            if ((int)uVar13 < (param_1->Outputs).ArrayNum) {
              uVar11 = ~uVar13 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              iVar10 = (*pcVar5)();
              return iVar10;
            }
            pFVar4 = (param_1->Outputs).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar3 + lVar15) == *(longlong *)(pFVar4 + lVar15)) &&
               (*(int *)(pFVar3 + lVar15 + 8) == *(int *)(pFVar4 + lVar15 + 8))) {
              bVar7 = 1;
            }
            else {
              bVar7 = 0;
            }
            iVar12 = (this_00->Outputs).ArrayNum;
            bVar6 = (bool)(bVar6 & bVar7);
            uVar14 = (ulonglong)(uVar13 + 1);
            lVar15 = lVar15 + 0xc;
          } while ((int)(uVar13 + 1) < iVar12);
        }
      }
    }
LAB_1492cd933:
    bVar9 = FNiagaraFunctionSignature::EqualsIgnoringSpecifiers(this_00,param_1);
    if (((bVar9) && (bVar8)) && (bVar6)) {
      return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x98);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> @ 1492cf780

TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> @ 1492cf7a0

TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> @ 1492cf7c0

TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>::
TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>
          (TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> @ 1492d3480

void __thiscall
TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_>::
~TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraSystemGpuComputeProxy_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> @ 1492d34a0

void __thiscall
TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_>::
~TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraDrawIndirectArgGenTaskInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> @ 1492d34c0

void __thiscall
TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>::
~TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_>
          (TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTransferResourceParams,int>
            ((FTransferResourceParams *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1492d4d20

TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FNiagaraVariableAttributeBinding_const_*> *param_1)

{
  int *piVar1;
  FNiagaraVariableAttributeBinding **_Src;
  int iVar2;
  
  _Src = param_1->_First;
  piVar1 = &this->ArrayMax;
  iVar2 = (int)((longlong)param_1->_Last - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// Remove @ 149303370

int __thiscall
TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *this,FNiagaraVariable *param_1)

{
  FNiagaraVariable *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  
  pFVar1 = (FNiagaraVariable *)(this->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  lVar8 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  if ((*(longlong *)pFVar2 == param_1->_padding_) &&
     (*(int *)(pFVar2 + 8) == (int)param_1->_padding_)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  lVar9 = 0;
  iVar11 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar12 = iVar11 + 1;
    if (lVar9 < lVar8) {
      pFVar6 = pFVar2 + lVar9 * 0x20;
      do {
        if ((*(longlong *)pFVar6 == param_1->_padding_) &&
           (*(int *)(pFVar6 + 8) == (int)param_1->_padding_)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 1;
        }
        if (bVar14 != bVar7) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        pFVar6 = pFVar6 + 0x20;
      } while (lVar9 < lVar8);
    }
    iVar10 = iVar12 - iVar11;
    if (bVar14 == 0) {
      DestructItems<FNiagaraVariable,int>
                ((FNiagaraVariable *)(pFVar2 + (longlong)iVar11 * 0x20),iVar10);
    }
    else {
      if (iVar13 != iVar11) {
        memmove(pFVar2 + (longlong)iVar13 * 0x20,pFVar2 + (longlong)iVar11 * 0x20,
                (longlong)iVar10 << 5);
      }
      iVar13 = iVar13 + iVar10;
    }
    bVar14 = bVar14 ^ 1;
    iVar11 = iVar12;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar13;
      return iVar5 - iVar13;
    }
  } while( true );
}

// RemoveAtImpl @ 149303550

void __thiscall
TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FNiagaraVariable *_Dst;
  
  _Dst = (FNiagaraVariable *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FNiagaraVariable,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 1493035d0

void __thiscall
TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 149303b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TSharedPtr<FNiagaraDataChannelDataProxy,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FNiagaraDataChannelDataProxy,1> *param_1,EAllowShrinking param_2)

{
  TSharedPtr<FNiagaraDataChannelDataProxy,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  pTVar1 = (TSharedPtr<FNiagaraDataChannelDataProxy,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar10 = iVar5;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar7 = uVar8;
      if (*(FNiagaraDataChannelDataProxy **)((this->AllocatorInstance).Data + lVar9) ==
          param_1->Object) {
        uVar7 = uVar8 - 1;
        lVar9 = lVar9 + -0x10;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar10 = this->ArrayNum;
      uVar8 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// operator=<TSizedDefaultAllocator<32>,TObjectPtr<UNiagaraDataInterface>_> @ 149317c60

TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_>::
operator=<TSizedDefaultAllocator<32>,TObjectPtr<UNiagaraDataInterface>_>
          (TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *this,
          TArray<UNiagaraDataInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UNiagaraDataInterface>,UNiagaraDataInterface_*,int>
            ((this->AllocatorInstance).Data,(UNiagaraDataInterface **)pFVar3,iVar2);
  return this;
}

// operator=<TSizedDefaultAllocator<32>,TObjectPtr<UObject>_> @ 149317cf0

TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
operator=<TSizedDefaultAllocator<32>,TObjectPtr<UObject>_>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UObject>,UObject_*,int>
            ((this->AllocatorInstance).Data,(UObject **)pFVar3,iVar2);
  return this;
}

// operator=<TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> @ 149317d80

TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> * __thiscall
TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_>::
operator=<TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TPlane<double>,TFixedAllocator<12>_> *this,
          TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<UE::Math::TPlane<double>_> FVar2;
  int *piVar3;
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  iVar1 = param_1->ArrayNum;
  piVar3 = &this->ArrayMax;
  if (FVar2 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    param_1 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
               *)FVar2;
  }
  this->ArrayNum = iVar1;
  if ((iVar1 == 0) && (*piVar3 == 0)) {
    *piVar3 = 0xc;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<0,TFixedAllocator<12>::ForElementType<UE::Math::TPlane<double>_>_>
            (0x20,0x10,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
  if (iVar1 != 0) {
    memcpy(this,param_1,(longlong)iVar1 << 5);
  }
  return this;
}

// AddUniqueImpl<FNiagaraParameterStore_*_const_&> @ 149318480

int __thiscall
TArray<FNiagaraParameterStore_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FNiagaraParameterStore_*_const_&>
          (TArray<FNiagaraParameterStore_*,TSizedDefaultAllocator<32>_> *this,
          FNiagaraParameterStore **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FNiagaraParameterStore **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FNiagaraParameterStore **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>_> @ 149318580

int __thiscall
TArray<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>_>
          (TArray<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar4 + 1;
    *(FWeakObjectPtr *)(pFVar1 + (longlong)iVar4 * 8) = param_1->WeakPtr;
  }
  return iVar4;
}

// TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 149331e90

TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this)

{
  (this->AllocatorInstance).SecondaryData = (ForElementType<int>)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0x20;
  return this;
}

// TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_> @ 149331ec0

TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 1493358f0

void __thiscall
TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
~TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *this)

{
  ForElementType<int> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 == (ForElementType<int>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<int>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// ~TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_> @ 149335910

void __thiscall
TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_>::
~TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraRibbonGPUInitParameters,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraRibbonGPUInitParameters,int>
            ((FNiagaraRibbonGPUInitParameters *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 149336e80

TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UNiagaraDataInterface>,TObjectPtr<UNiagaraDataInterface>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UNiagaraDataInterface> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 149336f10

TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  ForElementType<unsigned___int64> FVar2;
  int *piVar3;
  ForElementType<unsigned___int64> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      param_1 = (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 10;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<unsigned___int64>)this;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// AddDefaulted_GetRef @ 14933b6c0

SimpleLightData * __thiscall
TArray<FNiagaraRendererLights::SimpleLightData,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<FNiagaraRendererLights::SimpleLightData,TSizedDefaultAllocator<32>_> *this)

{
  SimpleLightData *pSVar1;
  int iVar2;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  pSVar1 = (SimpleLightData *)((this->AllocatorInstance).Data + (longlong)iVar2 * 0x48);
  DefaultConstructItems<FNiagaraRendererLights::SimpleLightData,int>(pSVar1,1);
  return pSVar1;
}

// AddZeroed @ 14933bf70

int __thiscall
TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
          (TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  ForElementType<FRibbonMultiRibbonInfo> FVar1;
  int iVar2;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRibbonMultiRibbonInfo>_>
                    (0x58,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
    this = (TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  memset((void *)((longlong)iVar2 * 0x58 + (longlong)this),0,(longlong)param_1 * 0x58);
  return iVar2;
}

// Find @ 149346860

int __thiscall
TArray<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *this_00;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 8) {
      return -1;
    }
    bVar3 = TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr>::UEOpEquals<UNiagaraEffectType,bool>
                      ((TWeakObjectPtr<UNiagaraEffectType,FWeakObjectPtr> *)this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 8;
  }
  return (int)((longlong)this_00 - (longlong)pFVar2 >> 3);
}

// InsertUninitializedImpl @ 14935e470

void __thiscall
TArray<FNiagaraVariableWithOffset,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
          (TArray<FNiagaraVariableWithOffset,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// RemoveAtImpl @ 149365720

void __thiscall
TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_> *this
          ,int param_1,int param_2)

{
  int iVar1;
  FComponentPoolEntry *_Dst;
  
  _Dst = (FComponentPoolEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x68);
  DestructItems<FNiagaraRendererComponents::FComponentPoolEntry,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x68);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 149365790

void __thiscall
TArray<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x38;
  if (*(void **)(_Dst + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x28));
  }
  if (*(void **)(_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  if (*(void **)(_Dst + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 8));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x38,(longlong)iVar2 * 0x38);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 149365830

void __thiscall
TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<FNiagaraRendererComponents::FComponentPoolEntry,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x68;
  *(undefined4 *)(_Dst + 0x58) = 0;
  if (*(void **)(_Dst + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNiagaraRendererComponents::FComponentPropertyAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(_Dst + 0x10));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x68,(longlong)iVar2 * 0x68);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// operator=<unsigned_char,__int64> @ 14937b720

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=<unsigned_char,__int64>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,
          TArrayView<unsigned_char,__int64> *param_1)

{
  int *piVar1;
  int iVar2;
  size_t _Size;
  uchar *_Src;
  code *pcVar3;
  bool bVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  
  _Size = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  iVar2 = *piVar1;
  _Src = param_1->DataPtr;
  iVar6 = (int)_Size;
  if ((longlong)iVar6 != _Size) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OtherSizeType)NewNum == OtherNum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0xdac,L"Invalid number of elements to add to this array type: %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  this->ArrayNum = iVar6;
  if ((_Size == 0) && (iVar2 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,iVar2,&this->AllocatorInstance,iVar6,piVar1);
    if (_Size != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,_Size);
    }
  }
  return this;
}

// Empty @ 14939f710

void __thiscall
TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
              ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 1493b4ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  FNiagaraDataSetExecutionInfo *_Dst;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar1;
  int iVar2;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FNiagaraDataSetExecutionInfo>)this;
  if (FVar1 != (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FNiagaraDataSetExecutionInfo *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  DestructItems<FNiagaraDataSetExecutionInfo,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1493b4c20

void __thiscall
TArray<FNiagaraSimCacheDebugDataFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraSimCacheDebugDataFrame,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x50;
  DestructItems<FNiagaraSimCacheDebugDataFrame,int>((FNiagaraSimCacheDebugDataFrame *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x50,(longlong)iVar1 * 0x50);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1493b4ca0

void __thiscall
TArray<FNiagaraSimCacheFrame,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraSimCacheFrame,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FNiagaraSimCacheFrame *_Dst;
  
  _Dst = (FNiagaraSimCacheFrame *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x160);
  DestructItems<FNiagaraSimCacheFrame,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x160);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 1493b6810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<FDataSetMeta> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FDataSetMeta> FVar7;
  uint uVar8;
  void *_Dst;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataSetMeta>_>
                      (0x78,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FDataSetMeta>)0x0) {
      this = (TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    DefaultConstructItems<FDataSetMeta,int>
              ((void *)((longlong)iVar5 * 0x78 + (longlong)this),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FDataSetMeta>)this;
        if (FVar2 != (ForElementType<FDataSetMeta>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x78 + (longlong)FVar7);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar8 * 0x78 + (longlong)_Dst),(longlong)iVar6 * 0x78
                 );
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataSetMeta>_>
                    (0x78,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1493b6980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
SetNum(TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataSetExecutionInfo>_>
                      (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
      this = (TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<FNiagaraDataSetExecutionInfo,int>
              ((void *)((longlong)this + (longlong)iVar6 * 0x18),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataSetExecutionInfo>_>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNumZeroed @ 1493b6ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<void_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<void_*,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FNiagaraTypeDefinition_const_&> @ 1493c4720

int __thiscall
TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FNiagaraTypeDefinition_const_&>
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *this,
          FNiagaraTypeDefinition *param_1)

{
  FScriptContainerElement *pFVar1;
  FNiagaraTypeDefinition *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = Find(this,param_1);
  if (iVar6 == -1) {
    pFVar2 = (FNiagaraTypeDefinition *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    iVar6 = this->ArrayNum;
    if (iVar6 == this->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar6 + 1;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
    pUVar3 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
    *(UObject **)pFVar1 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(ushort *)(pFVar1 + 8) = param_1->UnderlyingType;
    pFVar1[10] = (FScriptContainerElement)param_1->Flags;
    *(short *)(pFVar1 + 0xc) = param_1->Size;
    *(short *)(pFVar1 + 0xe) = param_1->Alignment;
    *(int *)(pFVar1 + 0x10) = param_1->RegisteredTypeDefIndex;
    *(uint *)(pFVar1 + 0x14) = param_1->UnderlyingTypePathNameHash;
  }
  return iVar6;
}

// TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> @ 1493cc010

TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> @ 1493cc030

TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_>::
TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> @ 1493d0890

void __thiscall
TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_>::
~TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> @ 1493d08b0

void __thiscall
TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_>::
~TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_>
          (TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraPerInstanceDIFuncInfo,int>
            ((FNiagaraPerInstanceDIFuncInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1493d20b0

TArray<FNiagaraParameterDataSetBinding,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraParameterDataSetBinding,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraParameterDataSetBinding,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraParameterDataSetBinding,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 1493d2150

TArray<FNiagaraParameterDataSetBindingCollection,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraParameterDataSetBindingCollection,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraParameterDataSetBindingCollection,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraParameterDataSetBindingCollection,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraParameterDataSetBindingCollection *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNiagaraParameterDataSetBindingCollection,int>
              ((FNiagaraParameterDataSetBindingCollection *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FNiagaraParameterDataSetBindingCollection *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FNiagaraParameterDataSetBindingCollection,FNiagaraParameterDataSetBindingCollection,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 1493d21f0

TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FNiagaraTypeDefinition *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FNiagaraTypeDefinition *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FNiagaraTypeDefinition,FNiagaraTypeDefinition,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// Find @ 1493e29d0

int __thiscall
TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>::Find
          (TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *this,
          FNiagaraTypeDefinition *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x18) {
    pFVar2 = pFVar1;
    do {
      if (((*(UObject **)pFVar2 == (param_1->ClassStructOrEnum).field0_0x0.DebugPtr) &&
          (*(ushort *)(pFVar2 + 8) == param_1->UnderlyingType)) &&
         (pFVar2[10] == (FScriptContainerElement)param_1->Flags)) {
        return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x18);
      }
      pFVar2 = pFVar2 + 0x18;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0x18);
  }
  return -1;
}

// RemoveAtImpl @ 1493f5510

void __thiscall
TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FNiagaraParameterStoreToDataSetBinding *_Dst;
  
  _Dst = (FNiagaraParameterStoreToDataSetBinding *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FNiagaraParameterStoreToDataSetBinding,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1493f5590

void __thiscall
TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1493f5610

void __thiscall
TArray<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1493f5690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *_Dst;
  
  _Dst = (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 1493f6bd0

void __thiscall
TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::Reset(TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_> *)
           (this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,int>
              (pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,int>
            (pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 1493f9810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraEmitterExecutionIndex,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNiagaraEmitterExecutionIndex,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNiagaraEmitterExecutionIndex,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 1493f9950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNiagaraParameterStoreToDataSetBinding,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x30,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 1493f9a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::SetNum(TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,0,
           (longlong)(param_1 - iVar2) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// FindItemByClass<UNiagaraStatelessModule_InitializeParticle> @ 14941df80

bool __thiscall
TArray<TObjectPtr<UNiagaraStatelessModule>,TSizedDefaultAllocator<32>_>::
FindItemByClass<UNiagaraStatelessModule_InitializeParticle>
          (TArray<TObjectPtr<UNiagaraStatelessModule>,TSizedDefaultAllocator<32>_> *this,
          UNiagaraStatelessModule_InitializeParticle **param_1,int *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar8 = (ulonglong)param_3;
  pUVar6 = UNiagaraStatelessModule_InitializeParticle::StaticClass();
  iVar9 = this->ArrayNum;
  if (param_3 < iVar9) {
    lVar10 = uVar8 * 8;
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar9) {
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
      if (*(longlong *)((this->AllocatorInstance).Data + lVar10) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < this->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = *(longlong *)(*(longlong *)((this->AllocatorInstance).Data + lVar10) + 0x10);
        iVar9 = (int)pUVar6->_padding_;
        if ((iVar9 <= *(int *)(lVar1 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar6->_padding_)) {
          if (param_1 != (UNiagaraStatelessModule_InitializeParticle **)0x0) {
            uVar5 = 0;
            if ((int)uVar7 < this->ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            *param_1 = *(UNiagaraStatelessModule_InitializeParticle **)
                        ((this->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
          }
          if (param_2 != (int *)0x0) {
            *param_2 = uVar7;
          }
          return true;
        }
      }
      iVar9 = this->ArrayNum;
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar10 = lVar10 + 8;
    } while ((int)(uVar7 + 1) < iVar9);
  }
  return false;
}

// AddDefaulted_GetRef @ 149430910

FNiagaraCachedViewInfo * __thiscall
TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
AddDefaulted_GetRef(TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                    *this)

{
  ForElementType<FNiagaraCachedViewInfo> FVar1;
  int iVar2;
  FNiagaraCachedViewInfo *pFVar3;
  
  iVar2 = this->ArrayNum;
  if (iVar2 == this->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraCachedViewInfo>_>
                      (0x2e0,0x10,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar2 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FNiagaraCachedViewInfo>)0x0) {
    this = (TArray<FNiagaraCachedViewInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  pFVar3 = (FNiagaraCachedViewInfo *)((longlong)this + (longlong)iVar2 * 0x2e0);
  DefaultConstructItems<FNiagaraCachedViewInfo,int>(pFVar3,1);
  return pFVar3;
}

// RemoveAtSwapImpl @ 149463240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,TSizedDefaultAllocator<32>_>
::RemoveAtSwapImpl(TArray<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,TSizedDefaultAllocator<32>_>
                   *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>::operator()
            ((TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache> *)
             (pFVar1 + (longlong)param_1 * 8),
             *(FStatelessDataCache **)(pFVar1 + (longlong)param_1 * 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache> *)
            (pFVar1 + (longlong)param_1 * 8),pFVar1 + (longlong)(this->ArrayNum - iVar2) * 8,
            (longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

