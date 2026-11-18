// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator= @ 148513c00

FShaderSource * __thiscall FShaderSource::operator=(FShaderSource *this,FShaderSource *param_1)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if (this != param_1) {
    iVar3 = (param_1->Source).ArrayNum;
    piVar1 = &(this->Source).ArrayMax;
    pFVar4 = (param_1->Source).AllocatorInstance.Data;
    (this->Source).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Source).AllocatorInstance.Data,pFVar4,(longlong)iVar3);
      }
    }
  }
  pTVar2 = &this->SourceCompressed;
  if (pTVar2 != &param_1->SourceCompressed) {
    iVar3 = (param_1->SourceCompressed).ArrayNum;
    piVar1 = &(this->SourceCompressed).ArrayMax;
    pFVar4 = (param_1->SourceCompressed).AllocatorInstance.Data;
    (this->SourceCompressed).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3);
      }
    }
  }
  this->DecompressedCharCount = param_1->DecompressedCharCount;
  return this;
}

// SetLen @ 148542550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FShaderSource::SetLen(FShaderSource *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = &(this->Source).ArrayNum;
  iVar4 = *piVar1;
  uVar6 = param_1 + 0xf;
  if (iVar4 < (int)uVar6) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar6 - iVar4,(ForAnyElementType *)this,piVar1,&(this->Source).ArrayMax);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar4) {
      uVar7 = iVar4 - uVar6;
      if (((int)(uVar7 | uVar6) < 0) &&
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
        pFVar5 = (this->Source).AllocatorInstance.Data + (int)uVar6;
        iVar4 = (*piVar1 - uVar7) - uVar6;
        if (iVar4 != 0) {
          memmove(pFVar5,pFVar5 + (int)uVar7,(longlong)iVar4);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(ForAnyElementType *)this,iVar4 - uVar7,&(this->Source).ArrayMax);
        }
      }
    }
  }
  pFVar5 = (this->Source).AllocatorInstance.Data + param_1;
  *(undefined8 *)pFVar5 = 0;
  *(undefined4 *)(pFVar5 + 8) = 0;
  *(undefined2 *)(pFVar5 + 0xc) = 0;
  pFVar5[0xe] = (FScriptContainerElement)0x0;
  piVar1 = &(this->SourceCompressed).ArrayMax;
  (this->SourceCompressed).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SourceCompressed).AllocatorInstance,0,piVar1);
  }
  this->DecompressedCharCount = 0;
  return;
}

