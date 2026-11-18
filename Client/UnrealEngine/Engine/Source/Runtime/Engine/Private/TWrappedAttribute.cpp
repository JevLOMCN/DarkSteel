// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Allocate @ 147346280

void __thiscall
UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>::Allocate
          (TWrappedAttribute<TSizedDefaultAllocator<32>_> *this,UScriptStruct *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar5 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    uVar6 = iVar5 + -1 + (int)param_1->_padding_ & -iVar5;
    if (((int)uVar6 < 1) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2142383606264233908>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                           ,0x4c,"StructureSize > 0"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->StructMemory).ArrayNum;
    piVar1 = &(this->StructMemory).ArrayNum;
    if (iVar5 < (int)uVar6) {
      iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar6 - iVar5,(ForAnyElementType *)this,piVar1,
                         &(this->StructMemory).ArrayMax);
      memset((this->StructMemory).AllocatorInstance.Data + iVar4,0,(longlong)(int)(uVar6 - iVar5));
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < iVar5) {
        uVar7 = iVar5 - uVar6;
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
          _Dst = (this->StructMemory).AllocatorInstance.Data + (int)uVar6;
          iVar5 = (*piVar1 - uVar6) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar5);
          }
          *piVar1 = *piVar1 - uVar7;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(ForAnyElementType *)this,*piVar1,&(this->StructMemory).ArrayMax);
        }
      }
    }
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1,(this->StructMemory).AllocatorInstance.Data,1)
    ;
  }
  return;
}

// Allocate @ 1474bc910

void __thiscall
UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>::Allocate
          (TWrappedAttribute<TMemStackAllocator<0>_> *this,UScriptStruct *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uchar *_Dst;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                       ,0x48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar5 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    uVar6 = iVar5 + -1 + (int)param_1->_padding_ & -iVar5;
    if (((int)uVar6 < 1) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2142383606264233908>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\WrappedAttribute.h"
                           ,0x4c,"StructureSize > 0"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->StructMemory).ArrayNum;
    piVar1 = &(this->StructMemory).ArrayNum;
    if (iVar5 < (int)uVar6) {
      iVar4 = Core::Private::ReallocGrow<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                        (1,1,uVar6 - iVar5,(ForElementType<unsigned_char> *)this,piVar1,
                         &(this->StructMemory).ArrayMax);
      memset((this->StructMemory).AllocatorInstance.Data + iVar4,0,(longlong)(int)(uVar6 - iVar5));
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < iVar5) {
        uVar7 = iVar5 - uVar6;
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
          _Dst = (this->StructMemory).AllocatorInstance.Data + (int)uVar6;
          iVar5 = (*piVar1 - uVar6) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar5);
          }
          *piVar1 = *piVar1 - uVar7;
          Core::Private::ReallocShrink<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                    (1,1,(ForElementType<unsigned_char> *)this,*piVar1,
                     &(this->StructMemory).ArrayMax);
        }
      }
    }
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1,(this->StructMemory).AllocatorInstance.Data,1)
    ;
  }
  return;
}

