// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioLinkEngine
// Functions: 2

// Remainder @ 1464cdde0

int __thiscall FLockingCircularSampleBuffer::Remainder(FLockingCircularSampleBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->Write;
    uVar2 = this->Read;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar3 = (this->Buffer).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar3 - (uVar1 - uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetCapacity @ 1464ce0b0

void __thiscall
FLockingCircularSampleBuffer::SetCapacity(FLockingCircularSampleBuffer *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCapacity > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedListenerBase.h"
                       ,0x1e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_1 & param_1 - 1U) != 0) {
    iVar7 = 1;
    if (param_1 != 0) {
      iVar7 = param_1;
    }
    uVar2 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    param_1 = 1 << ((byte)lVar3 & 0x1f);
  }
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar7 = (this->Buffer).ArrayNum;
    piVar1 = &(this->Buffer).ArrayNum;
    if (iVar7 < param_1) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,param_1 - iVar7,&(this->Buffer).AllocatorInstance,piVar1,
                         &(this->Buffer).ArrayMax);
      memset((this->Buffer).AllocatorInstance.Data + (longlong)iVar6 * 4,0,
             (longlong)(param_1 - iVar7) << 2);
    }
    else {
      if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
      if (param_1 < iVar7) {
        uVar8 = iVar7 - param_1;
        if ((int)(uVar8 | param_1) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar8 != 0) {
          _Dst = (this->Buffer).AllocatorInstance.Data + (longlong)param_1 * 4;
          iVar7 = (*piVar1 - uVar8) - param_1;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 4,(longlong)iVar7 << 2);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(this->Buffer).AllocatorInstance,*piVar1,&(this->Buffer).ArrayMax);
        }
      }
    }
    this->Mask = param_1 - 1U;
    this->Read = 0;
    this->Write = 0;
    if (param_1 - 1U == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioLink\\AudioLinkEngine\\Private\\BufferedListenerBase.h"
                         ,0x2b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001464ce279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

