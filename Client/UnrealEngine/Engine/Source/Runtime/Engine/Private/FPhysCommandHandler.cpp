// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FPhysCommandHandler @ 1482dda40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPhysCommandHandler::~FPhysCommandHandler(FPhysCommandHandler *this)

{
  FScriptContainerElement *pFVar1;
  
  if (((this->PendingCommands).ArrayNum != 0) && (2 < (byte)LogPhysics._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
  }
  pFVar1 = (this->PendingCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// EnqueueCommand @ 148300530

void __thiscall
FPhysCommandHandler::EnqueueCommand(FPhysCommandHandler *this,FPhysPendingCommand *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysCommandHandler.cpp"
                       ,0x48,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->PendingCommands).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->PendingCommands).ArrayMax * 4)) {
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
  iVar5 = (this->PendingCommands).ArrayNum;
  piVar1 = &(this->PendingCommands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,piVar1);
  }
  (this->PendingCommands).ArrayNum = iVar5 + 1;
  *(Type *)((this->PendingCommands).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       param_1->CommandType;
  return;
}

// ExecuteCommands @ 1483008f0

void __thiscall FPhysCommandHandler::ExecuteCommands(FPhysCommandHandler *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->PendingCommands).ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      switch(*(undefined4 *)((this->PendingCommands).AllocatorInstance.Data + lVar6)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        break;
      default:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysCommandHandler.cpp"
                           ,0x40,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = (this->PendingCommands).ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

// Flush @ 148303e90

void __thiscall FPhysCommandHandler::Flush(FPhysCommandHandler *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysCommandHandler.cpp"
                         ,0x12,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->PendingCommands).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      switch(*(undefined4 *)((this->PendingCommands).AllocatorInstance.Data + lVar7)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        break;
      default:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysCommandHandler.cpp"
                           ,0x40,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (this->PendingCommands).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar5);
  }
  piVar1 = &(this->PendingCommands).ArrayMax;
  (this->PendingCommands).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// HasPendingCommands @ 14830ebc0

bool __thiscall FPhysCommandHandler::HasPendingCommands(FPhysCommandHandler *this)

{
  return 0 < (this->PendingCommands).ArrayNum;
}

