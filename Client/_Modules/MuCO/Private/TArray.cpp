// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 38

// operator= @ 14aba2f90

TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *param_1)

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
    ConstructItems<TObjectPtr<UPhysicsAsset>,TObjectPtr<UPhysicsAsset>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UPhysicsAsset> *)pFVar2,iVar1);
  }
  return this;
}

// AddUniqueImpl<TObjectPtr<UPhysicsAsset>_const_&> @ 14abae030

int __thiscall
TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UPhysicsAsset>_const_&>
          (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UPhysicsAsset> *param_1)

{
  FScriptContainerElement *pFVar1;
  UPhysicsAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UPhysicsAsset **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
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
  *(UPhysicsAsset **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPhysicsAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<FName_const_&> @ 14abae140

int __thiscall
TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::AddUniqueImpl<FName_const_&>
          (TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          FName *param_1)

{
  ForElementType<FName> FVar1;
  ForElementType<FName> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FName> FVar6;
  ForElementType<FName> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FName>)((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FName *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FName>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FName>)this;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FName>)this;
    if (FVar2 != (ForElementType<FName>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FName *)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    this = (TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FName *)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<USkeleton>_> @ 14abae250

int __thiscall
TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<USkeleton>_>
          (TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<USkeleton> *param_1)

{
  FScriptContainerElement *pFVar1;
  USkeleton *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(USkeleton **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
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
  *(USkeleton **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// CopyToEmpty<TObjectPtr<USkeleton>,int> @ 14abaf160

void __thiscall
TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::CopyToEmpty<TObjectPtr<USkeleton>,int>
          (TArray<TObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<USkeleton> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TObjectPtr<USkeleton>,TObjectPtr<USkeleton>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// CopyToEmpty<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int> @ 14abaf1e0

void __thiscall
TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
::
CopyToEmpty<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
          (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
           *this,FHandle *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14abbfac0

TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectBoolParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectBoolParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectBoolParameterValue,int>
              ((FCustomizableObjectBoolParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectBoolParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectBoolParameterValue,FCustomizableObjectBoolParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbfb60

TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectFloatParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectFloatParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectFloatParameterValue,int>
              ((FCustomizableObjectFloatParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectFloatParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectFloatParameterValue,FCustomizableObjectFloatParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbfc00

TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectIntParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectIntParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectIntParameterValue,int>
              ((FCustomizableObjectIntParameterValue *)(this->AllocatorInstance).Data,this->ArrayNum
              );
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectIntParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectIntParameterValue,FCustomizableObjectIntParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbfca0

TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectProjectorParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectProjectorParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectProjectorParameterValue,int>
              ((FCustomizableObjectProjectorParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectProjectorParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectProjectorParameterValue,FCustomizableObjectProjectorParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbfd40

TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectSkeletalMeshParameterValue,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectSkeletalMeshParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectSkeletalMeshParameterValue,int>
              ((FCustomizableObjectSkeletalMeshParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectSkeletalMeshParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectSkeletalMeshParameterValue,FCustomizableObjectSkeletalMeshParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbfde0

TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectTextureParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectTextureParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectTextureParameterValue,int>
              ((FCustomizableObjectTextureParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectTextureParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectTextureParameterValue,FCustomizableObjectTextureParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbfe80

TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectTransformParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectTransformParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectTransformParameterValue,int>
              ((FCustomizableObjectTransformParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectTransformParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectTransformParameterValue,FCustomizableObjectTransformParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbff20

TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectVectorParameterValue,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizableObjectVectorParameterValue *pFVar3;
  
  if (this != param_1) {
    DestructItems<FCustomizableObjectVectorParameterValue,int>
              ((FCustomizableObjectVectorParameterValue *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FCustomizableObjectVectorParameterValue *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FCustomizableObjectVectorParameterValue,FCustomizableObjectVectorParameterValue,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14abbffc0

TArray<FPhysicsConstraintProfileHandle,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPhysicsConstraintProfileHandle,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPhysicsConstraintProfileHandle,TSizedDefaultAllocator<32>_> *this,
          TArray<FPhysicsConstraintProfileHandle,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x168,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x168);
    }
  }
  return this;
}

// Empty @ 14abd6900

void __thiscall
TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14abd6950

void __thiscall
TArray<FExtensionInstanceData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FExtensionInstanceData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FExtensionInstanceData,int>
              ((FExtensionInstanceData *)(this->AllocatorInstance).Data,this->ArrayNum);
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

// Init @ 14abe1540

void __thiscall
TArray<FCustomizableInstanceComponentData,TSizedDefaultAllocator<32>_>::Init
          (TArray<FCustomizableInstanceComponentData,TSizedDefaultAllocator<32>_> *this,
          FCustomizableInstanceComponentData *param_1,int param_2)

{
  int *piVar1;
  FCustomizableInstanceComponentData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  DestructItems<FCustomizableInstanceComponentData,int>
            ((FCustomizableInstanceComponentData *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FCustomizableInstanceComponentData *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = this->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x150,8,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar5 + 1;
      FCustomizableInstanceComponentData::FCustomizableInstanceComponentData
                ((FCustomizableInstanceComponentData *)
                 ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x150),param_1);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// RemoveAtImpl @ 14abeea60

void __thiscall
TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14abeeab0

void __thiscall
TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0xc,(longlong)iVar1 * 0xc);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14abeeb10

void __thiscall
TArray<FClothLODDataCommon,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FClothLODDataCommon,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FClothLODDataCommon *_Dst;
  
  _Dst = (FClothLODDataCommon *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x158);
  DestructItems<FClothLODDataCommon,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x158);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14abeeb90

void __thiscall
TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FMorphTargetLODModel *_Dst;
  
  _Dst = (FMorphTargetLODModel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FMorphTargetLODModel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14abeec10

void __thiscall
TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> FVar1;
  int iVar2;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>)
          this;
  if (FVar1 != (ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                )0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
         ((longlong)param_1 * 0x30 + (longlong)FVar3);
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            (_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14abeeca0

void __thiscall
TArray<TBulkData<unsigned_char>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TBulkData<unsigned_char>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  TBulkData<unsigned_char> *_Dst;
  int iVar1;
  
  _Dst = (TBulkData<unsigned_char> *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<TBulkData<unsigned_char>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Contains<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle> @ 14ac05210

bool __thiscall
TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>
::
Contains<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle>
          (TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>
           *this,FHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)this->ArrayNum * 0x18;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return false;
    }
    if ((*(uint *)pFVar3 == param_1->Id) &&
       (bVar2 = TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                ::
                UEOpEquals<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>_>
                          ((TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                            *)(pFVar3 + 8),&param_1->WeakRegistry), bVar2)) break;
    pFVar3 = pFVar3 + 0x18;
  }
  return true;
}

// operator= @ 14ac0d0f0

TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *this,
          TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x38,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return this;
}

// Empty @ 14ac19b00

void __thiscall
TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FCustomizableObjectProjector,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Init @ 14ac25b50

void __thiscall
TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
::Init(TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
       *this,FHandle *param_1,int param_2)

{
  int *piVar1;
  FHandle *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            ((FHandle *)(this->AllocatorInstance).Data,this->ArrayNum);
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_2,&this->AllocatorInstance,0,piVar1);
  }
  if (0 < param_2) {
    do {
      pFVar2 = (FHandle *)(this->AllocatorInstance).Data;
      if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *piVar1)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = this->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&this->AllocatorInstance,piVar1);
      }
      this->ArrayNum = iVar6 + 1;
      lVar7 = (longlong)iVar6;
      pFVar3 = (this->AllocatorInstance).Data;
      *(undefined4 *)(pFVar3 + lVar7 * 0x18) = 0xffffffff;
      *(undefined8 *)(pFVar3 + lVar7 * 0x18 + 8) = 0;
      *(undefined8 *)(pFVar3 + lVar7 * 0x18 + 0x10) = 0;
      TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
      FHandle::operator=((FHandle *)(pFVar3 + lVar7 * 0x18),param_1);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

// RemoveAt @ 14ac316c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMutableTaskGraph::FMutableThreadLowPriorityTask,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMutableTaskGraph::FMutableThreadLowPriorityTask,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *_Dst;
  
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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
  if (*(longlong *)(_Dst + 0x20) != 0) {
    pFVar5 = _Dst + 0x30;
    if (*(FScriptContainerElement **)(_Dst + 0x48) != (FScriptContainerElement *)0x0) {
      pFVar5 = *(FScriptContainerElement **)(_Dst + 0x48);
    }
    (**(code **)(*(longlong *)pFVar5 + 0x10))();
  }
  if (*(void **)(_Dst + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 8));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x60,(longlong)iVar4 * 0x60);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14ac317d0

void __thiscall
TArray<FInstanceUpdateData::FComponent,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FInstanceUpdateData::FComponent,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FComponent *_Dst;
  
  _Dst = (FComponent *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30);
  DestructItems<FInstanceUpdateData::FComponent,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ac31850

void __thiscall
TArray<FInstanceUpdateData::FLOD,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FInstanceUpdateData::FLOD,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FLOD *_Dst;
  
  _Dst = (FLOD *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x40);
  DestructItems<FInstanceUpdateData::FLOD,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ac318d0

void __thiscall
TArray<FInstanceUpdateData::FSkeletonData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FInstanceUpdateData::FSkeletonData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FSkeletonData *_Dst;
  
  _Dst = (FSkeletonData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x80);
  DestructItems<FInstanceUpdateData::FSkeletonData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 7);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ac31950

void __thiscall
TArray<TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14ac319d0

void __thiscall
TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *_Dst;
  
  _Dst = (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
          *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14ac36fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMorphTargetLODModel,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (0x40,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMorphTargetLODModel,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x40,param_1 - iVar2);
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
                  (0x40,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// Append<unsigned_short,TSizedDefaultAllocator<32>_> @ 14ac4efb0

void __thiscall
TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
Append<unsigned_short,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
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
                      (2,2,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 2,(param_1->AllocatorInstance).Data,
           (longlong)iVar1 * 2);
  }
  return;
}

// RemoveAtSwapImpl @ 14ac60ab0

void __thiscall
TArray<FUnrealMutableModelBulkReader::FObjectData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FUnrealMutableModelBulkReader::FObjectData,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  FObjectData *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FObjectData *)(pFVar1 + (longlong)param_1 * 0xd0);
  FUnrealMutableModelBulkReader::FObjectData::~FObjectData(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0xd0,(longlong)iVar2 * 0xd0);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 14ac60c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<FClothBufferIndexMapping,TSizedDefaultAllocator<32>_> *this,int param_1,
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
                      (0xc,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0xc,0,
           (longlong)(param_1 - iVar5) * 0xc);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0xc,(longlong)iVar5 * 0xc);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

