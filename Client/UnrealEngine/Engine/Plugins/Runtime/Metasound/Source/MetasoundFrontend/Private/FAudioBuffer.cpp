// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// operator= @ 14ad9f160

FAudioBuffer * __thiscall
Metasound::FAudioBuffer::operator=(FAudioBuffer *this,FAudioBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Buffer).ArrayMax;
    piVar1 = &(this->Buffer).ArrayMax;
    _Src = (param_1->Buffer).AllocatorInstance.Data;
    iVar3 = (param_1->Buffer).ArrayNum;
    (this->Buffer).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  this->InitialNum = param_1->InitialNum;
  return this;
}

// FAudioBuffer @ 14af392b0

FAudioBuffer * __thiscall
Metasound::FAudioBuffer::FAudioBuffer(FAudioBuffer *this,FAudioBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Buffer).ArrayMax;
  iVar2 = (param_1->Buffer).ArrayNum;
  _Src = (param_1->Buffer).AllocatorInstance.Data;
  (this->Buffer).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->InitialNum = param_1->InitialNum;
  return this;
}

// FAudioBuffer @ 14af39340

FAudioBuffer * __thiscall
Metasound::FAudioBuffer::FAudioBuffer(FAudioBuffer *this,FOperatorSettings *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->Buffer).ArrayMax;
  (this->Buffer).ArrayNum = 0;
  *piVar1 = 0;
  piVar2 = &(this->Buffer).ArrayNum;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->NumFramesPerBlock;
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)this,piVar2,piVar1);
  memset((this->Buffer).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)iVar3 << 2);
  this->InitialNum = *piVar2;
  return this;
}

// FAudioBuffer @ 14af393c0

FAudioBuffer * __thiscall Metasound::FAudioBuffer::FAudioBuffer(FAudioBuffer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = &(this->Buffer).ArrayMax;
  piVar2 = &(this->Buffer).ArrayNum;
  *piVar2 = 0;
  *piVar1 = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,param_1,(ForAnyElementType *)this,piVar2,piVar1);
  memset((this->Buffer).AllocatorInstance.Data + (longlong)iVar3 * 4,0,(longlong)param_1 << 2);
  this->InitialNum = *piVar2;
  return this;
}

