// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 6

// AddUniqueImpl<FLocKey_const_&> @ 146b38820

int __thiscall
TArray<FLocKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FLocKey_const_&>
          (TArray<FLocKey,TSizedDefaultAllocator<32>_> *this,FLocKey *param_1)

{
  FScriptContainerElement *this_00;
  FLocKey *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FLocKey *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
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
                        (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    this_00 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x18;
    ::FString::FString((FString *)this_00,&param_1->Str);
    *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x10].field_0x0)->
              AllocatorInstance).Data = param_1->Hash;
  }
  return iVar4;
}

// Append<TObjectPtr<ULocalizationTarget>,TSizedDefaultAllocator<32>_> @ 146b38900

void __thiscall
TArray<ULocalizationTarget_*,TSizedDefaultAllocator<32>_>::
Append<TObjectPtr<ULocalizationTarget>,TSizedDefaultAllocator<32>_>
          (TArray<ULocalizationTarget_*,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<ULocalizationTarget>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == (TArray<ULocalizationTarget_*,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<ULocalizationTarget_*,TObjectPtr<ULocalizationTarget>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (TObjectPtr<ULocalizationTarget> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 146b44de0

TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *this,
          TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGatherTextExcludePath *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGatherTextExcludePath,int>
              ((FGatherTextExcludePath *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGatherTextExcludePath *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGatherTextExcludePath,FGatherTextExcludePath,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146b44e80

TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *this,
          TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGatherTextFileExtension,int>
              ((FGatherTextFileExtension *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              ((this->AllocatorInstance).Data,(FGatherTextFileExtension *)pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146b44f20

TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> *this,
          TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGatherTextIncludePath *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGatherTextIncludePath,int>
              ((FGatherTextIncludePath *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGatherTextIncludePath *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGatherTextIncludePath,FGatherTextIncludePath,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Find @ 146b5e960

int __thiscall
TArray<FLocKey,TSizedDefaultAllocator<32>_>::Find
          (TArray<FLocKey,TSizedDefaultAllocator<32>_> *this,FLocKey *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  FScriptContainerElement *pFVar5;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar1 * 0x18) {
    uVar2 = param_1->Hash;
    pFVar5 = pFVar3;
    do {
      if (*(uint *)(pFVar5 + 0x10) == uVar2) {
        if ((param_1->Str).Data.ArrayNum == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
        }
        if (*(int *)(pFVar5 + 8) == 0) {
          _Str1 = L"";
        }
        else {
          _Str1 = *(wchar_t **)pFVar5;
        }
        iVar4 = wcscmp(_Str1,_Str2);
        if (iVar4 == 0) {
          return (int)(((longlong)pFVar5 - (longlong)pFVar3) / 0x18);
        }
      }
      pFVar5 = pFVar5 + 0x18;
    } while (pFVar5 != pFVar3 + (longlong)iVar1 * 0x18);
  }
  return -1;
}

