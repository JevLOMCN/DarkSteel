// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// ~IMeshLODData @ 14dfb0a00

void __thiscall GroomBinding_Mesh::IMeshLODData::~IMeshLODData(IMeshLODData *this)

{
  *this = (IMeshLODData)&___7IMeshLODData_GroomBinding_Mesh__6B_;
  return;
}

// GetSectionsMatchingMaterialIndex @ 14dfc9b30

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GroomBinding_Mesh::IMeshLODData::GetSectionsMatchingMaterialIndex
          (IMeshLODData *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  int local_18 [4];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar6 = (**(code **)((longlong)*this + 0x18))();
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (*piVar1 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar6,&__return_storage_ptr__->AllocatorInstance,__return_storage_ptr__->ArrayNum
               ,piVar1);
  }
  local_18[0] = 0;
  iVar7 = (**(code **)((longlong)*this + 0x18))(this);
  do {
    if (iVar7 <= local_18[0]) {
      return __return_storage_ptr__;
    }
    cVar4 = (**(code **)((longlong)*this + 0x28))(this);
    if (cVar4 != '\0') {
      plVar9 = (longlong *)(**(code **)((longlong)*this + 0x20))(this,local_18[0]);
      iVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
      if (iVar8 == param_1) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar10;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             local_18[0];
      }
    }
    local_18[0] = local_18[0] + 1;
  } while( true );
}

// IsValidMaterialIndex @ 14dfd07c0

bool __thiscall
GroomBinding_Mesh::IMeshLODData::IsValidMaterialIndex(IMeshLODData *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = (**(code **)((longlong)*this + 0x18))();
  if (0 < iVar2) {
    do {
      cVar1 = (**(code **)((longlong)*this + 0x28))(this,iVar5);
      if (cVar1 != '\0') {
        plVar4 = (longlong *)(**(code **)((longlong)*this + 0x20))(this,iVar5);
        iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (param_1 == iVar3) {
          return true;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return false;
}

