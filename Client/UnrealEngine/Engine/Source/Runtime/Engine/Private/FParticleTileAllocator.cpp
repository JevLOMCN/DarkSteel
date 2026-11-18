// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Allocate @ 1480fd310

uint __thiscall FParticleTileAllocator::Allocate(FParticleTileAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar7 = (this->FreeTiles).ArrayNum;
  piVar1 = &(this->FreeTiles).ArrayNum;
  if (iVar7 < 1) {
    if (this->bAllowResizing != false) {
      fVar10 = powf(__real_40800000,(float)this->ResizeTileAllocCount);
      iVar7 = (int)(longlong)(fVar10 * (float)this->InitialTileCount);
      uVar8 = iVar7 * 4;
      if ((uVar8 <= this->MaxTileCount) &&
         (uVar8 <= `public:_bool___cdecl_FParticleTileAllocator::Resize(void)___ptr64'::__l2::
                   MaxMortonIndex)) {
        uVar3 = iVar7 * 3;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar3,&(this->FreeTiles).AllocatorInstance,piVar1,&(this->FreeTiles).ArrayMax
                  );
        uVar9 = 0;
        if (uVar3 != 0) {
          do {
            uVar5 = 0;
            if ((int)uVar9 < *piVar1) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar8 = (*pcVar2)();
              return uVar8;
            }
            iVar7 = uVar8 - uVar9;
            lVar6 = (longlong)(int)uVar9;
            uVar9 = uVar9 + 1;
            *(int *)((this->FreeTiles).AllocatorInstance.Data + lVar6 * 4) = iVar7 + -1;
          } while (uVar9 < uVar3);
        }
        this->ResizeTileAllocCount = this->ResizeTileAllocCount + 1;
        this->bDirtyAlloc = true;
        if ((*piVar1 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        iVar7 = *piVar1;
        goto LAB_1480fd48c;
      }
    }
    uVar8 = 0xffffffff;
  }
  else {
LAB_1480fd48c:
    uVar8 = *(uint *)((this->FreeTiles).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    *piVar1 = iVar7 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeTiles).AllocatorInstance,iVar7 + -1,&(this->FreeTiles).ArrayMax);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar8;
}

// GetAllocatedTileCount @ 14810ff10

int __thiscall FParticleTileAllocator::GetAllocatedTileCount(FParticleTileAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  float fVar2;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = powf(__real_40800000,(float)this->ResizeTileAllocCount);
    uVar1 = this->InitialTileCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (int)(fVar2 * (float)uVar1);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

