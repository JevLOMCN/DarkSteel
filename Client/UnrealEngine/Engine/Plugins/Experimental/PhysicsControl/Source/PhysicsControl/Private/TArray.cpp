// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 6

// Append<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> @ 14d9b54e0

void __thiscall
TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::
Append<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>
          (TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *this,
          TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *param_1)

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
                      (0x18,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<FPhysicsControlSetUpdate,FPhysicsControlSetUpdate,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,
               (FPhysicsControlSetUpdate *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 14d9c1780

TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *this,
          TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x14,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
    }
  }
  return this;
}

// operator= @ 14d9c1820

TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_> *this
          ,TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
           *param_1)

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
              (0x80,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 7);
    }
  }
  return this;
}

// operator= @ 14d9c18c0

TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *this,
          TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x50,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x50);
    }
  }
  return this;
}

// operator= @ 14d9c1960

TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *this,
          TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x18,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
    }
  }
  return this;
}

// operator= @ 14d9c1a00

TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *this,
          TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FPhysicsControlSetUpdate *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPhysicsControlSetUpdate,int>
              ((FPhysicsControlSetUpdate *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FPhysicsControlSetUpdate *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FPhysicsControlSetUpdate,FPhysicsControlSetUpdate,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

