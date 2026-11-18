// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// TOptional<FPCGPinProperties> @ 1497252d0

TOptional<FPCGPinProperties> * __thiscall
TOptional<FPCGPinProperties>::TOptional<FPCGPinProperties>
          (TOptional<FPCGPinProperties> *this,TOptional<FPCGPinProperties> *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  this->bIsSet = false;
  bVar3 = param_1->bIsSet;
  this->bIsSet = bVar3;
  if (bVar3 != false) {
    (this->TypedValue).Label = (param_1->TypedValue).Label;
    (this->TypedValue).Usage = (param_1->TypedValue).Usage;
    pFVar1 = &(this->TypedValue).AllowedTypes;
    (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    piVar2 = &(this->TypedValue).AllowedTypes.Ids.ArrayMax;
    iVar4 = (param_1->TypedValue).AllowedTypes.Ids.ArrayNum;
    pFVar5 = (param_1->TypedValue).AllowedTypes.Ids.AllocatorInstance.Data;
    (this->TypedValue).AllowedTypes.Ids.ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                ((pFVar1->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar5,iVar4);
    }
    (this->TypedValue).AllowedTypes.CustomSubtype = (param_1->TypedValue).AllowedTypes.CustomSubtype
    ;
    (this->TypedValue).bAllowMultipleData = (param_1->TypedValue).bAllowMultipleData;
    (this->TypedValue).PinStatus = (param_1->TypedValue).PinStatus;
    (this->TypedValue).bInvisiblePin = (param_1->TypedValue).bInvisiblePin;
    (this->TypedValue).bAllowMultipleConnections = (param_1->TypedValue).bAllowMultipleConnections;
  }
  return this;
}

// TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> @ 14988bfc0

TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_>::
TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_>
          (TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> *this,
          TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->field0_0x0).TypedValue.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->field0_0x0).TypedValue.ArrayNum = param_1->ArrayNum;
  (this->field0_0x0).TypedValue.ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOptional<TArray<UPCGNode_*,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// TOptional<FHitResult> @ 149c49710

TOptional<FHitResult> * __thiscall
TOptional<FHitResult>::TOptional<FHitResult>
          (TOptional<FHitResult> *this,TOptional<FHitResult> *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  this->bIsSet = false;
  bVar1 = param_1->bIsSet;
  this->bIsSet = bVar1;
  if (bVar1 != false) {
    (this->TypedValue).FaceIndex = (param_1->TypedValue).FaceIndex;
    (this->TypedValue).Time = (param_1->TypedValue).Time;
    (this->TypedValue).Distance = (param_1->TypedValue).Distance;
    uVar3 = *(undefined8 *)&(param_1->TypedValue).Location.field_0x8;
    *(undefined8 *)&(this->TypedValue).Location = *(undefined8 *)&(param_1->TypedValue).Location;
    *(undefined8 *)&(this->TypedValue).Location.field_0x8 = uVar3;
    *(undefined8 *)&(this->TypedValue).Location.field_0x10 =
         *(undefined8 *)&(param_1->TypedValue).Location.field_0x10;
    uVar3 = *(undefined8 *)&(param_1->TypedValue).ImpactPoint.field_0x8;
    *(undefined8 *)&(this->TypedValue).ImpactPoint =
         *(undefined8 *)&(param_1->TypedValue).ImpactPoint;
    *(undefined8 *)&(this->TypedValue).ImpactPoint.field_0x8 = uVar3;
    *(undefined8 *)&(this->TypedValue).ImpactPoint.field_0x10 =
         *(undefined8 *)&(param_1->TypedValue).ImpactPoint.field_0x10;
    uVar3 = *(undefined8 *)&(param_1->TypedValue).Normal.field_0x8;
    *(undefined8 *)&(this->TypedValue).Normal = *(undefined8 *)&(param_1->TypedValue).Normal;
    *(undefined8 *)&(this->TypedValue).Normal.field_0x8 = uVar3;
    *(undefined8 *)&(this->TypedValue).Normal.field_0x10 =
         *(undefined8 *)&(param_1->TypedValue).Normal.field_0x10;
    uVar3 = *(undefined8 *)&(param_1->TypedValue).ImpactNormal.field_0x8;
    *(undefined8 *)&(this->TypedValue).ImpactNormal =
         *(undefined8 *)&(param_1->TypedValue).ImpactNormal;
    *(undefined8 *)&(this->TypedValue).ImpactNormal.field_0x8 = uVar3;
    *(undefined8 *)&(this->TypedValue).ImpactNormal.field_0x10 =
         *(undefined8 *)&(param_1->TypedValue).ImpactNormal.field_0x10;
    uVar3 = *(undefined8 *)&(param_1->TypedValue).TraceStart.field_0x8;
    *(undefined8 *)&(this->TypedValue).TraceStart = *(undefined8 *)&(param_1->TypedValue).TraceStart
    ;
    *(undefined8 *)&(this->TypedValue).TraceStart.field_0x8 = uVar3;
    *(undefined8 *)&(this->TypedValue).TraceStart.field_0x10 =
         *(undefined8 *)&(param_1->TypedValue).TraceStart.field_0x10;
    uVar3 = *(undefined8 *)&(param_1->TypedValue).TraceEnd.field_0x8;
    *(undefined8 *)&(this->TypedValue).TraceEnd = *(undefined8 *)&(param_1->TypedValue).TraceEnd;
    *(undefined8 *)&(this->TypedValue).TraceEnd.field_0x8 = uVar3;
    *(undefined8 *)&(this->TypedValue).TraceEnd.field_0x10 =
         *(undefined8 *)&(param_1->TypedValue).TraceEnd.field_0x10;
    (this->TypedValue).PenetrationDepth = (param_1->TypedValue).PenetrationDepth;
    (this->TypedValue).MyItem = (param_1->TypedValue).MyItem;
    (this->TypedValue).Item = (param_1->TypedValue).Item;
    (this->TypedValue).ElementIndex = (param_1->TypedValue).ElementIndex;
    uVar2 = (this->TypedValue).field_0xad;
    bVar4 = ((this->TypedValue).bBlockingHit ^ (param_1->TypedValue).bBlockingHit) & 1 ^ uVar2;
    (this->TypedValue).field_0xad = bVar4;
    (this->TypedValue).field_0xad = (bVar4 ^ (param_1->TypedValue).field_0xad) & 2 ^ bVar4;
    (this->TypedValue).PhysMaterial.WeakPtr = (param_1->TypedValue).PhysMaterial.WeakPtr;
    FActorInstanceHandle::FActorInstanceHandle
              (&(this->TypedValue).HitObjectHandle,&(param_1->TypedValue).HitObjectHandle);
    (this->TypedValue).Component.WeakPtr = (param_1->TypedValue).Component.WeakPtr;
    (this->TypedValue).PhysicsObjectOwner.WeakPtr = (param_1->TypedValue).PhysicsObjectOwner.WeakPtr
    ;
    (this->TypedValue).PhysicsObject = (param_1->TypedValue).PhysicsObject;
    (this->TypedValue).BoneName = (param_1->TypedValue).BoneName;
    (this->TypedValue).MyBoneName = (param_1->TypedValue).MyBoneName;
  }
  return this;
}

// operator= @ 149ca6980

TOptional<FPCGPinProperties> * __thiscall
TOptional<FPCGPinProperties>::operator=
          (TOptional<FPCGPinProperties> *this,TOptional<FPCGPinProperties> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if ((this->bIsSet != false) &&
         (pFVar1 = (this->TypedValue).AllowedTypes.Ids.AllocatorInstance.Data,
         pFVar1 != (FScriptContainerElement *)0x0)) {
        FMemory::Free(pFVar1);
      }
      FPCGPinProperties::FPCGPinProperties(&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      pFVar1 = (this->TypedValue).AllowedTypes.Ids.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      this->bIsSet = false;
    }
  }
  return this;
}

// GetValue @ 149cccbb0

FPCGPinProperties * __thiscall
TOptional<FPCGPinProperties>::GetValue(TOptional<FPCGPinProperties> *this)

{
  code *pcVar1;
  bool bVar2;
  FPCGPinProperties *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGPinProperties *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator= @ 149d351f0

TOptional<FString> * __thiscall
TOptional<FString>::operator=(TOptional<FString> *this,TOptional<FString> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FString> *pTVar4;
  
  if (param_1 != this) {
    if (*(int *)((longlong)&param_1->field0_0x0 + 0xc) == -1) {
      if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
        pFVar1 = (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
        (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
      }
    }
    else {
      pFVar1 = (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      (param_1->field0_0x0).TypedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&this->field0_0x0 + 8) =
           *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
      *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) =
           *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
      *(int *)((longlong)&param_1->field0_0x0 + 8) = 0;
      *(int *)((longlong)&param_1->field0_0x0 + 0xc) = 0;
      if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TOptional<FString> *)(*pcVar2)();
          return pTVar4;
        }
      }
    }
  }
  return this;
}

// Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&> @ 149de3ea0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
          (TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  
  (this->field0_0x0).TypedValue.HashSize = 0;
  pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  *(undefined8 *)&this->field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  (this->field0_0x0).TypedValue.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,param_1);
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this;
}

