// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// AddUniqueImpl<TObjectPtr<UMaterialInterface>_const_&> @ 14e8f5840

int __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UMaterialInterface>_const_&>
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMaterialInterface> *param_1)

{
  FScriptContainerElement *pFVar1;
  UMaterialInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UMaterialInterface **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
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
  *(UMaterialInterface **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// operator= @ 14e933e60

TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *param_1)

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
    ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 14e933ef0

TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *param_1)

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
    ConstructItems<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UMaterial> *)pFVar2,iVar1);
  }
  return this;
}

// operator= @ 14e933f80

TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *this,
          TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FDataflowRootProxyMesh *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDataflowRootProxyMesh,int>
              ((FDataflowRootProxyMesh *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FDataflowRootProxyMesh *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDataflowRootProxyMesh,FDataflowRootProxyMesh,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14e934020

TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *this,
          TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGeometryCollectionAutoInstanceMesh *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGeometryCollectionAutoInstanceMesh,int>
              ((FGeometryCollectionAutoInstanceMesh *)(this->AllocatorInstance).Data,this->ArrayNum)
    ;
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGeometryCollectionAutoInstanceMesh *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGeometryCollectionAutoInstanceMesh,FGeometryCollectionAutoInstanceMesh,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14e9340c0

TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *this,
          TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FGeometryCollectionSource *pFVar3;
  
  if (this != param_1) {
    DestructItems<FGeometryCollectionSource,int>
              ((FGeometryCollectionSource *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FGeometryCollectionSource *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Init @ 14e955130

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::Init
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this,FLinearColor *param_1,int param_2)

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
              (0x10,4,param_2,&this->AllocatorInstance,0,piVar1);
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
                          (0x410,&this->AllocatorInstance,piVar1);
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

// RemoveAtImpl @ 14e95aac0

void __thiscall
TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FDataflowStringConvertibleTypes,int>
            ((FDataflowStringConvertibleTypes *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14e95ab40

void __thiscall
TArray<UE::Private::FTransferData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Private::FTransferData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FTransferData *_Dst;
  int iVar1;
  
  _Dst = (FTransferData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<UE::Private::FTransferData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14e95abc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *this,int param_1,
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

// SetNum @ 14e95ad00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FDataflowStringConvertibleTypes,TSizedDefaultAllocator<32>_> *this,int param_1,
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
    DefaultConstructItems<FDataflowStringConvertibleTypes,int>
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

// SetNum @ 14e95ae30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Private::FTransferData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::Private::FTransferData,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (0x28,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::Private::FTransferData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x28,param_1 - iVar2);
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
                  (0x28,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

