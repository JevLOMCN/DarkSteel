// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 5

// operator== @ 14cee4d80

bool __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator==
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  if (this->ArrayNum == param_1->ArrayNum) {
    bVar1 = CompareItems<TObjectPtr<UMaterialInterface>,int>
                      ((TObjectPtr<UMaterialInterface> *)(this->AllocatorInstance).Data,
                       (TObjectPtr<UMaterialInterface> *)(param_1->AllocatorInstance).Data,
                       this->ArrayNum);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Pop @ 14cef4d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UDynamicMesh * __thiscall
TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_>::Pop
          (TArray<UDynamicMesh_*,TSizedDefaultAllocator<32>_> *this,EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  int iVar4;
  
  if (this->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  iVar4 = this->ArrayNum + -1;
  pUVar3 = *(UDynamicMesh **)((this->AllocatorInstance).Data + (longlong)this->ArrayNum * 8 + -8);
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return pUVar3;
}

// RemoveAtImpl @ 14cef87a0

void __thiscall
TArray<FGeometryScriptColorList,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGeometryScriptColorList,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FGeometryScriptColorList,int>((FGeometryScriptColorList *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14cef8820

void __thiscall
TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FGeometryScriptVectorList,int>((FGeometryScriptVectorList *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14cef98c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FGeometryScriptVectorList,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

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
    DefaultConstructItems<FGeometryScriptVectorList,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x10,param_1 - iVar2);
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

