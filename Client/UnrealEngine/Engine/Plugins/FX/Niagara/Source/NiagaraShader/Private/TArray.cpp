// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 8

// AddUniqueImpl<UNiagaraDataInterfaceBase_*_const_&> @ 148deb670

int __thiscall
TArray<UNiagaraDataInterfaceBase_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UNiagaraDataInterfaceBase_*_const_&>
          (TArray<UNiagaraDataInterfaceBase_*,TSizedDefaultAllocator<32>_> *this,
          UNiagaraDataInterfaceBase **param_1)

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
      if (*(UNiagaraDataInterfaceBase **)pFVar5 == *param_1) {
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
  *(UNiagaraDataInterfaceBase **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// operator= @ 148df1780

TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNiagaraDataInterfaceGPUParamInfo *pFVar3;
  
  if (this != param_1) {
    DestructItems<FNiagaraDataInterfaceGPUParamInfo,int>
              ((FNiagaraDataInterfaceGPUParamInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FNiagaraDataInterfaceGPUParamInfo *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FNiagaraDataInterfaceGPUParamInfo,FNiagaraDataInterfaceGPUParamInfo,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 148df1820

TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *this,
          TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FNiagaraVariableCommonReference *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FNiagaraVariableCommonReference *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FNiagaraVariableCommonReference,FNiagaraVariableCommonReference,int>
              ((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// Empty @ 148dfb3f0

void __thiscall
TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 148dfb440

void __thiscall
TArray<FNiagaraDataInterfaceGeneratedFunction,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FNiagaraDataInterfaceGeneratedFunction,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<FNiagaraDataInterfaceGeneratedFunction,int>
              ((FNiagaraDataInterfaceGeneratedFunction *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 148dfb4b0

void __thiscall
TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FNiagaraVariableCommonReference,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNumZeroed @ 148e0d5f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSHAHash,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<FSHAHash,TMemoryImageAllocator<0>_> *this,int param_1,EAllowShrinking param_2)

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
                      (0x14,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 0x14),0,(longlong)(param_1 - iVar5) * 0x14);
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
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 0x14);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 0x14),(longlong)iVar5 * 0x14
                 );
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x14,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 148e0d760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  void *_Dst;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x20,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)iVar4 * 0x20 + (longlong)FVar6),0,(longlong)(param_1 - iVar5) << 5);
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
        _Dst = (void *)((longlong)param_1 * 0x20 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x20 + (longlong)_Dst),(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

